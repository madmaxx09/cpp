#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat worker("Max", 1);
		std::cout << worker << std::endl;
		worker.upGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}