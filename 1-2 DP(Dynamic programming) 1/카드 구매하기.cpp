#include <iostream>
#include <algorithm>
using namespace std;

int cache[1001] = { 0 };
int MyCal(int cnt) {
	//ù ��° index���� ���� ���� index��
	for (int index = 1; index <= cnt; index++) {
		int tmp;
		for (int Pair_Index = 1; Pair_Index <= index / 2; Pair_Index++) {
			tmp = max(cache[index - Pair_Index] + cache[Pair_Index], cache[index]);
			cache[index] = tmp;
		}
	}
	return cache[cnt];
}

int main() {
	int count;
	cin >> count;

	int price;
	for (int i = 0; i < cnt; i++) {
		cin >> price;
		cache[i + 1] = price;
	}
	cout << MyCal(count) << endl;
}