#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("default"), grade(150)
{

}
Bureaucrat::Bureaucrat(const Bureaucrat &src)
{}
Bureaucrat::Bureaucrat(int grade)
{}
Bureaucrat::Bureaucrat(std::string name)
{}
Bureaucrat::Bureaucrat(std::string name, int grade)
{}
Bureaucrat::~Bureaucrat()
{}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{}

int Bureaucrat::getGrade(void)
{}
const std::string Bureaucrat::getName(void)
{}
void    Bureaucrat::downGrade(void)
{}
void    Bureaucrat::downGrade(void)
{}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{}
std::ostream &operator<<(std::ostream &o, Bureaucrat *a)
{}