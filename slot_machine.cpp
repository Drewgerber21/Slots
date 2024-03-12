#include <iostream>
#include "slot_machine.h"
#include "helpers.h"

using namespace SLOT_MACHINE;

int slot_machine::getJackpot()
{
	return jackpot_;
}

void slot_machine::spin()
{
	for(int i = 0; i < slots_.size(); i++)
	{
		HELPERS::randomizeVector(slots_.at(i));
	}
	
	for(int i = 0; i < winning_slots_.size(); i++) 
	{
		for(int k = 0; k < winning_slots_.at(i).size(); k++)
		{
			winning_slots_.at(i).at(k) = slots_.at(i).at(k);
		}
	}
}
