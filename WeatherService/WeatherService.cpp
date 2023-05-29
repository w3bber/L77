#include "Weather.h"
#include "Service.h"
#include "JsonService.h"
#include "XmlService.h"


int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
	XmlService xs;
	Weather w1 = xs.getWeather("weather.xml");

}