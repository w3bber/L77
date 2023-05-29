#include "Weather.h"

Weather::Weather(string _city, double _lon, double _lat, double _temperature, string _weather, double _windSpeed, int _clouds)
{
	this->city = _city;
	this->lon = _lon;
	this->lat = _lat;
	this->temperature = _temperature;
	this->weather = _weather;
	this->windSpeed = _windSpeed;
	this->clouds = _clouds;
}
