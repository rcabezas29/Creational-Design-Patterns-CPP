#pragma once

class	Moto
{
	private:
		int	wheels;
		int	seats;

	public:
		Moto(void) {}
		virtual ~Moto(void) {}

		void	setWheels(int n) { this->wheels = n; }
		void	setSeats(int n) { this->seats = n; }
};
