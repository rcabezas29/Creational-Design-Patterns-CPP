#pragma once

#include "Chair.hpp"
#include "Table.hpp"

class	Factory
{
	public:
		virtual ~Factory(void);

		virtual Chair	createChair(void) const = 0;
		virtual Table	createTable(void) const = 0;
};