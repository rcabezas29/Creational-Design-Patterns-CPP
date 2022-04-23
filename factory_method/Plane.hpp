#pragma once

#include "Transport.hpp"

class	Plane : public Transport
{
	private:
		int	numberOfPackages;
		int	speed = 800;
	
	public:
		Plane(void) : numberOfPackages(0) {};
		virtual ~Plane(void) {}

		void	reachDestination(std::string dest) const
		{
			std::cout << "Plane reached "<< dest << " at a speed of " << this->speed << std::endl;
		}

		void	loadCargo(int cargo)
		{
			if (cargo > 100)
				std::cout << "The plane cannot carry so many packages" << std::endl;
			else
			{
				this->numberOfPackages = cargo;
				std::cout << "The plane was loaded with " << cargo << " packages" << std::endl;
			}
		}
};
