#include <iostream>
using namespace std;

//変数の前に & をつけることでその変数のアドレスを取得できる

int main()
{
	char array[10];
	cout << "arraay   : " << (size_t)array << endl;				//変数arrayのアドレスを表示
	for (int i = 0; i < 10; i++)
	{
		cout << "&array[" << i << " ]  : " << (size_t) & array[i] << endl;	//変数arrayのそれぞれの配列のアドレスを表示
	}
}