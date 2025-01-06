#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   type;
        bool                is_signed;
        const int           sign_grade;
        const int           exec_grade;
    
    public:
        Form(void);
        Form(const Form &src);
        Form(std::string type, bool sign, int sGrade, int xGrade);
        //Form(std::string name, int grade);

        ~Form();

        Form &operator=(const Form &src);

        int                 getSGrade(void);
        const std::string   getType(void) const;
        int                 getXGrade(void);
        bool                get_is_signed(void) const;

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

        bool    beSigned(Bureaucrat *b);
};

std::ostream &operator<<(std::ostream &o, Form *a);

