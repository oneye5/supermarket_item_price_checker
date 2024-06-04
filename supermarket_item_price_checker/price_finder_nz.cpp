#include "price_finder_nz.h"
#include "httplib.h"




void* find_woolWorths(std::string s)
{
	return NULL;
}
void* find_pakNSave(std::string s)
{
	return NULL;
}
void* find_newWorld(std::string s)
{
	httplib::Client cli("http://www.google.com");
	httplib::Headers headers = { {"Host", "www.google.com"} };

	auto res = cli.Get("/", headers);
	if (res && res->status == 200)
		std::cout << res->body;
	else
		std::cout << "website not found";
	return NULL;
}




void* price_finder_nz::find_all_prices(std::string s)
{
	find_newWorld(s);
	return (void*)"yo yo yo";
}
