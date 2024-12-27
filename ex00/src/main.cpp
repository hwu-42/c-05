#include "Bureaucrat.hpp"

int main(void)
{
	{

		Bureaucrat *a = new Bureaucrat();



		std::cout << a;

		try // in my opinion would make more sense if the try-catch blocks would have been inside the class itself already
		{
		    a->upGrade();
		}
		catch(Bureaucrat::GradeTooHighException &e) // the try-catch blocks inside the class are commented out but fully functional
		{
			std::cerr << "upgrade of " << a->getName() <<
			" failed: " << e.what() << std::endl;
		}

		std::cout << a;

		try
		{
		    a->downGrade();
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "downgrade of " << a->getName() <<
			" failed: " << e.what() << std::endl;
		}

		std::cout << a;

		delete a;
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;

		Bureaucrat *a = new Bureaucrat(1);
		std::cout << std::endl;

		std::cout << a;

		try // in my opinion would make more sense if the try-catch blocks would have been inside the class itself already
		{
		    a->upGrade();
		}
		catch(Bureaucrat::GradeTooHighException &e) // the try-catch blocks inside the class are commented out but fully functional
		{
			std::cerr << "upgrade of " << a->getName() <<
			" failed: " << e.what() << std::endl;
		}

		std::cout << a;

		try
		{
		    a->downGrade();
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "downgrade of " << a->getName() <<
			" failed: " << e.what() << std::endl;
		}

		std::cout << a;
		delete a;
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	{
		Bureaucrat *a = NULL;

		try
		{
			a = new Bureaucrat(0);
		}
		catch(Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << "Construction failed: " <<
			e.what() << std::endl;
		}

		if (a != NULL)
		{
			delete a;
		}

		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	{
		Bureaucrat *a = NULL;

		try
		{
			a = new Bureaucrat(160);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "construction failed: " <<
			e.what() << std::endl;
		}

		if (a != NULL)
		{
			delete a;
		}
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	{

		Bureaucrat *a = new Bureaucrat("Peter", 120);
		std::cout << std::endl;

		std::cout << a;
		std::cout << std::endl;
		a->downGrade();

		std::cout << a;
		std::cout << std::endl;

		Bureaucrat *b = new Bureaucrat(*a);
		std::cout << std::endl;
		delete a;
		std::cout << std::endl;


		std::cout << b;
		std::cout << std::endl;
		b->upGrade();
		std::cout << b;
		std::cout << std::endl;

		delete b;

	}
}