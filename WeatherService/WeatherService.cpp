#include "Weather.h"
#include "Service.h"
<<<<<<< HEAD
#include "JsonService.h"
#include "XmlService.h"


int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
	XmlService xs;
	Weather w1 = xs.getWeather("weather.xml");

=======
#include "XmlService.h"
#include "pugixml-1.13/src/pugixml.hpp"

using namespace std;

int main()
{
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");
>>>>>>> feature-xml
}