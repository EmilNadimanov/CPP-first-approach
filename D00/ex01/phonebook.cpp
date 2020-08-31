#include <string>
#include <iomanip>
#include <iostream>

class Phonebook
{
	public:
		std::string first_n;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal;
		std::string email;
		std::string phone_num;
		std::string b_day;
		std::string fav_meal;
		std::string undies;
		std::string secret;
};

void add(Phonebook *cont)
{
	std::cin.ignore();
	std::cout << "Enter contact's first name: ";
	std::getline(std::cin, cont->first_n);
	std::cout << "Enter contact's last name: ";
	std::getline(std::cin, cont->last_name);
	std::cout << "Enter contact's nickname: ";
	std::getline(std::cin, cont->nickname);
	std::cout << "Enter contact's login: ";
	std::getline(std::cin, cont->login);
	std::cout << "Enter contact's postal address: ";
	std::getline(std::cin, cont->postal);
	std::cout << "Enter contact's email address: ";
	std::getline(std::cin, cont->email);
	std::cout << "Enter contact's phone number: ";
	std::getline(std::cin, cont->phone_num);
	std::cout << "Enter contact's birthday date: ";
	std::getline(std::cin, cont->b_day);
	std::cout << "Enter contact's favorite meal: ";
	std::getline(std::cin, cont->fav_meal);
	std::cout << "Enter contact's underwear color: ";
	std::getline(std::cin, cont->undies);
	std::cout << "Enter contact's darkest secret: ";
	std::getline(std::cin, cont->secret);
}

void print_data(Phonebook cont, int flag)
{
	if (flag == 1)
	{
		if (cont.first_n.length() <= 10)
			std::cout << std::setw(10) << cont.first_n.substr(0,10) << '|';
		else
			std::cout << cont.first_n.substr(0,9) << ".|";
		if (cont.last_name.length() <= 10)
			std::cout << std::setw(10) << cont.last_name.substr(0,10) << '|';
		else
			std::cout << cont.last_name.substr(0,9) << ".|";
		if (cont.nickname.length() <= 10)
			std::cout << std::setw(10) << cont.nickname.substr(0,10) << '\n';
		else
			std::cout << cont.nickname.substr(0,9) << ".\n";
	}
	else
	{
		std::cout << "First name:        " << cont.first_n << '\n';
		std::cout << "Last name:         " << cont.last_name << '\n';
		std::cout << "Nickname:          " << cont.nickname << '\n';
		std::cout << "Login:             " << cont.login << '\n';
		std::cout << "Postal address:    " << cont.postal << '\n';
		std::cout << "Email address:     " << cont.email << '\n';
		std::cout << "Phone number:      " << cont.phone_num << '\n';
		std::cout << "Birthday date:     " << cont.b_day << '\n';
		std::cout << "Favorite meal:     " << cont.fav_meal << '\n';
		std::cout << "Underwear color:   " << cont.undies << '\n';
		std::cout << "Darkest secret:    " << cont.secret << '\n';
	}	
}

void view_cont(int cont_num, Phonebook *cont)
{
	int i;

	i = 0;
	while (i < cont_num)
	{
		std::cout << std::setw(10) << i << '|';
		print_data(cont[i], 1);
		i++;
	}	
}

int main()
{
	int cont_num;
	std::string in;
	Phonebook cont[8];

	cont_num = 0;
	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >> in;
		if (in == "EXIT")
			return 0;
		else if (in == "ADD")
		{
			if (cont_num < 8)
				add(&cont[cont_num++]);
			else
				std::cout << "Error! Phonebook is full\n";
		}
		else if (in == "SEARCH")
		{
			view_cont(cont_num, &cont[0]);
			std::cout << "Enter desired contact's index: ";
			while(1)
			{
				std::cin >> in;
				if (int(in[0]) - 48 < cont_num && int(in[0]) - 48 >= 0)
				{
					print_data(cont[int(in[0]) - 48], 0);
					break;
				}
				else if (in == "EXIT")
					break;
				else
					std::cout << "Error! Invalid input. Enter a valid index or \"EXIT\": ";
			}
		}
		else
		{
			std::cout << "Error! Invalid input. " <<
				"Enter \"ADD\", \"SEARCH\" or \"EXIT\".\n";
		}
	}
	return 0;
}
