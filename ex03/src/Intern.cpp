#include "../include/Intern.hpp"




AForm* Intern::make(const std::string& name, std::string target)
{
    // Define the map with form names and corresponding creator functions
    static std::map<std::string, FormCreator> factory_map;

    // Populate the map only once
    if (factory_map.empty()) {
        factory_map["ShrubberyCreationForm"] = &createShrubberyCreationForm;
        factory_map["RobotomyRequestForm"] = &createRobotomyRequestForm;
        factory_map["PresidentialPardonForm"] = &createPresidentialPardonForm;
    }

    std::map<std::string, FormCreator>::iterator it = factory_map.find(name);
    if (it != factory_map.end()) {
        return it->second(target); // Call the creator function
    } else {
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