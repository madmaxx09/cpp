#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;	
	public:
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();

		Bureaucrat(const Bureaucrat& src);
		Bureaucrat& operator=(const Bureaucrat& rhs);

		class GradeTooHighException : public std::exception
		{
			public : 
				virtual const char* what() const throw() {return "The given grade is too high the maximum is 1";}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw() {return "The given grade is too low the minimum is 150";}
		};
		
		std::string getName() const;
		int			getGrade() const;
		void		upGrade();
		void		downGrade();
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);


