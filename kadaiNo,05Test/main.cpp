/*************************************/
/************************************/
//
// akita reon 
//
/************************************/
/***********************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;
int Round;
int i;
int sentaku = 0;
int syokugyou;
int suraimuHP = 300;
int attak = 0;
int XP;
int sensiattak1 = 35;
int sensiattak2 = 40;





int main() {
	srand((unsigned int)time(NULL));
	int randomnum = rand() % 8 + 1;
	string myst[] = { "��m","���@�g��","�i����" };
	int myst1[] = { 20,30,35,40,30,5 };
	string kiru = "�a��";
	string naguru = "����";
	string fare = "�t�@�C���[";
	string buturi = "��ŉ���";
	string name;
	cout << "���O����͂��Ă�������: ";
	getline(std::cin, name);
	cout << "���͂������O�� " << name << " �ł��B" << endl;
	cin.get();
	system("cls");

	do {
		gomi:
		cout << "�Ȃ肽���E�Ƃ�I��ł�������\n�I����2		���@�g��\n���@�g���̍U����\n1		�t�@�C���[\n2		��ŉ���\n�I����1		��m\n��m�̍U����\n1		�a��\n2		����\n�I����3		�i����\n";
		cin >> syokugyou;

		if (syokugyou < 4 && syokugyou != 0)
		{
			cout << "�I�񂾐E�Ƃ�" << myst[syokugyou - 1] << "�ł�\n";
			break;
		}
		else
		{
			cout << "�����ȑ���ł��ēx��蒼���Ă�������\n";
			goto gomi;
		}

	} while (sentaku != 0);

	do
	{
		cout << "�쐶�̃X���C�����o�Ă���\n";


		if (suraimuHP > 0)
		{
		attaksentaku:
			if (syokugyou == 1)
			{
				cout << "��m�̍U��	1�a��	2����	������܂��D���ȍU����I��ł�������\n";
				cin >> attak;
			}
			if (syokugyou == 2)
			{
				cout << "���@�g���̍U����	1�t�@�C���[		2��ŉ���		������܂��D���ȍU����I��ł�������\n";
				cin >> attak;
			}
			if (syokugyou == 3)
			{
				cout << "�i���Ƃ̍U����		1�����˂�		2�^�Q�[�p���`		������܂��D���ȍU����I��ł�������\n";
				cin >> attak;
			}
		}
		do
		{
			if (myst1[attak + 1] && attak == 1)
			{
				cout << "�X���C����" << myst1[attak + 1] << "�̃_���[�W\n";
				suraimuHP = suraimuHP - myst1[attak + 1];
					if (suraimuHP < 1)
				{
						suraimuHP = 0;
						break;
				}
					cout << "�X���C���̎c��HP" << suraimuHP;
					goto attaksentaku;
			if (myst1[attak + 2] && attak == 2)
			{
					cout << "�X���C����" << myst1[attak + 2] << "�̃_���[�W\n";
					suraimuHP = suraimuHP - myst1[attak + 2];
					if (suraimuHP < 1)
					{
						suraimuHP = 0;
						break;
					}
					cout << "�X���C���̎c��HP" << suraimuHP;
					goto attaksentaku;
			}
		}
	} while (suraimuHP < 1);
		
		cout << "�X���C����|����";
		return 0;
	} while (XP < 50);
		return 0;
}