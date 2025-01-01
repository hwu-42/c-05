#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): AForm(src)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(std::string t): AForm("RobotomyRequestForm", false, 72, 45, t)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}


std::ostream &operator<<(std::ostream &o, const RobotomyRequestForm *s)
{
	if (!s)
    {
        o << "RobotomyRequestForm: nullptr";
        return o;
    }
	o << static_cast<const AForm *>(s);
	return (o);
}

static int	robotSuccess = 0;

void	RobotomyRequestForm::workon(void) const
{
		std::cout << this << "is executed, ";
		if (robotSuccess++ % 2 == 0)
			std::cout << this->get_target() << "is robotomized\n";
		else
			std::cout << "but failed\n";
}