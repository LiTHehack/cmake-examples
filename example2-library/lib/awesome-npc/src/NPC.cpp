#include "awesome-npc/NPC.hpp"

#include <stdlib.h>
#include <time.h>

namespace anpc {
	NPC::NPC(string npc_name) : name(npc_name) {
		srand(time(NULL));
	}

	void NPC::greet(ostream &os) const {
		const unsigned int idx = rand() % greeting_phrases.size();
		os << "\"" << greeting_phrases.at(idx) << "\"";
	}	
}