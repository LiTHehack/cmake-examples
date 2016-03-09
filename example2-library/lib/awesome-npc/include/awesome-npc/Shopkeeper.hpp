#include "NPC.hpp"

#include <map>

using std::string;
using std::ostream;
using std::vector;
using std::map;

namespace anpc {
	class Shopkeeper : public NPC {
	public:
		Shopkeeper(string npc_name);

		void show_inventory(ostream &os) const;

	private:
		map<string, float> items;
	};
}