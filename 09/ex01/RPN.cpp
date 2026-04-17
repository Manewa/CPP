#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string calc)
{
	std::stringstream	ss(calc);
	std::string			token;

	while (ss >> token)
	{
		if (token.size() == 1 && std::isdigit(token[0]))
			this->_stack.push(token[0] - '0');
		else if (token == "+" || token == "-" || token ==  "*" || token == "/")
		{
			if (this->_stack.size() < 2)
				throw	ExceptionRPN("Error: Not 2 number in stack");

			int		a = 0;
			int 	b = 0;
			long	result = 0;

			b = this->_stack.top();
			this->_stack.pop();
			a = this->_stack.top();
			this->_stack.pop();

			result = calculate(a, b, token);
			this->_stack.push(result);
		}
		else
			throw	ExceptionRPN("Error: wrong character");
	}
	if (this->_stack.size() != 1)
		throw	ExceptionRPN("Error: Error in stack");
	std::cout << this->_stack.top() << std::endl;
}

RPN::~RPN() {}

long	RPN::calculate(int a, int b, std::string token)
{
	if (token == "+")
		return (a + b);
	else if (token == "-")
		return (a - b);
	else if (token == "*")
		return (a * b);
	else if (token == "/")
	{
		if (b == 0)
			throw ExceptionRPN("Error: division by zero");
		return (a / b);
	}
	return (0);
}

