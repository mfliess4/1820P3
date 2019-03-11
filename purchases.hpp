#pragma once
#include <map>

class Purchase
{
  public:
	Purchase();
	Purchase(std::string id, std::string invoice, std::string date, float amount);

	static bool LoadPurchases(std::multimap<std::string, Purchase> &ptable, const char *filename, bool verbose = false);

	std::string id;
	std::string invoice;
	std::string date;
	float amount;

	static const int tokens_to_expect;
};