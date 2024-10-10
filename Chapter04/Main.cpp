#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;
void Init(int array[])
{
	for (int i = 0; i < 5; i++)
	{
		array[i] = i * 5;
	}
}

void Show(int array[])
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
}

int main()
{
	int n[ARRAY_SIZE];

	Init(n);
	Show(n);
}