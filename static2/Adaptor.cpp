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
	
}

std::ostream& operator<<(std::ostream& out, const Adaptor& obj)
{

}
