#pragma once
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    public:

        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm(std::string t);


        ~RobotomyRequestForm();

        void    workon(void) const;
};

std::ostream &operator<<(std::ostream &o, const RobotomyRequestForm *a);

