#include <iostream>
using namespace std;

//�ϐ��̑O�� & �����邱�Ƃł��̕ϐ��̃A�h���X���擾�ł���
//�A�h���X�Ɂ@*�@������ƃ|�C���^���쐬�ł���

int main()
{
	int a;
	int* p = &a;		//�|�C���^
	/*
		�ϐ� a �̃A�h���X��ϐ� p �ɑ������
		a �̃A�h���X���Q�Ƃ��邱�Ƃ��o����悤�ɂȂ�

	*/

	a = 0;
	cout << "a = " << a << endl
		<< "*p = " << *p << endl;
	
	*p = 5;
	cout << "a = " << a << endl
		<< "*p = " << *p << endl;

}