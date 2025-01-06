#pragma once
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    public:

        PresidentialPardonForm(const PresidentialPardonForm &src);
        PresidentialPardonForm(std::string t);


        ~PresidentialPardonForm();

        void    workon(void) const;
};

std::ostream &operator<<(std::ostream &o, const PresidentialPardonForm *a);

