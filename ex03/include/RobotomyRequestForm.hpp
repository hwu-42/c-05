#pragma once
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    public:
        //Form(void);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm(std::string t);
        //AForm(std::string name, int grade);

        ~RobotomyRequestForm();

        void    workon(void) const;
};

std::ostream &operator<<(std::ostream &o, const RobotomyRequestForm *a);

