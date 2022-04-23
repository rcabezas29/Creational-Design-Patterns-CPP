#pragma once

#include "Furniture.hpp"
#include <string>

class	Table : public Furniture
{
	private:
		std::string	material;
		std::string	style;
	
	public:
		Table(void) {}
		Table(std::string mat, std::string st) : material(mat), style(st) {}
		virtual ~Table(void) {}

		std::string	getMaterial(void) const { return this->material; }

		virtual	void	use(void) const
		{
			std::cout << "Someone used the table to eat on it" << std::endl;
		}
};
