//�޸� : 2752kb, �ð� 68ms
#include <stdio.h>
#include <algorithm>
using namespace std;
struct Point
{
	int x;
	int y;
};
bool compare(const Point &p1, const Point &p2) {
	if (p1.y< p2.y) {
		return true;
	}
	else if (p1.y == p2.y) {
		return p1.x < p2.x;
	}
	else {
		return false;
	}
}
int main() {
	int input_count;
	scanf("%d", &input_count);
	Point* arr = new Point[input_count + 1];
	for (int i = 0; i < input_count; i++) {
		int in_x, in_y;
		scanf("%d", &in_x);
		scanf("%d", &in_y);
		arr[i].x = in_x;
		arr[i].y = in_y;
	}

	stable_sort(arr, arr + input_count, compare);

	for (int i = 0; i < input_count; i++) {
		printf("%d ", arr[i].x);
		printf("%d\n", arr[i].y);
	}
	return 0;
}