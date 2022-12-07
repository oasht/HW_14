#include <iostream>
#include<iomanip>
#include <string.h>  
#include <Windows.h>  
#include<conio.h>
#include <MMSystem.h>
#pragma comment (lib, "winmm")

using namespace std;

class Musical_instrument
{
protected:
	string name;
	int timer;

public:
	Musical_instrument()
	{
		name = " ";
		timer = 0;
	}
	Musical_instrument(string _name, int _timer)
	{
		name = _name;
		timer = _timer;
	}
	virtual string Get_name() = 0;
	virtual int Get_timer() = 0;
	virtual void Play()
	{
		cout << "Now playing " << Get_name() << endl;
	}

};

class Stringled : public Musical_instrument
{
protected:
	string obj;
public:
	Stringled()
	{
		obj = " ";
	}
	Stringled(string n, int t) : Musical_instrument(n, t)
	{
		name = n;
		timer = t;
	}

};
class Guitar :public Stringled
{
protected:
	string obj;
public:
	Guitar()
	{
		obj = " ";
	}
	Guitar(string n, int t) : Stringled(n, t)
	{
		name = n;
		timer = t;
	}
	string Get_name();
	int Get_timer();
	void Play() override;
};

class Balalaika :public Stringled
{
protected:
	string obj;
public:
	Balalaika()
	{
		obj = " ";
	}
	Balalaika(string n, int t) : Stringled(n, t)
	{
		name = n;
		timer = t;
	}
	string Get_name();
	int Get_timer();
	void Play() override;
};
class Violin :public Stringled
{
protected:
	string obj;
public:
	Violin()
	{
		obj = " ";
	}
	Violin(string n, int t) : Stringled(n, t)
	{
		name = n;
		timer = t;
	}
	string Get_name();
	int Get_timer();
	void Play() override;
};



class Wind :public Musical_instrument
{
	string obj;
public:
	Wind()
	{
		obj = " ";
	}
	Wind(string n, int t) : Musical_instrument(n, t)
	{
		name = n;
		timer = t;
	}
};

class Flute :public Wind
{
protected:
	string obj;
public:
	Flute()
	{
		obj = " ";
	}
	Flute(string n, int t) : Wind(n, t)
	{
		name = n;
		timer = t;
	}
	string Get_name();
	int Get_timer();
	void Play() override;
};

class Saxophone :public Wind
{
protected:
	string obj;
public:
	Saxophone()
	{
		obj = " ";
	}
	Saxophone(string n, int t) : Wind(n, t)
	{
		name = n;
		timer = t;
	}
	string Get_name();
	int Get_timer();
	void Play() override;
};

class Trumpet :public Wind
{
protected:
	string obj;
public:
	Trumpet()
	{
		obj = " ";
	}
	Trumpet(string n, int t) : Wind(n, t)
	{
		name = n;
		timer = t;
	}
	string Get_name();
	int Get_timer();
	void Play() override;
};

class Orchestra :public Balalaika, Violin, Flute, Saxophone, Trumpet, Guitar
{
protected:
	string name_orchestra;
	Musical_instrument** arr = new Musical_instrument * [6];
public:
	Orchestra(Musical_instrument*& _arr)
	{
		name_orchestra = "\t\t\t\t!!!BIG CONCERT!!!";
		arr = &_arr;
	}
	string Get_name();
	void Play_all()
	{
		cout <<name_orchestra << endl;
		Sleep(2000);
		system("cls");
			do
			{
				for (int i = 0; i < 20; i++)
				{
					int r = rand() % 6;
					arr[r]->Play();
					system("cls");
				}
			} while (!_getch());
	}
};

