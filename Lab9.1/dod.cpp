// dod.cpp
// ���� ��������� �������
#include "dod.h"
#include "var.h" // ��������� ������ ���������� ������
#include <math.h>
using namespace nsVar;
void nsDod::dod() {
	R = (2. * n * pow(x, 2) - pow(x, 2)) / (2 * n + 1);
	a *= R; // ������� ����������� ��
} // ���������� ������������