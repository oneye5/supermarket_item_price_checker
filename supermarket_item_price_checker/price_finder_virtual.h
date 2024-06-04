#pragma once
#include <string>


class price_finder_virtual
{
public:
	virtual void* find_all_prices(std::string) = 0;
};