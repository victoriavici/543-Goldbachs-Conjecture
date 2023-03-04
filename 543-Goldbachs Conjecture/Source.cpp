#include <iostream>
#include <cmath>
using namespace std;
bool Prvo(long num) {
	if (num > 1)
	{
		for (long i = 2; i <= sqrt(num); i++)
		{
			if (num % i == 0) {
				return false;
			}
		}
		return true;
	}
	return false;
}


int main() {
	while (true)
	{
		int input;
		cin >> input;
		if (input == 0) {
			break;
		}
		if (input == 4) {
			cout << input << " = " << 2 << " + " << 2 << endl;
		}
		else {
			int p;
			int i = input - 3;
			if (i % 2 == 0) {
				i--;
			}
			bool flag = false;
			do {
				if (Prvo(i))
				{
					p = input - i;
					if (Prvo(p)) {
						flag = true;
						cout << input << " = " << p << " + " << i << endl;
					}
				}
				if (i == 3 && !flag) {
					cout << "Goldbach's conjecture is wrong." << endl;
					flag = true;
				}
				else {
					i -= 2;
				}

			} while (!flag);
		}
	}
	return 0;
}