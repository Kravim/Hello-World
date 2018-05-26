#include<iostream>
using namespace std;

void afisare(double v[])
{
	int i;
	cout << sizeof(v[0]);
}
int main()
{
	double v[5];
	afisare(v);
	cout << endl << sizeof(v[0])<<endl;
	return 0;
}