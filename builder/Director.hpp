#pragma once

#include <iostream>
#include "Builder.hpp"

class	Director
{
	private:
		Builder	*builder;

	public:
		Director(void);
		virtual ~Director(void);

		void	setBuilder(Builder *b)
		{
			this->builder = b;
		}

		void	BuildMinimalViableProduct(void)
		{
			this->builder->setWheels();
    	}

		void	BuildFullFeaturedProduct(void)
		{
			this->builder->setWheels();
			this->builder->setSeats();
		}
};