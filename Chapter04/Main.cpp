#include <iostream>
using namespace std;

size_t StrLen(const char* str)
{
	size_t i;
	for (i = 0; str[i] != '\0'; i++)
	{
		//�������Ȃ�
	}
	return i;
}

void Showlength(const char* str)
{
	cout << "������u " << str << " �v�̒����� "
		<< StrLen(str) << "�o�C�g�ł��B" << endl;
}

int main()
{
	Showlength("Hello");
	Showlength("");
}