#pragma once
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
    public:

        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ShrubberyCreationForm(std::string t);


        ~ShrubberyCreationForm();

        void    workon(void) const;
};

std::ostream &operator<<(std::ostream &o, const ShrubberyCreationForm *a);

