#pragma once
#include <string>

using namespace std;

class Weather
{
private:
	string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(string _city, double _lon, double _lat, double _temperature, string _weather, double _windSpeed, int clouds);
};

