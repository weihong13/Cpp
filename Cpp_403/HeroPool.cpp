#define _CRT_SECURE_NO_WARNINGS
#include "HeroPool.h"


void InitHeroPool(HeroPool* hp)
{
	assert(hp);
	hp->count = 0;
	hp->data = new Hero[INIT_CAP];
	if (hp->data == nullptr)
	{
		perror("InitHeroPool");
		return;
	}
	hp->capacity = INIT_CAP;
	
}

//  ��������
static void IncreaseCapacity(HeroPool* hp)
{
	if (hp->count == hp->capacity) {
		Hero* ptr = new Hero[hp->capacity + INC_CAP];// ֮ǰ��dataû�ͷ�
		if (ptr == nullptr)
		{
			perror("IncreaseCapacity");
			return;
		}
		else
		{

			hp->data = ptr;
			hp->capacity = hp->capacity + INC_CAP;
			cout << "���������ɹ�";
		}
	}
}


void AddHero(HeroPool* hp)
{
	assert(hp);
	// �ж��Ƿ���Ҫ����
	IncreaseCapacity(hp);
	// ���Ӣ����Ϣ
	cout << "������Ӣ��������>";
	cin >> hp->data[hp->count].name;
	cout << "������Ӣ�����䣺>";
	cin >> hp->data[hp->count].age;
	cout << "������Ӣ���Ա�>";
	cin >> hp->data[hp->count].sex;
	cout << "������Ӣ�۱�����>";
	cin >> hp->data[hp->count].weapon;
	hp->count++;
	cout << "���Ӣ�۳ɹ�"<<endl;
}


// չʾӢ�۳�
void ShowHero(HeroPool* hp)
{
	assert(hp);
	int i = 0;
	cout << "����"
		<< "\t"
		<< "����"
		<< "\t"
		<< "�Ա�"
		<< "\t"
		<< "����" << endl;
	for (i = 0; i < hp->count; i++)
	{
		cout << hp->data[i].name
			 <<"\t"
			 << hp->data[i].age
			 << "\t"
			 << hp->data[i].sex
			 << "\t"
			 << hp->data[i].weapon << endl;
	}
}



// �����ڴ�ռ�
void DestoryContact(HeroPool* hp)
{
	assert(hp);
	free(hp->data);
	hp->data = NULL;
}