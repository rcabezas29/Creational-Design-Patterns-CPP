#pragma once

#include "Transport.hpp"

class	Car : public Transport
{
	private:
		int	numberOfPackages;
		int	speed = 100;

	public:
		Car(void) : numberOfPackages(0) {}
		virtual ~Car(void) {}

		void	reachDestination(std::string dest) const
		{
			std::cout << "Car reached "<< dest << " at a speed of " << this->speed << std::endl;
		}

		void	loadCargo(int cargo)
		{
			if (cargo > 5)
				std::cout << "The car cannot carry so many packages" << std::endl;
			else
			{
				this->numberOfPackages = cargo;
				std::cout << "The car was loaded with " << cargo << " packages" << std::endl;
			}
		}
};
