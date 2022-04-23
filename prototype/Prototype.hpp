#pragma once

#include <iostream>
#include <string>

class	Prototype
{
	private:
		std::string name;

	public:
		Prototype(void) : name("no-name") {}
		Prototype(std::string n) : name(n) {}
		virtual	~Prototype(void) {}
		virtual Prototype	*clone(void) = 0;
		virtual	void	hello(void)
		{
			std::cout << "Hello, my name is " << this->name << std::endl;
		}

};
