#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;
const char* const MONTH_NAME[] =
{
	"�r��","�@��","�퐶","�K��","�H��", "������","����","�t��", "����","�_����",
	"����", "�t��"
};

const char* Get01dMonthName(int month)
{
	if (1 <= month && month <= 12)
	{
		return MONTH_NAME[month - 1];
	}
	return 0;		//NULL
}

int main()
{
	int month;
	cout << "���͉����ł����H > " << flush;
	cin >> month;

	const char* name = Get01dMonthName(month);
	if (name == 0)
	{
		cout << month << "���͑��݂��܂���B" << endl;
	}
	else
	{
		cout << name << endl;
	}
}