#include <iostream>
#include <cstdlib>
#include "Array.hpp"
#include "colors.hpp"


#define MAX_VAL 750

int main()
{
    std::cout << YELLOW << "Empty Array" << NEUTRAL << std::endl << std::endl;
    {
        Array<int> a;
        std::cout << "Expected : size = 0" << std::endl;
        std::cout << "Result   : size = " << a.size() << std::endl;

        std::cout << RED << "Expected : exception OutOfBounds" << NEUTRAL << std::endl;
        try
        {
            a[0];
            std::cout << GREEN << "Result : No exception" << NEUTRAL << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << RED << "Result : " << e.what() << GREEN << std::endl;
        }
    }

	std::cout << std::endl;
    
	std::cout << YELLOW << "Deep copy" << NEUTRAL << std::endl << std::endl;
    {
        Array<int> a(3);
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;

        Array<int> b(a);
        b[0] = 42;

        std::cout << "Expected : a[0] = 1" << std::endl;
        std::cout << "Result   : a[0] = " << a[0] << std::endl;
    }

	std::cout << std::endl;
    
    std::cout << YELLOW << "Copy constructor" << NEUTRAL << std::endl << std::endl;
    {
        Array<int> a(5);
        Array<int> b(2);

        b = a;

        std::cout << "Expected : b.size() = 5" << std::endl;
        std::cout << "Result   : b.size() = " << b.size() << std::endl;

        std::cout << GREEN << "Expected : b[4] can access" << NEUTRAL << std::endl;
        try
        {
            std::cout << GREEN << "Result   : b[4] = " << NEUTRAL << b[4] << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cout << RED << "Result    : No access" << NEUTRAL << std::endl;
        }
    }

	std::cout << std::endl;
    
    std::cout << YELLOW << "auto affectation" << NEUTRAL << std::endl << std::endl;
    {
        Array<int> a(3);
        a[0] = 7;

        a = a;

        std::cout << "Expected : a[0] = 7" << std::endl;
        std::cout << "Result   : a[0] = " << a[0] << std::endl;
    }

	std::cout << std::endl;
    
    std::cout << YELLOW << "type : std::string" << NEUTRAL << std::endl << std::endl;
    {
        Array<std::string> a(2);
        a[0] = "hello";
        a[1] = "world";

        Array<std::string> b = a;
        b[1] = "42";

        std::cout << "Expected : a[1] = world" << std::endl;
        std::cout << "Result   : a[1] = " << a[1] << std::endl;
    }

	std::cout << std::endl;
    
    std::cout << YELLOW << "exceptions in a row" << NEUTRAL << std::endl << std::endl;
    {
        Array<int> a(1);

        std::cout << GREY << "Expected : no crash at i = 0, exceptions at 1 and 2" << NEUTRAL << std::endl;
        for (int i = 0; i < 3; i++)
        {
            try
            {
                a[i];
                std::cout << GREEN << "Result   : access OK (i=" << i << ")" << NEUTRAL << std::endl;
            }
            catch (const std::exception &e)
            {
                std::cout << RED << "Result   : exception: " << e.what() << NEUTRAL << std::endl;
            }
        }
    }

	std::cout << std::endl;

    std::cout << YELLOW << "multiple destruction" << NEUTRAL << std::endl << std::endl;
    {
        std::cout << "expected : no crash" << std::endl;
        {
            Array<int> a(1000);
            Array<int> b(a);
            Array<int> c = b;
        }
        std::cout << GREEN << "No crash" << NEUTRAL << std::endl;
    }
    return 0;
}
