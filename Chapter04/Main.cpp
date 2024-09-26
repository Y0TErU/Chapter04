#include <iostream>
using namespace std;

//変数の前に & をつけることでその変数のアドレスを取得できる
void Foo()
{
	int a;
	char b[10];
	cout << "a	:" << (size_t)&a << endl
		<< "b	:" << (size_t)&b << endl
		<< "Foo	:" << (size_t)&Foo << endl;
}

int main()
{
	Foo();
}