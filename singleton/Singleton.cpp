#include "Singleton.hpp"

Singleton* Singleton::singleton = nullptr;

Singleton *Singleton::GetInstance(const std::string &value)
{
	if (singleton == nullptr)
        singleton = new Singleton(value);
    return singleton;
}

std::string Singleton::getValue(void) const
{
	return this->value;
}