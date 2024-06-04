#pragma once
#include "string"
#include "price_finder_nz.h"
static class supermarket_prices
{
	price_finder_virtual* priceFinder = nullptr;
	void* find_all_prices(std::string in)
	{
		return priceFinder->find_all_prices(in);
	}
	void set_current_country(std::string country)
	{
		
		priceFinder = new price_finder_nz();
	}
	
};