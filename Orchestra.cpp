#include "Orchestra.h"

string Guitar::Get_name()
{
	return name;
}

int Guitar::Get_timer()
{
	return timer;
}

void Guitar::Play()
{
	Stringled::Play();
	PlaySound(TEXT("guitar.wav"), NULL, SND_ASYNC | SND_LOOP);
	Sleep(Get_timer());
	PlaySound(0, 0, SND_PURGE);

}

string Balalaika::Get_name()
{
	return name;
}

int Balalaika::Get_timer()
{
	return timer;
}

void Balalaika::Play()
{
	Stringled::Play();
	PlaySound(TEXT("balalaika.wav"), NULL, SND_ASYNC | SND_LOOP);
	Sleep(Get_timer());
	PlaySound(0, 0, SND_PURGE);
}

string Violin::Get_name()
{
	return name;
}

int Violin::Get_timer()
{
	return timer;
}

void Violin::Play()
{
	Stringled::Play();
	PlaySound(TEXT("violin.wav"), NULL, SND_ASYNC | SND_LOOP);
	Sleep(Get_timer());
	PlaySound(0, 0, SND_PURGE);
}

string Flute::Get_name()
{
	return name;
}

int Flute::Get_timer()
{
	return timer;
}

void Flute::Play()
{
	Wind::Play();
	PlaySound(TEXT("flute.wav"), NULL, SND_ASYNC | SND_LOOP);
	Sleep(Get_timer());
	PlaySound(0, 0, SND_PURGE);
}

string Saxophone::Get_name()
{
	return name;
}

int Saxophone::Get_timer()
{
	return timer;
}

void Saxophone::Play()
{
	Wind::Play();
	PlaySound(TEXT("saxophone.wav"), NULL, SND_ASYNC | SND_LOOP);
	Sleep(Get_timer());
	PlaySound(0, 0, SND_PURGE);
}

string Trumpet::Get_name()
{
	return name;
}

int Trumpet::Get_timer()
{
	return timer;
}

void Trumpet::Play()
{
	Wind::Play();
	PlaySound(TEXT("trumpet.wav"), NULL, SND_ASYNC | SND_LOOP);
	Sleep(Get_timer());
	PlaySound(0, 0, SND_PURGE);
}

string Orchestra::Get_name()
{
	return name_orchestra;
}

