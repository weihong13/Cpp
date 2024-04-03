#define _CRT_SECURE_NO_WARNINGS
#include "HeroPool.h"


/*
案例描述:
发计一个英雄的结构体，包括成员姓名，年龄，性别;创建纬构体数组，数组中存放5名英雄
通过冒泡排序的算法，将数组中的英雄按照不同属性进行升序排序，最终打印排序后的结果。
实现一个英雄池的功能，包括添加英雄，删除英雄，修改英雄，查找英雄，展示当前英雄，
*/

// 进阶
// 结构体改成类
// 用vector实现
// 区分NULL 和 nullptr

// 
// 未完成该任务
// 使用new增加容量得将之前是数据放入
// 未学习内存知识
//


void menu() {
	cout << "*********************** ****************" << endl;
	cout << "******1、AddHero       2、DelHero ******" << endl;
	cout << "******3、ModifyHero    4、FindHERO******" << endl;
	cout << "******5、ShowHero      6、SortHero******" << endl;
	cout << "******0、Exit                     ******" << endl;
	cout << "****************************************" << endl;


}


int main(){
	
	// 创建英雄池
	struct HeroPool hp;
	// 初始化英雄池
	InitHeroPool(&hp);
	void (*pfArr[FUNC_NUM+1])(struct HeroPool*) = {0,AddHero,nullptr,nullptr,nullptr,ShowHero,nullptr };
	int input = 0;
	do {
		menu();
		cout << "请选择：>" ;
		cin >> input;
		if (input == 0) 
		{
			DestoryContact(&hp);
			cout << "已退出英雄池！" << endl;
		}
		else if (input>0 && input <= FUNC_NUM) 
		{
			pfArr[input](&hp);
		}
		else
		{
			cout << "输入错误，请重新选择" << endl;
		}
	} while (input);





	system("pause");
	return 0;
}