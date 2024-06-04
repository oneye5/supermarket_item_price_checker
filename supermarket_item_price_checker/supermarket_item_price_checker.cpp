// supermarket_item_price_checker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "supermarket_prices.h"

int main()
{
    std::string in;
    std::cin >> in;
    std::cout << supermarket_prices::find_all_prices(in);
}
