#include <iostream>
using namespace std;

//�ϐ��̑O�� & �����邱�Ƃł��̕ϐ��̃A�h���X���擾�ł���

int main()
{
	char array[10];
	cout << "arraay   : " << (size_t)array << endl;				//�ϐ�array�̃A�h���X��\��
	for (int i = 0; i < 10; i++)
	{
		cout << "&array[" << i << " ]  : " << (size_t) & array[i] << endl;	//�ϐ�array�̂��ꂼ��̔z��̃A�h���X��\��
	}
}