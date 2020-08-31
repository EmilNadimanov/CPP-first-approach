#ifndef _FORM_HPP_
# define _FORM_HPP_
#include <string>
#include <iostream>
#include <exception>

class Form
{
	private:
		std::string	const	name;
		bool				signed_;
		int const			min_grade_sign;
		int const			min_grade_exec;
		
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

/*  It has a name, a boolean indicating whether it is signed (at
the beginning, it’s not), a grade required to sign it, and a grade required to execute it.
The name and grades are constant, and all these attributes are private (not protected). */


#endif