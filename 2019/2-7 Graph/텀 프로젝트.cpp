// 4008KB, 1628ms
#include <iostream>
#include <cstring> //memset

using namespace std;

const int MAX = 100000 + 1;
int N, cnt;
int want[MAX];
bool visited[MAX];
bool done[MAX]; //�湮�� �������� ����

void dfs(int nodeNum) {
	visited[nodeNum] = true;
	int next = want[nodeNum];
	if (!visited[next])
		dfs(next);

	//�̹� �湮������ �湮�� ���� ��尡 �ƴ϶�� ����Ŭ
	else if (!done[next])
	{
		//������ ��� ����
		for (int i = next; i != nodeNum; i = want[i])
			cnt++;

		cnt++; //�ڱ� �ڽ��� ����
	}
	done[nodeNum] = true; //�� �̻� �ش� ��带 �湮�� ���� ����
}

int main(void)
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		memset(visited, false, sizeof(visited));
		memset(done, false, sizeof(done));
		cin >> N;
		for (int j = 1; j <= N; j++)
			cin >> want[j];

		cnt = 0;

		for (int j = 1; j <= N; j++)
			if (!visited[j])
				dfs(j); //���� �̷�� ������� ����

		cout << N - cnt << endl;
	}
	return 0;
}