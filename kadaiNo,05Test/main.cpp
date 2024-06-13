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
	string myst[] = { "戦士","魔法使い","格闘家" };
	int myst1[] = { 20,30,35,40,30,5 };
	string kiru = "斬る";
	string naguru = "殴る";
	string fare = "ファイヤー";
	string buturi = "杖で殴る";
	string name;
	cout << "名前を入力してください: ";
	getline(std::cin, name);
	cout << "入力した名前は " << name << " です。" << endl;
	cin.get();
	system("cls");

	do {
		gomi:
		cout << "なりたい職業を選んでください\n選択肢2		魔法使い\n魔法使いの攻撃は\n1		ファイヤー\n2		杖で殴る\n選択肢1		戦士\n戦士の攻撃は\n1		斬る\n2		殴る\n選択肢3		格闘家\n";
		cin >> syokugyou;

		if (syokugyou < 4 && syokugyou != 0)
		{
			cout << "選んだ職業は" << myst[syokugyou - 1] << "です\n";
			break;
		}
		else
		{
			cout << "無効な操作です再度やり直してください\n";
			goto gomi;
		}

	} while (sentaku != 0);

	do
	{
		cout << "野生のスライムが出てきた\n";


		if (suraimuHP > 0)
		{
		attaksentaku:
			if (syokugyou == 1)
			{
				cout << "戦士の攻撃	1斬る	2殴る	があります好きな攻撃を選んでください\n";
				cin >> attak;
			}
			if (syokugyou == 2)
			{
				cout << "魔法使いの攻撃は	1ファイヤー		2杖で殴る		があります好きな攻撃を選んでください\n";
				cin >> attak;
			}
			if (syokugyou == 3)
			{
				cout << "格闘家の攻撃は		1正拳突き		2運ゲーパンチ		があります好きな攻撃を選んでください\n";
				cin >> attak;
			}
		}
		do
		{
			if (myst1[attak + 1] && attak == 1)
			{
				cout << "スライムに" << myst1[attak + 1] << "のダメージ\n";
				suraimuHP = suraimuHP - myst1[attak + 1];
					if (suraimuHP < 1)
				{
						suraimuHP = 0;
						break;
				}
					cout << "スライムの残りHP" << suraimuHP;
					goto attaksentaku;
			if (myst1[attak + 2] && attak == 2)
			{
					cout << "スライムに" << myst1[attak + 2] << "のダメージ\n";
					suraimuHP = suraimuHP - myst1[attak + 2];
					if (suraimuHP < 1)
					{
						suraimuHP = 0;
						break;
					}
					cout << "スライムの残りHP" << suraimuHP;
					goto attaksentaku;
			}
		}
	} while (suraimuHP < 1);
		
		cout << "スライムを倒した";
		return 0;
	} while (XP < 50);
		return 0;
}