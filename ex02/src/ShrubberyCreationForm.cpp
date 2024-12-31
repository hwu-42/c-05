#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): AForm(src)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string t): AForm("ShrubberyCreationForm", false, 145, 137, t)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}


std::ostream &operator<<(std::ostream &o, const ShrubberyCreationForm *s)
{
	if (!s)
    {
        o << "ShrubberyCreationForm: nullptr";
        return o;
    }
	o << static_cast<const AForm *>(s);
	return (o);
}

void	ShrubberyCreationForm::workon(void) const
{
		std::ofstream outfile (this->get_target().append("_shrubbery").c_str());

		outfile <<
		"         v" << std::endl <<
		"        >X<" << std::endl <<
		"         A" << std::endl <<
		"        d$b" << std::endl <<
		"      .d\\$$b." << std::endl <<
		"    .d$i$$\\$$b." << std::endl <<
		"       d$$@b" << std::endl <<
		"      d\\$$$ib" << std::endl <<
		"    .d$$$\\$$$b" << std::endl <<
		"  .d$$@$$$$\\$$ib." << std::endl <<
		"      d$$i$$b" << std::endl <<
		"     d\\$$$$@$b" << std::endl <<
		"  .d$@$$\\$$$$$@b." << std::endl <<
		".d$$$$i$$$\\$$$$$$b." << std::endl <<
		"        ###" << std::endl <<
		"        ###" << std::endl <<
		"        ###" << std::endl;

		outfile.close();
}