#pragma once

#include "Chair.hpp"
#include "Factory.hpp"
#include "Table.hpp"
#include <string>

class	AntiqueFactory : public Factory
{
	private:
		std::string	material = "wood";
	
	public:
		AntiqueFactory(void) {}
		virtual ~AntiqueFactory(void) {}

		Chair	createChair(void) const
		{
			Chair	chair(this->material, "antique");

			return chair;
		}

		Table	createTable(void) const
		{
			Table	table(this->material, "antique");

			return table;
		}
};