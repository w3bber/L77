#pragma once
#include "Weather.h"
#include <string>


using namespace std;

class Service
{
public:
	virtual Weather getWeather(string s) = 0;

	virtual ~Service() {};
};