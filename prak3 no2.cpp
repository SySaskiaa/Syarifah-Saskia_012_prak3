#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i=0;
	char nama[100];
	char out;
	cout << " Masukkan Nama [Huruf Kecil] = "; gets(nama);
	getche();
	cout << "\n Huruf Besar = ";
	
	while (nama[i])
	{	
		out = nama[i];
		if (islower(out)) out = toupper(out);
		putchar (out);
		i++; 
	}
	cout << endl;
	
	system ("PAUSE");
	return 0;
}

