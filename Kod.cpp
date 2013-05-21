// 0 and 1.cpp: определяет точку входа для консольного приложения.
/*
4.27 (Printingthe Decimal Equivalent of aBinaryNumber) Inputaninteger containing only 0s
and 1s (i.e., a“binary”integer)and printits decimalequivalent. Usethe modulus anddivisionop-
eratorstopickoff the“binary”number’sdigitsone at atimefromright to left.Muchasinthe dec-
imal number system,where therightmostdigithas apositionalvalue of 1, thenextdigit left hasa
positionalvalue of 10, then 100, then1000,and so on, in thebinarynumbersystem therightmost
digithas apositionalvalue of 1, thenextdigit left hasapositionalvalue of 2, then 4, then 8, and so
on. Thus thedecimal number 234 canbeinterpretedas2*100 +3*10 +4*1.The decimalequiv-
alentofbinary1101 is 1*1+0*2+1*4+1*8or1+0+4+8,or13. [Note: To learnmore
about binary numbers,refer to Appendix D.]
*/


#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include "Kod.h"
#include <stdlib.h>

using namespace std;

int main()
{
setlocale (0, "Russian");

int var;

cout<< "Введите двоичное число: ";
cin>> var;

Kod myKod;
myKod.setKod(var);
myKod.Display();

getch();
return 0;
}

