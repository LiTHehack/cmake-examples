#include <string>
#include <ostream>
#include <vector>

using std::string;
using std::ostream;
using std::vector;

namespace anpc {
	class NPC {
	public:
		NPC(string npc_name);
		
		virtual ~NPC() {};

		inline string get_name() const {
			return name;
		}

		void greet(ostream &os) const;

	protected:
		vector<string> greeting_phrases;

	private:
		string name;
	};
}