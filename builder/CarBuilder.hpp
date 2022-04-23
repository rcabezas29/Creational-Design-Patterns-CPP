#pragma once

#include "Builder.hpp"
#include "Car.hpp"

class	CarBuilder : public Builder
{
	private:
		Car	*car;

	public:
		void	setWheels(void)
		{
			this->car->setWheels(4);
		}

		void	setSeats(void)
		{
			this->car->setSeats(5);
		}
};
