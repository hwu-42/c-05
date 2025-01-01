#pragma once
#include <iostream>
#include <map>
#include <string>
#include "AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"


class Intern
{
public:
    // Function pointer type for form creation
    typedef AForm* (*FormCreator)(std::string target);

    static AForm* make(const std::string& name, std::string target);

private:
    // Creator functions
    static AForm* createShrubberyCreationForm(std::string target);
    static AForm* createRobotomyRequestForm(std::string target);
    static AForm* createPresidentialPardonForm(std::string target);
};