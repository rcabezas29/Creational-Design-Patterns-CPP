#pragma once

#include "Furniture.hpp"
#include <string>

class	Chair : public Furniture
{
	private:
		std::string	material;
		std::string	style;
	
	public:
		Chair(void) {}
		Chair(std::string mat, std::string st) : material(mat), style(st) {}
		virtual ~Chair(void) {}

		std::string	getMaterial(void) const { return this->material; }

		virtual	void	use(void) const
		{
			std::cout << "Someone seated on the chair" << std::endl;
		}
};
