#include<iostream>
#include<vector>
using namespace std;


unsigned long findValue(unsigned int min, unsigned int max) {
	int mass[200];// ������� ������ ��� ������ � ���
	unsigned int a = min;
	unsigned int nch = 1;//������ ��� �����

	for (int i = 0; i < max; i++) {
		mass[i] = a;
		a++;
	}//��������� ������ ����������
	while (nch != 1000000000000) {//�������


		if (nch% mass[20] == 0) {//���� ��� ����� ������� ������� �� ������ ��� ����� ��� ������� - ������� �� �����
			break;

		}
		else {
			nch++;//����� ���������� ����� �����
		}

	}

	return(nch);
}

int main() {
	cout << findValue(1, 20);//������� ������� � ��������� �����������
	system("pause");
	return 0;
}