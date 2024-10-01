#include <iostream>
using namespace std;

//変数の前に & をつけることでその変数のアドレスを取得できる
void Init(int array[])
{
	for (int i = 0; i < 5; i++)
	{
		array[i] = i * 5;
	}
	
}

void Show(int array[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;

}

int main()
{
	int n[5];

	Init(n);
	Show(n);
}