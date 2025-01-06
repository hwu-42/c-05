#include "Form.hpp"


Form::Form(void): type("default"), is_signed(false), sign_grade(150), exec_grade(150)
{
	std::cout << "default constructor called" << std::endl;
}
Form::Form(const Form &src): type(src.type), is_signed(src.is_signed), sign_grade(src.sign_grade), exec_grade(src.exec_grade)
{
	std::cout << "copy constructor called" << std::endl;
}


Form::Form(std::string type, bool sign, int sGrade, int xGrade): type(type), is_signed(sign), sign_grade(sGrade), exec_grade(xGrade)
{
	std::cout << "full Form constructor called" << std::endl;
	if (sign_grade < 1)
		throw GradeTooHighException();
	else if (sign_grade > 150)
		throw GradeTooLowException();
	else if (exec_grade < 1)
		throw GradeTooHighException();
	else if (exec_grade > 150)
		throw GradeTooLowException();
}
Form::~Form()
{
	std::cout << "destructor called" << std::endl;
}
Form &Form::operator=(const Form &src)
{
	if (this != &src)
	{
		this->is_signed = src.get_is_signed();
	}
	return (*this);
}

int Form::getSGrade(void)
{
	return (this->sign_grade);
}
int Form::getXGrade(void)
{
	return (this->exec_grade);
}
const std::string Form::getType(void) const
{
	return (this->type);
}
bool	Form::get_is_signed(void) const
{
	return (this->is_signed);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}
bool	Form::beSigned(Bureaucrat *b)
{
	if (this->sign_grade >= b->getGrade())
	{
		std::cout << b << "signed" << this << std::endl;
		return (true);
	}
	else
	{
		std::cout << b << "can not sign" << this << "because grade is too low"<< std::endl;
		return (false);
	}
}
std::ostream &operator<<(std::ostream &o, Form *a)
{
	o << "Form:" << a->getType() << "(sGrade:" << a->getSGrade() << ",xGrade:" << a->getXGrade() << ",signed" << a->get_is_signed() << "," << ")";
	return (o);
}