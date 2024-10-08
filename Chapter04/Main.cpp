#include <iostream>
using namespace std;

size_t StrLen(const char* str)
{
	size_t i;
	for (i = 0; str[i] != '\0'; i++)
	{
		//何もしない
	}
	return i;
}

void Showlength(const char* str)
{
	cout << "文字列「 " << str << " 」の長さは "
		<< StrLen(str) << "バイトです。" << endl;
}

int main()
{
	Showlength("Hello");
	Showlength("");
}