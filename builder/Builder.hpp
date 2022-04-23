#pragma once

class	Builder
{
	public:
		virtual ~Builder(void);

		virtual	void	setWheels(void) = 0;
		virtual	void	setSeats(void) = 0;
};
