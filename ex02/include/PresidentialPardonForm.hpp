#pragma once
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    public:
        //Form(void);
        PresidentialPardonForm(const PresidentialPardonForm &src);
        PresidentialPardonForm(std::string t);
        //AForm(std::string name, int grade);

        ~PresidentialPardonForm();

        void    workon(void) const;
};

std::ostream &operator<<(std::ostream &o, const PresidentialPardonForm *a);

