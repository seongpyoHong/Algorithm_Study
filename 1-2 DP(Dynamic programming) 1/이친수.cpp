#include <iostream>
#include <algorithm>
using namespace std;

long long cache[91][2];

void Init_Arr() {
	for (int i = 0; i < 91; i++) {
		for (int j = 0; j < 2; j++) {
			cache[i][j] = 0;
		}
	}
	cache[1][1] = 1;
}

void Cal_Upper(int cnt) {

	for (int i = 2; i <= cnt; i++) {
		//0�� ������ ���� ���� �ڸ� ���� 0,1�� �� ��� ����
		cache[i][0] = (cache[i - 1][0] + cache[i - 1][1]);
		//1�� ������ ���� ���� �ڸ��� 0�� ���� ����
		cache[i][1] = cache[i - 1][0];
	}
}

int main() {
	int count;
	long long sum = 0;
	cin >> count;

	Init_Arr();
	Cal_Upper(count);

	for (int j = 0; j < 2; j++)
		sum += cache[count][j];

	cout << sum << endl;
	system("pause");
}