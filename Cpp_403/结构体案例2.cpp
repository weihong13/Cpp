#define _CRT_SECURE_NO_WARNINGS
#include "HeroPool.h"


/*
��������:
����һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;����γ�������飬�����д��5��Ӣ��
ͨ��ð��������㷨���������е�Ӣ�۰��ղ�ͬ���Խ��������������մ�ӡ�����Ľ����
ʵ��һ��Ӣ�۳صĹ��ܣ��������Ӣ�ۣ�ɾ��Ӣ�ۣ��޸�Ӣ�ۣ�����Ӣ�ۣ�չʾ��ǰӢ�ۣ�
*/

// ����
// �ṹ��ĳ���
// ��vectorʵ��
// ����NULL �� nullptr

// 
// δ��ɸ�����
// ʹ��new���������ý�֮ǰ�����ݷ���
// δѧϰ�ڴ�֪ʶ
//


void menu() {
	cout << "*********************** ****************" << endl;
	cout << "******1��AddHero       2��DelHero ******" << endl;
	cout << "******3��ModifyHero    4��FindHERO******" << endl;
	cout << "******5��ShowHero      6��SortHero******" << endl;
	cout << "******0��Exit                     ******" << endl;
	cout << "****************************************" << endl;


}


int main(){
	
	// ����Ӣ�۳�
	struct HeroPool hp;
	// ��ʼ��Ӣ�۳�
	InitHeroPool(&hp);
	void (*pfArr[FUNC_NUM+1])(struct HeroPool*) = {0,AddHero,nullptr,nullptr,nullptr,ShowHero,nullptr };
	int input = 0;
	do {
		menu();
		cout << "��ѡ��>" ;
		cin >> input;
		if (input == 0) 
		{
			DestoryContact(&hp);
			cout << "���˳�Ӣ�۳أ�" << endl;
		}
		else if (input>0 && input <= FUNC_NUM) 
		{
			pfArr[input](&hp);
		}
		else
		{
			cout << "�������������ѡ��" << endl;
		}
	} while (input);





	system("pause");
	return 0;
}