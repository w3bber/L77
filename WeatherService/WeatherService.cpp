#include "Weather.h"
#include "Service.h"
#include "XmlService.h"
#include "pugixml-1.13/src/pugixml.hpp"

using namespace std;

int main()
{
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
}