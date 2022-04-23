#pragma once

#include <iostream>

class	Furniture
{
	public:
		virtual ~Furniture(void);

		virtual std::string	getMaterial(void) const = 0;
		virtual	void	use(void) const = 0;
};