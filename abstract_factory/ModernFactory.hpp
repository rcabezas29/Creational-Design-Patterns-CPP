#pragma once

#include "Chair.hpp"
#include "Factory.hpp"
#include "Table.hpp"
#include <string>

class	ModernFactory : public Factory
{
	private:
		std::string	material = "plastic";
	
	public:
		ModernFactory(void) {}
		virtual ~ModernFactory(void) {}

		Chair	createChair(void) const
		{
			Chair	chair(this->material, "modern");

			return chair;
		}

		Table	createTable(void) const
		{
			Table	table(this->material, "modern");

			return table;
		}
};
