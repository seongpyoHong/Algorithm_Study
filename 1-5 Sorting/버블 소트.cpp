//�޸� :2772kb, �ð� :24ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	//2���� ���� ����
	vector <pair<int, int>> a(n);

	//�Է¹����鼭 �ʱ��� �ε��� �� ����
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &a[i].first);
		a[i].second = i;
	}

	//����
	sort(a.begin(), a.end());
	//���� ���� ������ Ƚ���� ������ ����
	int ans = 0;

	//ans�� �ִ밪���� ����ؼ� ����
	for (int i = 0; i<n; i++)
	{
		if (ans < a[i].second - i)
			ans = a[i].second - i;
	}

	//������ Ƚ�� +1 = ������ ����� Ƚ��
	printf("%d", ans + 1);
	return 0;
}