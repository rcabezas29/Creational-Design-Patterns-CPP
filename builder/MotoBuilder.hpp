#pragma once

#include "Builder.hpp"
#include "Moto.hpp"

class	MotoBuilder : public Builder
{
	private:
		Moto	*moto;

	public:
		void	setWheels(void)
		{
			this->moto->setWheels(2);
		}

		void	setSeats(void)
		{
			this->moto->setSeats(1);
		}
};
