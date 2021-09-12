#include <string>
#include <iostream>

class Alarm
{
public:
	void alarmOn()
	{
		std::cout << "Alarm is on and house is secured" << std::endl;
	}

	void alarmOff()
	{
		std::cout << "Alarm is off and you can go into the house" << std::endl;
	}
};

class Ac
{
public:
	void acOn()
	{
		std::cout << "Ac is on" << std::endl;
	}

	void acOff()
	{
		std::cout << "AC is off" << std::endl;
	}
};

class Tv
{
public:
	void tvOn()
	{
		std::cout << "Tv is on" << std::endl;
	}

	void tvOff()
	{
		std::cout << "TV is off" << std::endl;
	}
};

class HouseFacade //Facade temel sýnýfý
{
	Alarm alarm;
	Ac ac;
	Tv tv;

public:
	HouseFacade() {}

	void goToWork()
	{
		ac.acOff();
		tv.tvOff();
		alarm.alarmOn();
	}

	void comeHome()
	{
		alarm.alarmOff();
		ac.acOn();
		tv.tvOn();
	}
};

int main()
{
	HouseFacade hf;

	//basitleþtirilmiþ arayüz
	hf.goToWork();
	hf.comeHome();
}