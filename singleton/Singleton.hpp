#pragma once

#include <string>

class Singleton
{
	protected:
		Singleton(const std::string val): value(val) {}
		static Singleton* singleton;
		std::string value;

	public:
		Singleton(Singleton &other) = delete;
		void operator=(const Singleton &) = delete;

		static Singleton *GetInstance(const std::string& value);

		std::string getValue(void) const;
};
