#ifndef _PONY_HPP_
# define _PONY_HPP_

	#include <string>
	class Pony
	{
	private:
		std::string color;
		std::string name;
		int is_male;
		int age;
	
	public:
		Pony (std::string col, std::string n, int s, int a);

		void pat_the_pony();

		void feed_the_pony(std::string food);

		void describe();
	};


#endif