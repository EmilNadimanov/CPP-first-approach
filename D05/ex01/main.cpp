#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat bob = Bureaucrat("Bob", 149);
	std::cout << bob << std::endl;
	bob.gradeIncr();
	bob.gradeDecr();
	bob.gradeDecr();
	bob.gradeDecr();
	Bureaucrat rob = Bureaucrat("Rob", 2);
	std::cout << rob << std::endl;
	rob.gradeDecr();
	rob.gradeIncr();
	rob.gradeIncr();
	rob.gradeIncr();
	
}
/* 
struct MyException : public exception {
   const char * what () const throw () {
      return "C++ Exception";
   }
};
 
int main() {
   try {
      throw MyException();
   } catch(MyException& e) {
      std::cout << "MyException caught" << std::endl;
      std::cout << e.what() << std::endl;
   } catch(std::exception& e) {
      //Other errors
   }
}
 */