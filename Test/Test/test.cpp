#include <iostream>
#include <vector>

	using namespace std;

	int divide(int dividend, int divisor) {
		if (dividend == 0) return 0;
		bool op1 = true, op2 = true, op = true;
		int division = 0;
		if (dividend < 0) op1 = false;
		if (divisor < 0) op2 = false;
		if (op1 == false && op2 != false) op = false;
		if (op1 != false && op2 == false) op = false;
		//单独分析INT_MIN的两种情况
		if (divisor == INT_MIN && dividend != INT_MIN) return 0;
		if (divisor == INT_MIN && dividend == INT_MIN) return 1;
		if (divisor == 1 && dividend == INT_MIN)  return INT_MIN;
		if (divisor == -1 && dividend == INT_MIN) return INT_MAX;
		if (dividend == INT_MIN)
		{
			int d2 = abs(divisor);
			while (dividend <= 0)
			{
				dividend += d2;
				division++;
			}
			division--;
			return op == false ? -division : division;
		}
		else
		{
			int d1 = abs(dividend);
			int d2 = abs(divisor);
			while (d1 >= 0 && division <= INT_MAX)
			{
				d1 -= d2;
				division++;
			}
			if (division == INT_MAX)
			{
				return op == false ? -division : division;
			}
			division--;
			return op == false ? -division : division;
		}
	}
	int main(int argc, char** argv)
	{
		signed int a =(-2147483647), b =(-3);
		cout<<divide(a, b);
	}