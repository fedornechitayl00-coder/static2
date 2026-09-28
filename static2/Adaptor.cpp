#include "Adaptor.h"

Adaptor::Adaptor()
{
	id = "Undefined";
	connector = "Indefined";
	price = 0;
	speed = 0;
}

Adaptor::Adaptor(std::string connector, int price, float speed)
{
	id = "WFID" + std::to_string(counter / 100) + std::to_string(counter / 10 % 10) + std::to_string(counter % 10);
	this->connector = connector;
	this->price = price;
	this->speed = speed;
	counter++;
}

std::string Adaptor::getId() const
{
	return id;
}

std::ostream& operator<<(std::ostream& out, const Adaptor& obj)
{
	out << "\nid: " << obj.id << 
		"\nconnector: " << obj.connector <<
		"\nprice: " << obj.price <<
		"\nspeed: " << obj.speed << std::endl;
	return out;
}
