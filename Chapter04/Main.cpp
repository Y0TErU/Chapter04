#include <iostream>
using namespace std;

//�ϐ��̑O�� & �����邱�Ƃł��̕ϐ��̃A�h���X���擾�ł���
int main()
{
	char a;
	char* p;		//�|�C���^

	p = &a;
	cout << "p = " << (size_t)p << endl
		<< "&a = " << (size_t)a << endl;

}