#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat	*Boss = 0;
	Bureaucrat	*Manager = 0;
	Bureaucrat	*Employee = 0;


	/**** Init Bureaucrat ****/

	try
	{
		std::cout << YELLOW << "Try to create a 1 Boss :" << std::endl << NEUTRAL;
		Boss = new Bureaucrat("Boss", 1);
		std::cout << *Boss;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "Try to create a 100 Manager :" << std::endl << NEUTRAL;
		Manager = new Bureaucrat("Manager", 100);
		std::cout << *Manager;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "Try to create a 150 Employee :" << std::endl << NEUTRAL;
		Employee = new Bureaucrat("Employee", 150);
		std::cout << *Employee;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << NEUTRAL;
	}
	std::cout << std::endl;

	/*** Shrubbery Creation Form ***/

	ShrubberyCreationForm	Shrub("Shrub");

	try
	{
		std::cout << YELLOW << "Boss tries to execute Shrubbery form." << std::endl << NEUTRAL;
		Shrub.execute(*Boss);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "Employee tries to sign Shrubbery form." << std::endl << NEUTRAL;
		Shrub.beSigned(*Employee);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "Manager tries to sign Shrubbery form." << std::endl << NEUTRAL;
		Shrub.beSigned(*Manager);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "Boss tries to sign Shrubbery form." << std::endl << NEUTRAL;
		Shrub.beSigned(*Boss);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "Employee tries to execute Shrubbery form." << std::endl << NEUTRAL;
		Shrub.execute(*Employee);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Manager tries to execute Shrubbery form." << std::endl << NEUTRAL;
		Shrub.execute(*Manager);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Boss tries to execute Shrubbery form." << std::endl << NEUTRAL;
		Shrub.execute(*Boss);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;
	
	/*** Robotomy Request Form ***/

	RobotomyRequestForm	Robot("Robotomy");

	try
	{
		std::cout << YELLOW << "Boss tries to execute Robotomy form." << std::endl << NEUTRAL;
		Robot.execute(*Boss);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "Employee tries to sign Robotomy form." << std::endl << NEUTRAL;
		Robot.beSigned(*Employee);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "Manager tries to sign Robotomy form." << std::endl << NEUTRAL;
		Robot.beSigned(*Manager);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;
	
	try
	{
		std::cout << YELLOW << "Boss tries to sign Robotomy form." << std::endl << NEUTRAL;
		Robot.beSigned(*Boss);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Employee tries to execute Robotomy form." << std::endl << NEUTRAL;
		Robot.execute(*Employee);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Manager tries to execute Robotomy form." << std::endl << NEUTRAL;
		Robot.execute(*Manager);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Boss tries to execute Robotomy form." << std::endl << NEUTRAL;
		Robot.execute(*Boss);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	/*** Presidential Pardon Form ***/

	PresidentialPardonForm	Pardon("Sarko");

	try
	{
		std::cout << YELLOW << "Boss tries to execute Pardon form." << std::endl << NEUTRAL;
		Pardon.execute(*Boss);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Employee tries to sign Pardon form." << std::endl << NEUTRAL;
		Pardon.beSigned(*Employee);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Manager tries to sign Pardon form." << std::endl << NEUTRAL;
		Pardon.beSigned(*Manager);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Employee tries to execute Pardon form." << std::endl << NEUTRAL;
		Pardon.execute(*Employee);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Manager tries to execute Pardon form." << std::endl << NEUTRAL;
		Pardon.execute(*Manager);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	try
	{
		std::cout << YELLOW << "Boss tries to sign Pardon form." << std::endl << NEUTRAL;
		Pardon.beSigned(*Boss);
	}
	catch (std::exception &e)
		{	std::cerr << RED << e.what() << std::endl << NEUTRAL; }
	std::cout << std::endl;

	delete (Boss);
	delete (Manager);
	delete (Employee);
	return (0);
}
