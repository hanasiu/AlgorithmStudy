#include <iostream>
#include <vector>


using namespace std;

double Power(double x, int y) {
	double result = 1.0;
	long long power = y;
	if (y < 0) { 
		power = -power, x = 1.0 / x;
	}
	while (power) {
		if (power & 1) {
			result *= x;
		}
		x *= x, power >>= 1;
	}
	return result;
}

int main()
{
	double k = Power(2, 10);
	cout << k;
	return 0;
}
