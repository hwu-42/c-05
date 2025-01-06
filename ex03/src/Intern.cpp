#include "../include/Intern.hpp"

AForm* Intern::make(const std::string& name, std::string target)
{
    
    switch (name == "ShrubberyCreationForm" ? 0 : name == "RobotomyRequestForm" ? 1 : name == "PresidentialPardonForm" ? 2 : -1)
    {
    case 0:
        return createShrubberyCreationForm(target);
    case 1:
        return createRobotomyRequestForm(target);
    case 2:
        return createPresidentialPardonForm(target);
    default:
        std::cerr << "Unknown form type: " << name << std::endl;
        return NULL;
    }
}
AForm* Intern::createShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}