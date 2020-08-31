#ifndef _BUREAUCRAT_
# define _BUREAUCRAT_
#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;
	public:
					Bureaucrat() : name("Poligraph"), grade(140) {}
					Bureaucrat(Bureaucrat const &obj) : name(obj.name), grade(obj.grade) {}
					Bureaucrat(std::string in_name, int in_grade) : name(in_name), grade(in_grade) {}
					~Bureaucrat() {}
		void		operator=(Bureaucrat const &obj);
		std::string	getName() const;
		int			getGrade() const;
		void		gradeDecr();
		void		gradeIncr();

		class GradeTooHighException : public std::exception
		{
			public:
			const char* what() const throw()
			{
				return "Exception! Grade would become too high!";
			}
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
			const char* what() const throw()
			{
				return "Exception! Grade would become too low!";
			}
		};
};
std::ostream &			operator<<(std::ostream &os, Bureaucrat const& obj);

#endif