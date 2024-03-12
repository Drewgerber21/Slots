#include <iostream>
#include "helpers.h"

#include <algorithm>
#include <random>

using namespace HELPERS;

void HELPERS::randomizeVector(std::vector<int>& vector)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::shuffle(vector.begin(), vector.end(), gen);
}

