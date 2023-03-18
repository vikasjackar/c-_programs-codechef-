#include <iostream>
using namespace std;

int partition(int a[], int s, int e)
{

	int p = a[s];

	int count = 0;
	for (int i = s + 1; i <= e; i++) {
		if (a[i] <= p)
			count++;
	}
	
	int Index = s + count;
	swap(a[Index], a[s]);

	int i = s, j = e;

	while (i < Index && j > Index) {

		while (a[i] <= p) {
			i++;
		}

		while (a[j] > p) {
			j--;
		}

		if (i < Index && j > Index) {
			swap(a[i++], a[j--]);
		}
	}

	return Index;
}

void QSort(int a[], int s, int e)
{

	if (s >= e)
		return;
	int d = partition(a, s, e);
	QSort(a, s, d - 1);
	QSort(a, d + 1, e);
}

int main()
{

	int arr[] = { 9, 3, 4, 2, 1, 8 };
	int n = 6;

	QSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
