#include <iostream>
using namespace std;

//変数の前に & をつけることでその変数のアドレスを取得できる
//アドレスに　*　をつけるとポインタを作成できる

int main()
{
	int a;
	int* p = &a;		//ポインタ
	/*
		変数 a のアドレスを変数 p に代入する
		a のアドレスを参照することが出来るようになる

	*/

	a = 0;
	cout << "a = " << a << endl
		<< "*p = " << *p << endl;
	
	*p = 5;
	cout << "a = " << a << endl
		<< "*p = " << *p << endl;

}