#include "Adaptor.h"
#include <vector>
#include <fstream>

int Adaptor::counter = 1;

int main()
{
	std::vector <Adaptor> admin;
	admin.push_back(Adaptor("USB 2.0", 100, 100));
	admin.push_back(Adaptor("type-c 3.0", 200, 280));
	admin.push_back(Adaptor("HDMI", 1000, 6000));
	admin.push_back(Adaptor("DSP", 1500, 900));

	for (auto& obj : admin) {
		std::cout << obj << std::endl;
	}
	
	for(auto& obj : admin) {
		std::ofstream file(obj.getId() + ".txt");
		file << obj;
		file.close();
	}
}