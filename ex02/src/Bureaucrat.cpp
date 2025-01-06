#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("default"), grade(150)
{
	std::cout << "default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &src): name(src.name), grade(src.grade)
{
	std::cout << "copy constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(int grade): name("default")
{
	std::cout << "grade constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}
Bureaucrat::Bureaucrat(std::string name): name(name), grade(150)
{
	std::cout << "name constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	std::cout << "name & grade constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "assignation operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->grade = src.grade;
	return (*this);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}
const std::string Bureaucrat::getName(void) const
{
	return (this->name);
}
void    Bureaucrat::downGrade(void)
{
	if (this->grade == 150)
		std::cout << "can not downgrade further" << std::endl;
	else
		(this->grade)++;
	std::cout << "now the grade is " << this->grade << std::endl;
}
void    Bureaucrat::upGrade(void)
{
	if (this->grade == 1)
		std::cout << "can not upgrade further" << std::endl;
	else
		(this->grade)--;
	std::cout << "now the grade is " << this->grade << std::endl;
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}
bool	Bureaucrat::signForm(AForm *f)
{
	if (this->grade <= f->getSGrade())
	{
		std::cout << this << "signed" << f << std::endl;
		return (true);
	}
	else
	{
		std::cout << this << "can not sign" << f << "because grade is too low"<< std::endl;
		return (false);
	}
}
void    Bureaucrat::executeForm(AForm const & form)
{
	form.execute(*this);
}
std::ostream &operator<<(std::ostream &o, const Bureaucrat *a)
{
	o << "Bureaucrat:" << a->getName() << "(" << a->getGrade() << ")";
	return (o);
}