#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "----------------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(5) << " |"
		<< setw(7) << "lg((1+x)/(1-x))" << "|"
		<< setw(9) << "2*S" << setw(8) << " |"
		<< setw(7) << "n" << setw(7) << " |"
		<< endl;
	cout << "----------------------------------------------------------" << endl;
	x = xp;
	while (x <= xk) {
		if (abs(x) < 1 - eps) {
			sum();
			cout << "|" << setw(7) << setprecision(2) << x << setw(3) << " |"
				<< setw(11) << setprecision(5) << log((1 + x) / (1 - x)) << setw(5) << " |"
				<< setw(10) << setprecision(5) << 2 * S << setw(7) << " |"
				<< setw(7) << n << setw(7) << " |"
				<< endl;
		} // виклик процедури обчислення суми
		else {
			cout << "|" << setw(7) << setprecision(2) << x << setw(3) << " |"
				<< setw(14) << "Out of range" << " |" <<
				setw(15) << "Out of range" << " |"
				<< "Out of range" << " |"
				<< endl;
		}
		x += dx;
	}
	cout << "----------------------------------------------------------" << endl;
	cin.get();
	return 0;
}

