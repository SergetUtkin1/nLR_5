#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double x, y, z;

	cout <<    "  x |    y    |   z" << "\n";

	for (x = 3.0; x <= 10.0; x++)
	{
		cout << "----+---------+--------\n";
		if (x > 6)
		{
			z = pow(fabs(x), 1.0 / 3.0);
		}
		else
		{
			z = log(x);
		}

		y = pow(pow(M_PI * x, 2) + 1.0 / z, 1.0 / 5.0);

		cout << setw(3) << right << x << " | " << y << " | " << z << "\n";
	}
}