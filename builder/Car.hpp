#pragma once

class	Car
{
	private:
		int	wheels;
		int	seats;

	public:
		Car(void) {}
		virtual ~Car(void) {}

		void	setWheels(int n) { this->wheels = n; }
		void	setSeats(int n) { this->seats = n; }
};
