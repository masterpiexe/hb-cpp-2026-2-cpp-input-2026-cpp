#include<iostream>
#include<string>
int main()
{
	std::cout
		<< "Please enter your first name: ";
	std::string name;
	std::cin 
		>> name;
	//출력하려는 메세지 구성
	const std::string greeting
		= "Hello, " + name + "!";
	/*
	 ***************
	 *	           *
 	  hello jaewon *
	 *             *	
	 ***************
	 */
	// 2nd, 4th
	const std::string spaces(greeting.size(),' ');
	const std::string second = "* " + spaces + " *";

	// 1st, 5th
	const std::string first(second.size(), '*');

	//printing out
	std::cout
		<< std::endl
		<< first << std::endl
		<< second << std::endl
		<< "* " << greeting << " *" << std::endl
		<< second << std::endl
		<< first << std::endl
		<< std::endl;
	return 0;
}