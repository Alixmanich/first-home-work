#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

unsigned long sumPrime(unsigned int hbound) {
	unsigned long summ = 2;
	double k, p;
	int f = 0, i;
	for (int i = 3; i < hbound - 1; i++) {
		if (i % 2 != 0) {
			k = sqrt(i);
			p = ceil(k);
			f++;
			for (int j = 2; j <= p; j++) {
				if ((i%j) == 0) {
					f++;
				}
			}
			if (f < 2) {
				summ = summ + i;
			}
			f = 0;
		}
	}
	return (summ);
}
int main() {

	int hbound = 2000000;
	cout << sumPrime(hbound);
	system("pause");
	return 0;

}