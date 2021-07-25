
#include <cfenv>
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;
/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/
int main() {
	double a;
	long int hasil;

	fesetround(FE_UPWARD);
	a = 50.3;

	hasil = lrint(a);
	
	cout << "Upward rounding of " << a << " is " << hasil << endl;

	fesetround(FE_DOWNWARD);
	a = 50.88;
	hasil = lrint(a);
	cout << "Downward rounding of " << a << " is " << hasil << endl;

	_getch();
	return 0;
}
