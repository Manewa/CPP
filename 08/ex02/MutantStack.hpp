#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "colors.hpp"
#include <iostream>
#include <list>
#include <stack>
#include <deque>
#include <string>

template<typename C, typename Container = std::deque<C> >
class MutantStack : public std::stack<C, Container> {

public:

			typedef	typename std::stack<C, Container>::container_type::iterator	iter;
			typedef	typename std::stack<C, Container>::container_type::const_iterator	const_iter;

			MutantStack() {}
			MutantStack(const MutantStack& other) : std::stack<C>(other) {}
			MutantStack& operator=(const MutantStack& other)
			{
				std::stack<C>::operator = (other);
				return *this;
			}
			~MutantStack(){}

			iter	begin()
			{
				return this->c.begin();
			}

			iter	end()
			{
				return this->c.end();
			}

			const_iter	begin() const
			{
				return this->c.begin();
			}

			const_iter	end() const
			{
				return this->c.end();
			}

private:

		
};

#endif

