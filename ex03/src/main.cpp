#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int main(void)
{
	std::cout << "test ShrubberyCreationForm:\n";
	{
		Bureaucrat *a = new Bureaucrat("officerA", 150);
		Bureaucrat *c = new Bureaucrat("officerC", 130);
		AForm *b = new ShrubberyCreationForm("buy");
		std::cout << std::endl;

		std::cout << "a:" << a << std::endl;
		std::cout << "b:" << b << std::endl;
		std::cout << "c:" << c << std::endl;

		std::cout << "try sign:\n";
		try
		{
			b->beSigned(a);
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << a << " was not able to sign " << b << ": " << e.what() << std::endl;
		}
		
		std::cout << "now b:" << b << std::endl;

		std::cout << "try execute fail:\n";
		try
		{
			b->execute(*a);
		}
		catch(AForm::NotSignedException &e)
		{
			std::cerr << a << " was not able to execute " << b << ": " << e.what() << std::endl;
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << a << " was not able to execute " << b << ": " << e.what() << std::endl;
		}

		std::cout << "try sign again:\n";
		try
		{
			b->beSigned(c);
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << c << " was not able to sign " << b << ": " << e.what() << std::endl;
		}
		std::cout << "now b:" << b << std::endl;

		std::cout << "try execute success:\n";
		try
		{
			b->execute(*c);
		}
		catch(AForm::NotSignedException &e)
		{
			std::cerr << a << " was not able to execute " << b << ": " << e.what() << std::endl;
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << c << " was not able to execute " << b << ": " << e.what() << std::endl;
		}

		delete a;
		delete b;
		delete c;
	}
	std::cout << "\n\n\n";
	std::cout << "test RobotomyRequestForm:\n";
	{
		Bureaucrat *a = new Bureaucrat("officerA", 150);
		Bureaucrat *c = new Bureaucrat("officerC", 130);
		AForm *b = new RobotomyRequestForm("buy");
		std::cout << std::endl;

		std::cout << "a:" << a << std::endl;
		std::cout << "b:" << b << std::endl;
		std::cout << "c:" << c << std::endl;

		std::cout << "try sign:\n";
		try
		{
			b->beSigned(a);
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << a << " was not able to sign " << b << ": " << e.what() << std::endl;
		}
		
		std::cout << "now b:" << b << std::endl;

		std::cout << "try execute fail:\n";
		try
		{
			b->execute(*a);
		}
		catch(AForm::NotSignedException &e)
		{
			std::cerr << a << " was not able to execute " << b << ": " << e.what() << std::endl;
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << a << " was not able to execute " << b << ": " << e.what() << std::endl;
		}

		std::cout << "try sign again:\n";
		try
		{
			b->beSigned(c);
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << c << " was not able to sign " << b << ": " << e.what() << std::endl;
		}
		std::cout << "now b:" << b << std::endl;

		std::cout << "try execute success:\n";
		try
		{
			b->execute(*c);
		}
		catch(AForm::NotSignedException &e)
		{
			std::cerr << a << " was not able to execute " << b << ": " << e.what() << std::endl;
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << c << " was not able to execute " << b << ": " << e.what() << std::endl;
		}
		try
		{
			b->execute(*c);
		}
		catch(AForm::NotSignedException &e)
		{
			std::cerr << a << " was not able to execute " << b << ": " << e.what() << std::endl;
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << c << " was not able to execute " << b << ": " << e.what() << std::endl;
		}

		delete a;
		delete b;
		delete c;
	}


	std::cout << "\n\n\n";
	std::cout << "test PresidentialPardonForm:\n";
	{
		Bureaucrat *a = new Bureaucrat("officerA", 150);
		Bureaucrat *c = new Bureaucrat("officerC", 130);
		AForm *b = new PresidentialPardonForm("buy");
		std::cout << std::endl;

		std::cout << "a:" << a << std::endl;
		std::cout << "b:" << b << std::endl;
		std::cout << "c:" << c << std::endl;

		std::cout << "try sign:\n";
		try
		{
			b->beSigned(a);
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << a << " was not able to sign " << b << ": " << e.what() << std::endl;
		}
		
		std::cout << "now b:" << b << std::endl;

		std::cout << "try execute fail:\n";
		try
		{
			b->execute(*a);
		}
		catch(AForm::NotSignedException &e)
		{
			std::cerr << a << " was not able to execute " << b << ": " << e.what() << std::endl;
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << a << " was not able to execute " << b << ": " << e.what() << std::endl;
		}

		std::cout << "try sign again:\n";
		try
		{
			b->beSigned(c);
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << c << " was not able to sign " << b << ": " << e.what() << std::endl;
		}
		std::cout << "now b:" << b << std::endl;

		std::cout << "try execute success:\n";
		try
		{
			b->execute(*c);
		}
		catch(AForm::NotSignedException &e)
		{
			std::cerr << a << " was not able to execute " << b << ": " << e.what() << std::endl;
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << c << " was not able to execute " << b << ": " << e.what() << std::endl;
		}
		Bureaucrat *d = new Bureaucrat("officerD", 4);
		std::cout << "try sign again:\n";
		try
		{
			b->beSigned(d);
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << d << " was not able to sign " << b << ": " << e.what() << std::endl;
		}
		std::cout << "now b:" << b << std::endl;

		std::cout << "try execute success:\n";
		try
		{
			b->execute(*d);
		}
		catch(AForm::NotSignedException &e)
		{
			std::cerr << d << " was not able to execute " << b << ": " << e.what() << std::endl;
		}
		catch(AForm::GradeTooLowException &e)
		{
			std::cerr << d << " was not able to execute " << b << ": " << e.what() << std::endl;
		}



		delete a;
		delete b;
		delete c;
		delete d;
	}


	std::cout << "\n\n\n";
	std::cout << "test Intern:\n";
	{
		std::cout << "test make valid type of form:\n";
		AForm* f = Intern::make("RobotomyRequestForm", "Tom");
		std::cout << f << std::endl;
		delete (f);

		std::cout << "test make invalid type of form:\n";
		f = Intern::make("nonexist_form", "Tom");
		std::cout << f << std::endl;
		delete (f);
	}
}