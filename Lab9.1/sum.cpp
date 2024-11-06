// sum.cpp
// файл реалізації функції
#include <math.h>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsDod;
using namespace nsVar;
double nsSum::sum() {
	n = 0;
	a = x;
	S = a;
	do {
		n++;
		dod(); // виклик процедури обчислення доданку
		S += a;
	} while (abs(a) >= eps);
	return S;
}