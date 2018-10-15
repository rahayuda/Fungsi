#include <iostream.h>
#include <conio.h>

int a = 100, b = 300, c;

void penjumlahan();
void pengurangan();
void print();

void main()
{
   pengurangan();
   print();

	getch();
}

void penjumlahan()
{
 	c = a + b;
}

void pengurangan()
{
 	c = a - b;
}

void print()
{
	cout<<"Nilai a = "<<a<<endl;
   cout<<"Nilai b = "<<b<<endl;
   cout<<"Nilai c = "<<c<<endl;
}