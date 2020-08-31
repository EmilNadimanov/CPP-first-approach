#include "Bureaucrat.hpp"

/* OPERATORS OVERRIDE */

void 			Bureaucrat::operator=(Bureaucrat const &obj)
{
	this->grade = obj.grade;
}

/* MEMBER FUNCTIONS */

std::string		Bureaucrat::getName() const
{
	return this->name;
}

int				Bureaucrat::getGrade() const
{
	return this->grade;
}

void			Bureaucrat::gradeDecr()
{
	try
	{
		if (grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
		{
			this->grade++;
			std::cout << this->name << "'s grade lowered to "
				<< grade << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void			Bureaucrat::gradeIncr()
{
	try
	{	
		if (grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
		{
			this->grade--;
			std::cout << this->name << "'s grade raised to "
				<< grade << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

std::ostream &	operator<<(std::ostream &os, Bureaucrat const& obj)
{
	return os << obj.getName() << ", bureaucrat, grade " <<
		obj.getGrade() << ".";
}
