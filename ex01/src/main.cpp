#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		Bureaucrat *a = new Bureaucrat("officer", 120);
		Form *b = new Form("buy", false, 100, 80);
		std::cout << std::endl;

		std::cout << a;
		std::cout << b;

		try
		{
			b->beSigned(a);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << a << " was not able to sign " << b << ": " << e.what() << std::endl;
		}

		Bureaucrat *c = new Bureaucrat(*a);
		Form *d = new Form(*b);

		try
		{
			b->beSigned(a);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << a << " was not able to sign " << b << ": " << e.what() << std::endl;
		}

		delete a;
		delete b;
		delete c;
		delete d;

	}

		Bureaucrat *a = new Bureaucrat("officerb", 90);
		Form *b = new Form("buy", false, 100, 80);
		std::cout << std::endl;

		std::cout << a;
		std::cout << b;

		try
		{
			b->beSigned(a);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << a << " was not able to sign " << b << ": " << e.what() << std::endl;
		}
	
}