#include <iostream>
using namespace std;

//変数の前に & をつけることでその変数のアドレスを取得できる
int main()
{
	int n[4];
	int* p = n;

	cout << "p     : " << (size_t)p << endl
		<< "&n[0] : " << (size_t)&n[0] << endl;

	p += 2;
	cout << "p     : " << (size_t)p << endl
		<< "&n[2] : " << (size_t)&n[2] << endl;

}