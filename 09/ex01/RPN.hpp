#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include "colors.hpp"

class RPN {

	public:

		RPN();
		RPN(std::string calc);
		~RPN();

		long	calculate(int a, int b, std::string token);

	private:

		std::stack<int>	_stack;

};

class	ExceptionRPN : public std::exception
{
	public:
		ExceptionRPN(std::string error) : _error(error) {};
		virtual ~ExceptionRPN() throw() {};
		const virtual char *what() const throw() {return _error.c_str();};

	private:
		std::string _error;
};
#endif

