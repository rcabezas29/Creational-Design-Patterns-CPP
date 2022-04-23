#pragma once

#include "Transport.hpp"

class	Boat : public Transport
{
	private:
		int	numberOfPackages;
		int	speed = 50;
	
	public:
		Boat(void) : numberOfPackages(0) {} 
		virtual	~Boat(void) {}

		void	reachDestination(std::string dest) const
		{
			std::cout << "Boat reached "<< dest << " at a speed of " << this->speed << std::endl;
		}

		void	loadCargo(int cargo)
		{
			if (cargo > 500)
				std::cout << "The boat cannot carry so many packages" << std::endl;
			else
			{
				this->numberOfPackages = cargo;
				std::cout << "The boat was loaded with " << cargo << " packages" << std::endl;
			}
		}
};
