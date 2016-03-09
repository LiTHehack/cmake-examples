#include "awesome-npc/Shopkeeper.hpp"

using std::string;
using std::pair;
using std::endl;

namespace anpc {
	Shopkeeper::Shopkeeper(string npc_name) : NPC(npc_name) {
		// init shopkeeper inventory
		items["sword"] = 10.0f;
		items["chocolate cookie"] = 199.99f;
		items["time machine"] = 3.14159f;

		// init shopkeeper greeting phrases
		greeting_phrases.push_back("Greetings, traveler.");
		greeting_phrases.push_back("Feel free to look at my wares.");
		greeting_phrases.push_back("Get on with it, sloth.");
	}

	void Shopkeeper::show_inventory(ostream &os) const {
		os << "\"Don't try to steal any of my stuff, bro.\"";

		for_each(items.cbegin(), items.cend(), [&](pair<string, float> item){
			os << endl;
			os << "Item: " << item.first << ", cost: " << item.second << " kr";
		});
	}
}