#include "stdafx.h"
#include <iostream>
#include "Kod.h"
using namespace std;
Kod::Kod(){}
void Kod::setKod (int T)

{

for (int r = 1; T > 0; r *= 2)
{
  result=0;
result+= (T % 10) * r;
T/=10;
}

}


int Kod::getKod ()
{
	return result;
}
void Kod::Display ()
{
cout<<"Десятичный эквивалент равен:  " << getKod () << endl;
}
