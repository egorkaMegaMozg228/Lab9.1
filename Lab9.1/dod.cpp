// dod.cpp
// файл реалізації функції
#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних
#include <math.h>
using namespace nsVar;
void nsDod::dod() {
	R = (2. * n * pow(x, 2) - pow(x, 2)) / (2 * n + 1);
	a *= R; // доданок домножується на
} // коефіцієнт рекурентності