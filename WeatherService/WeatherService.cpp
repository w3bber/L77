#include "Weather.h"
#include "Service.h"
#include "JsonService.h"

int main()
{
	JsonService js;
	Weather w = js.getWeather("weather.json");
}