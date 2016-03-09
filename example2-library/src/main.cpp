#include <iostream>

#include "awesome-npc/Shopkeeper.hpp"

using std::cout;
using std::endl;

int main() {
	anpc::Shopkeeper shopkeeper("Hagrid");

	cout << "[You enter a small shop and approach the shopkeeper inside.]" << endl;
	shopkeeper.greet(cout);
	cout << endl << endl;

	cout << "[You ask the shopkeeper what goods he be sellin'.]" << endl;
	shopkeeper.show_inventory(cout);
	cout << endl;

	return 0;
}