#pragma once
#include "price_finder_virtual.h"
class price_finder_nz : public price_finder_virtual
{
	public:
	void*  find_all_prices(std::string) override;
};