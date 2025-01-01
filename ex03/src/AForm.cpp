#include "../include/AForm.hpp"

AForm::AForm(const AForm &src): type(src.type), is_signed(src.is_signed), sign_grade(src.sign_grade), exec_grade(src.exec_grade)
{
	std::cout << "copy constructor called" << std::endl;
}


AForm::AForm(std::string type, bool sign, int sGrade, int xGrade, std::string t): type(type), is_signed(sign), sign_grade(sGrade), exec_grade(xGrade), target(t)
{
	std::cout << "name & grade constructor called" << std::endl;
	if (sign_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150)
		throw GradeTooLowException();
	else if (exec_grade < 1)
		throw GradeTooHighException();
	else if (exec_grade > 150)
		throw GradeTooLowException();
}
AForm::~AForm()
{
	std::cout << "destructor called" << std::endl;
}

int AForm::getSGrade(void) const
{
	return (this->sign_grade);
}
int AForm::getXGrade(void) const
{
	return (this->exec_grade);
}
const std::string AForm::getType(void) const
{
	return (this->type);
}
bool	AForm::get_is_signed(void) const
{
	return (this->is_signed);
}
std::string	AForm::get_target(void) const
{
	return (this->target);
}
void	AForm::set_target(std::string t)
{
	this->target = t;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}
const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}
const char *AForm::NotSignedException::what() const throw()
{
	return ("Form is not signed yet!\n");
}
bool	AForm::beSigned(Bureaucrat *b)
{
	if (this->sign_grade >= b->getGrade())
	{
		std::cout << b << "signed" << this << std::endl;
		this->is_signed = true;
		return (true);
	}
	else
	{
		throw GradeTooLowException();
		return (false);
	}
}
std::ostream& operator<<(std::ostream& o, const AForm* a)
{
	if (!a)
        o << "AForm: nullptr";
	else
		o << "AForm:" << a->getType() << "(sGrade:" << a->getSGrade() << ",xGrade:" << a->getXGrade() << ",signed:" << a->get_is_signed() << ",target:" << a->get_target() << ")";
	return (o);
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (is_signed == false)
		throw NotSignedException();
	if (executor.getGrade() > exec_grade)
		throw GradeTooLowException();
	std::cout << &executor << " executed " << this << std::endl;
	workon();
}