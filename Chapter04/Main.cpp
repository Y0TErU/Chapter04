#include <iostream>
using namespace std;

//�ϐ��̑O�� & �����邱�Ƃł��̕ϐ��̃A�h���X���擾�ł���
int main()
{
	int n[5];

	cout << "&n[2]   = " << (size_t)&n[2] << endl
		<< "&n[2] + 1 = " << (size_t)(&n[2] + 1) << endl
		<< "&n[3]   = " << (size_t)&n[3] << endl;

}