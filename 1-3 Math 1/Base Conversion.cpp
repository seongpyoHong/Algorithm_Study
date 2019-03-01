#include <iostream>
#include <cmath>
using namespace std;

//�������� ����
int result[25];

void convert(int count, int A, int B) {

	//10�������� ��ȯ�� ���� ������ ����
	int sum = 0;

	//A���� ���� 10�������� ��ȯ
	for (int i = 0; i<count; i++) {
		sum += (result[i] * pow(A, i));
		result[i] = -1;
	}

	int index = 0;
	//10���� ���� B�������� ��ȯ
	while (sum>0) {
		result[index] = sum % B;
		sum /= B;
		index++;
	}
	return;
}
int main() {
	int A, B, count;
	cin >> A >> B;
	cin >> count;

	//�迭 �ʱ�ȭ
	for (int i = 0; i<25; i++) {
		result[i] = -1;
	}

	//�Է°� �迭�� �ڿ��� ���� ����
	for (int i = count - 1; i >= 0; i--) {
		int number;
		cin >> number;
		result[i] = number;
	}

	//���� ��ȯ 
	convert(count, A, B);

	//��ȯ�� ���� �ڸ��� ���
	int size = sizeof(result) / sizeof(int) + 1;

	//�Ųٷ� ���
	for (int i = size - 2; i >= 0; i--) {
		if (result[i] != -1)
			cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}