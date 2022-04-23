#pragma once

#include "Prototype.hpp"
#include <string>

class	Product : public Prototype
{
	private:
		std::string	name;

	public:
		Product(void) : name("no-name") {}
		Product(std::string n) : name(n) {}
		virtual	~Product(void) {}

		Prototype	*clone(void) { return new Product(*this); }

		void	hello(void)
		{
			std::cout << "Hello, my name is " << this->name << " and i'm a product." << std::endl;
		}

};
