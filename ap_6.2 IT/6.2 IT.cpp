#include <iostream>
#include <iomanip>

using namespace std;

void create(int* a, const int n, const int HIGH, const int LOW);
void print(int* a, const int n);
int find_min(int* a, const int n, const int i, int& min);
int find_max(int* a, const int n, const int i, int& max);

int main()
{
	srand((unsigned)time(NULL));
	const int n = 10;
	int a[n];
	const int HIGH = 20;
	const int LOW = -20;
	create(a, n, HIGH, LOW);
	print(a, n);
	const int i = 0;
	int min = a[0];
	int max = a[0];
	cout << "Min value: ";
	cout << find_min(a, n, i, min) << endl;
	cout << "Max value: ";
	cout << find_max(a, n, i, max) << endl;
	print(a, n);
}
void create(int* a, const int n, const int HIGH, const int LOW)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = LOW + rand() % (HIGH - LOW + 1);
	}
}
void print(int* a, const int n)
{
	cout << "a[] = { ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "}" << endl;
}
int find_min(int* a, const int n, const int i, int& min)
{
	int minIndex = -1;

	for (int i = 0; i < n; i++)
		if (a[i] <= min) {
			min = a[i];
			minIndex = i;
		}

	if (min == -1)
	{
		cout << "none";
		return 0;
	}

	return minIndex;

}
int find_max(int* a, const int n, const int i, int& max)
{
	int maxIndex = -1;

	for (int i = 0; i < n; i++)
	{
		if (a[i] >= max)
		{
			max = a[i];
			maxIndex = i;
		}
	}

	if (maxIndex == -1)
	{
		cout << "none";
		return 0;
	}


	return maxIndex;

}