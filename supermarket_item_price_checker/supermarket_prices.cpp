#include "supermarket_prices.h"
#include "price_finder_nz.h"
#include "price_finder_virtual.h"

static price_finder_virtual* priceFinder = new price_finder_nz(); //defaults to nz

void* supermarket_prices::find_all_prices(std::string in)
{
	return priceFinder->find_all_prices(in);;
}

void supermarket_prices::set_current_country(std::string country)
{
	free(priceFinder);
	priceFinder = new price_finder_nz();
}
