#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string   type;
        bool                is_signed;
        const int           sign_grade;
        const int           exec_grade;
        std::string         target;
    
    public:
        AForm(void);
        AForm(const AForm &src);
        AForm(std::string type, bool sign, int sGrade, int xGrade, std::string t);
        //AForm(std::string name, int grade);

        virtual ~AForm();

        AForm &operator=(const AForm &src);

        int                 getSGrade(void) const;
        const std::string   getType(void) const;
        int                 getXGrade(void) const;
        bool                get_is_signed(void) const;
        std::string         get_target(void) const;
        void                set_target(std::string t);

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
        class NotSignedException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        bool    beSigned(Bureaucrat *b);
        void    execute(Bureaucrat const & executor) const;
        virtual void    workon(void) const = 0;
};

std::ostream &operator<<(std::ostream &o, const AForm *a);

