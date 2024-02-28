
#include "A.h"
#include "B.h"
#include "C.h"
#include "Base.h"

Base * generate(void)
{
	srand(static_cast<unsigned int>(time(0)));
	int result = rand() % 3;
	Base	*base = NULL;
	switch (result) {
		case 0:
			base = new A;
			break;
		case 1:
			base = new B;
			break;
		case 2:
			base = new C;
			break;
		default :
			std::cout << RED << "??????????" << RESET << std::endl;
			static_cast<void >(base);
	}
	return base;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		return (static_cast<void >(std::cout << "A" << std::endl));
	if (dynamic_cast<B *>(p))
		return (static_cast<void >(std::cout << "B" << std::endl));
	if (dynamic_cast<C *>(p))
		return (static_cast<void >(std::cout << "C" << std::endl));
	std::cout << RED << "BASE" << RESET << std::endl;
}

void identify(Base& p)
{
	try
	{
		static_cast<void>(dynamic_cast<A &>(p));
		return (static_cast<void >(std::cout << "A" << std::endl));
	}
	catch (...)
	{
		try
		{
			static_cast<void>(dynamic_cast<B &>(p));
			return (static_cast<void >(std::cout << "B" << std::endl));
		}
		catch (...)
		{
			try
			{
				static_cast<void>(dynamic_cast<C &>(p));
				return (static_cast<void >(std::cout << "C" << std::endl));
			}
			catch (...)
			{
				std::cout << RED << "BASE" << RESET << std::endl;
			}
		}

	}
}
#include <math.h>
int main(void)
{
//	B a;
	Base *b = generate();
	identify(b);
	delete b;
}
