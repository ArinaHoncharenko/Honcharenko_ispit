
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	int i, a, b, c;
	int Q[10];
	cout << "Введiть 10 елементiв масиву(елементами масиву можуть бути 0, 1 або 2):\n";
	for (int i = 0; i < 10; i++) {
		cin>> Q[i];
	}
	for (int i = 0; i < 10; i++) {
		if (Q[i] > 2) {
			cout << "Недопустиме значення елемента масиву.";
		}
		else {
			// сортування
			for (a = 0; a < 9; a++) {
				b = a;
				for (c = a + 1; c < 10; ++c) {
					if (Q[c] < Q[b])
						b = c;
				}
				swap(Q[a], Q[b]);
			}
			cout << "\n";
			for (i = 0; i < 10; i++) {
				cout << Q[i] << endl;
			}
			//сума
			int sum;
			sum = 0;
			for (i = 0; i < 10; i++) {
				sum += Q[i];
			}
			cout << "Cума елементiв масиву: " << sum << endl;
		}
		system("pause>>void");
		return 0;
	}
}
