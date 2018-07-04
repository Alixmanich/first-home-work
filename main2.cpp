#include<iostream>

using namespace std;




int pr(int a)
{
	int i, k = 0;
	for (i = 2; i <= a / 2; i++) if (a%i == 0) { k = 1; break; }
	return k;
}

void checkPrime(unsigned int value) {
	bool pr = true;
	for (int i = 2; i <= sqrt(value); i++)
	{
		if (value%i == 0)
			pr = false;
	}
	if (pr == true)
		cout << endl << "PROSTOE.";
	else
		cout << endl << "NE PROSTOE."<<endl;

}


unsigned int nextPrime(unsigned int value) {
	int i, j;
	if (value <= 2) cout << endl << "  Result: 2";
	else
	{
		for (i = value;; i--) if (pr(i) == 0) break;
		for (j = value;; j++) if (pr(j) == 0) break;
		cout << i << "  " << j;
		if (value - i > j - value)
		{
			cout << endl << " Result: " << j;
		}
		if (value - i == j - value && i != j)
		{
			cout << endl << "  Result: " << i << " or " << j;
		}
		if (value - i == j - value && i == j) {
			cout << endl << "  Result: " << i;
		}
		if (value - i < j - value) 
		{ cout << endl << "  Result: " << j; }
	}
	return 0;
}


int main() {

	


	unsigned int value;
	cout << "vvedite chislo: " << endl;
	cin >> value;

	checkPrime(value);
	nextPrime(value);


	system("pause");
	return 0;
}




	





