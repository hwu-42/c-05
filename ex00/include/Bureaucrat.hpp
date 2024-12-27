#pragma once
#include <iostream>

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

        int                 getGrade(void);
        const std::string   getName(void);
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
};

std::ostream &operator<<(std::ostream &o, Bureaucrat *a);

