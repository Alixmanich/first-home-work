#include <iostream>
#include <string>
#include<vector>
using namespace std;


int sum(string str1, string str2) {
	unsigned long int num = 0;

	for (int i = 0; i < str1.length(); i++) {
		num = num * 10 + str1[i] - 0x30;
	}

	unsigned long int mmm = 0;

	for (int i = 0; i < str2.length(); i++) {
		mmm = mmm * 10 + str2[i] - 0x30;
	}

	unsigned  long int m = mmm + num;
	vector< unsigned long int> v;
	v.push_back(m);
	

	for (unsigned long int i = 0; i != 100; i++) {
		cout << v[i];
	}
	return(v[100]);
}
int main() {
	
	cout << sum("12345678900","12345678900");
	system("pause");
	return 0;
}

