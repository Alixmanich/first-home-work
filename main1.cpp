#include<iostream>
#include<vector>
using namespace std;


unsigned long findValue(unsigned int min, unsigned int max) {
	int mass[200];// создали массив для работы с ним
	unsigned int a = min;
	unsigned int nch = 1;//нужное нам число

	for (int i = 0; i < max; i++) {
		mass[i] = a;
		a++;
	}//заполняем массив делителями
	while (nch != 1000000000000) {//перебор


		if (nch% mass[20] == 0) {//если все числа массива делятся на нужное нам число без остатка - выходим из цикла
			break;

		}
		else {
			nch++;//иначе продолжаем поиск числа
		}

	}

	return(nch);
}

int main() {
	cout << findValue(1, 20);//вызвали функцию с заданными параметрами
	system("pause");
	return 0;
}