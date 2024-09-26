#include <iostream>
using namespace std;

//変数の前に & をつけることでその変数のアドレスを取得できる
int main()
{
	char a;
	char* p;		//ポインタ

	p = &a;
	cout << "p = " << (size_t)p << endl
		<< "&a = " << (size_t)a << endl;

}