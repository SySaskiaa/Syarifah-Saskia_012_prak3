#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int ubah(const char*s)
{
	int x = 0;
	for (;*s!='\0';s++)
	++x;
	return x;
}
main (void)
{
	char string [80];
	cout << " Tuliskan Kata : "; gets(string);
	cout << "\n Jumlah Karakter : " << ubah(string);
	cout << endl;
	
	system ("PAUSE");
	return 0;
}
