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
				std::vector<std::vector<char>> DEFAULT_SLOTS = {{'A', 'A# / Bb', 'B', 'C', 'C# / Db', 'D', 'D# / Eb', 'E', 'F', 'F# / Gb', 'G', 'G# / Ab'},
													        	{'A', 'A# / Bb', 'B', 'C', 'C# / Db', 'D', 'D# / Eb', 'E', 'F', 'F# / Gb', 'G', 'G# / Ab'},
															    {'A', 'A# / Bb', 'B', 'C', 'C# / Db', 'D', 'D# / Eb', 'E', 'F', 'F# / Gb', 'G', 'G# / Ab'}};
				
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

#endif // SLOT_MACHINE
