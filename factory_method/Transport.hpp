#pragma once

#include <iostream>

class	Transport
{
	public:
		virtual ~Transport(void);

		virtual void	reachDestination(std::string dest) const = 0;
		virtual void	loadCargo(int cargo) = 0;
};
