#ifndef SLOT_MACHINE_H
#define SLOT_MACHINE_H

#include <vector>

namespace SLOT_MACHINE
{
		class slot_machine
		{
			public:
				// Constants
				int DEFAULT_JACKPOT = 1000000;
				
				std::vector<std::vector<int>> DEFAULT_SLOTS = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11},
					                                            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11},
					                                            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}};
					                                            
				std::vector<std::vector<int>> DEFAULT_WINNING_SLOTS = {{1, 2, 3},
															           {1, 2, 3},
					                                                   {1, 2, 3}};
				
				// Constructor
				slot_machine()
				{
					jackpot_ = DEFAULT_JACKPOT;
					slots_ = DEFAULT_SLOTS;
					winning_slots_ = DEFAULT_WINNING_SLOTS;
				}
				
				// Deconstructor
				~slot_machine()
				{
					jackpot_ = 0;
					slots_.clear();
				}
				
				// Getters
				int getJackpot();
				
				// Functions
				void spin();
				
			private:
				int jackpot_;
				std::vector<std::vector<int>> slots_;
				std::vector<std::vector<int>> winning_slots_;
		};
}

#endif
