#pragma once
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
    
    public:
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat(int grade);
        Bureaucrat(std::string name);
        Bureaucrat(std::string name, int grade);

        ~Bureaucrat();

        //Bureaucrat &operator=(const Bureaucrat &src);

        int                 getGrade(void) const;
        const std::string   getName(void) const;
        void                upGrade(void);
        void                downGrade(void);

        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        bool    signForm(AForm *f);
        void    executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat *a);

