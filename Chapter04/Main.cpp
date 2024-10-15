#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;
const char* const MONTH_NAME[] =
{
	"–rŒ","”@Œ","–í¶","‰KŒ","HŒ", "…–³Œ","•¶Œ","—tŒ", "’·Œ","_–³Œ",
	"‘šŒ", "t‘–"
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
	cout << "¡‚Í‰½Œ‚Å‚·‚©H > " << flush;
	cin >> month;

	const char* name = Get01dMonthName(month);
	if (name == 0)
	{
		cout << month << "Œ‚Í‘¶İ‚µ‚Ü‚¹‚ñB" << endl;
	}
	else
	{
		cout << name << endl;
	}
}