#pragma once
#include "Service.h"
#include <string>
#include "../WeatherService/pugixml-1.13/src/pugixml.hpp"

using namespace std;

class XmlService : public Service
{
public:
	virtual Weather getWeather(string s) override;
	virtual ~XmlService() {};
};

