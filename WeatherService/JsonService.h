#pragma once
#include <string>
#include "Service.h"
#include "json.hpp"

using namespace std;

class JsonService : public Service
{
public:
	virtual Weather getWeather(string s) override;
	virtual ~JsonService() {};

};

