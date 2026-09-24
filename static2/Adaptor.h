#pragma once
#include <iostream>
#include <string>

class Adaptor
{
	std::string id;
	std::string connector;
	float price;
	float speed;
	static int countof;
	static int counter;
public:
	Adaptor();
	Adaptor(std::string connector, int price, float speed);

	friend std::ostream& operator << (std::ostream& out, const Adaptor& obj);

};

