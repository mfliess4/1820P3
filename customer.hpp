#pragma once
#include <map>

class Customer
{
  public:
	Customer();
	Customer(std::string id, std::string name, std::string street, std::string city, std::string state, std::string zipcode);

	static bool LoadCustomers(std::map<std::string, Customer> &ctable, const char *filename, bool verbose = false);

	std::string id;
	std::string name;
	std::string street;
	std::string city;
	std::string state;
	std::string zipcode;

	static const int tokens_to_expect;
};
