#ifndef SLOT_MACHINE
#define SLOT_MACHINE

#include <vector>

namespace SLOT_MACHINE
{
		class slot_machine
		{
			public:
				// Constants
				int DEFAULT_JACKPOT = 1000000;
				std::vector<std::vector<char>> DEFAULT_SLOTS = {{'a', 'b', 'c'},
													        	{'a', 'b', 'c'},
															    {'a', 'b', 'c'}};
				
				// Constructor
				slot_machine()
				{
					jackpot_ = DEFAULT_JACKPOT;
					slots_ = DEFAULT_SLOTS;
				}
			private:
				int jackpot_;
				std::vector<std::vector<char>> slots_;
		};
}

#endif
