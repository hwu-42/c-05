#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): AForm(src)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(std::string t): AForm("PresidentialPardonForm", false, 25, 5, t)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}


std::ostream &operator<<(std::ostream &o, const PresidentialPardonForm *s)
{
	if (!s)
    {
        o << "PresidentialPardonForm: nullptr";
        return o;
    }
	o << static_cast<const AForm *>(s);
	return (o);
}

void	PresidentialPardonForm::workon(void) const
{
		std::cout << this->get_target() << "is pardonned\n";
}