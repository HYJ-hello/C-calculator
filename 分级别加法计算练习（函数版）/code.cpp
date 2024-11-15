// --------------------------------------------------------- 头文件 ----------------------------------------------- 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
// -------------------------------------命名空间 --------------------------------------

using namespace std;
 
// -------------------------------------------------------------- 变量 ------------------------------------------------------------

int Options_1; // 第一个用户选项(选择四则运算) 
int Options_2; //第二个用户选项 (选择难度) 
long long answer;//用户的答案 
long long answer_2;
long long a , b;//两个数


// -------------------------------------------随机数生成 --------------------------------------------


void plan_1()
{
	srand(static_cast<unsigned int>(time(NULL))); // 随机生成种子
	a = rand() % 10;
	b = rand() % 10;
} 
 
 
 void plan_2()
{
	srand(static_cast<unsigned int>(time(NULL))); // 随机生成种子
 	a = rand() % 100;
 	b = rand() % 100;
}
 
 
 void plan_3()
{
	srand(static_cast<unsigned int>(time(NULL))); // 随机生成种子
 	a = rand() % 1000;
 	b = rand() % 1000;
}







void division_1()
{
	srand(static_cast<unsigned int>(time(NULL))); // 随机生成种子
	a = rand() % 10;
	b = rand() % 9 + 1;//生成1到9的随机数 
} 
 
 
 void division_2()
{
	srand(static_cast<unsigned int>(time(NULL))); // 随机生成种子
 	a = rand() % 100;
 	b = rand() % 99 + 1;//生成1到99的随机数 
}
 
 
 void division_3()
{
	srand(static_cast<unsigned int>(time(NULL))); // 随机生成种子
 	a = rand() % 1000;
 	b = rand() % 999 + 1;//生成1到999的随机数 
}


// -------------------------------------------------------------自定义函数 ----------------------------------------------------------------

void BUG()
{
	cout << "搁着卡BUG呢？？？"<< endl;
	cout << "搁着卡BUG呢？？？"<< endl;
	cout << "搁着卡BUG呢？？？"<< endl;
	cout << "????????????????????????" << endl;
	cout << "????????????????????????" << endl;
	cout << "????????????????????????" << endl;
	cout << "????????????????????????" << endl;
		
}


void screen_main()
{
    cout << "========== 超级无敌分级别计算训练器 ==========" << endl;
    cout << "1.两位数加法运算" << endl;
    cout << "2.两位数减法运算" << endl;
	cout << "3.两位数乘法运算" << endl;
	cout << "4.两位数除法运算" << endl;
} 


void screen_1()
{
	cout << "-------------------------------- 分级别加法计算练习器 -----------------------------------------" << endl;
	cout << "1.十以内的加法计算(so easy)" << endl;
	cout << "2.一百以内的加法计算(easy)" << endl;
	cout << "3.一千以内的加法计算(a little difficult)" << endl;
	cin >> Options_2;
	if(Options_2 == 1)
	{
		plan_1();
		cout << a << "+" << b << "=?" << endl;
		cin >> answer;
		if (answer == a + b)
		{
			cout << "True" << endl;
			
		}
	else{
		cout << "False" << endl;	
		}
		
	}
	
	
	
	if(Options_2 == 2)
	{
		plan_2();
		cout << a << "+" << b << "=?" << endl;
		cin >> answer;
		if (answer == a + b)
		{
			cout << "True" << endl;
			
		}
		else
		{
		cout << "False" << endl;	
		}
	}
	
	
	
	if(Options_2 == 3)
	{
		plan_3();
		cout << a << "+" << b << "=?" << endl;
		cin >> answer;
		if (answer == a + b)
		{
			cout << "True" << endl;
			
		}
		else
		{
		cout << "False" << endl;	
		}
	
   	}
   	
   	
   	if (Options_2 < 1 || Options_2 > 3)//错误判断 
	{
		BUG();
	}
}










void screen_2()
{
	cout << "-------------------------------- 分级别减法计算练习器 -----------------------------------------" << endl;
	cout << "1.十以内的减法计算(so easy)" << endl;
	cout << "2.一百以内的减法计算(easy)" << endl;
	cout << "3.一千以内的减法计算(a little difficult)" << endl;
	cin >> Options_2;
	if(Options_2 == 1)
	{
		plan_1();
		cout << a << "-" << b << "=?" << endl;
		cin >> answer;
		if (answer == a - b)
		{
			cout << "True" << endl;
			
		}
	else{
		cout << "False" << endl;	
		}
		
	}
	
	
	
	if(Options_2 == 2)
	{
		plan_2();
		cout << a << "-" << b << "=?" << endl;
		cin >> answer;
		if (answer == a - b)
		{
			cout << "True" << endl;
			
		}
		else
		{
		cout << "False" << endl;	
		}
	}
	
	if(Options_2 == 3)
	{
		plan_3();
		cout << a << "-" << b << "=?" << endl;
		cin >> answer;
		if (answer == a - b)
		{
			cout << "True" << endl;
			
		}
		else
		{
		cout << "False" << endl;	
		}
	
   	}
   	
   	
   	if (Options_2 < 1 || Options_2 > 3)//错误判断 
	{
		BUG();
	}
}


void screen_3()
{
	cout << "-------------------------------- 分级别乘法计算练习器 -----------------------------------------" << endl;
	cout << "1.十以内的乘法计算(so easy)" << endl;
	cout << "2.一百以内的乘法计算(easy)" << endl;
	cout << "3.一千以内的乘法计算(a little difficult)" << endl;
	cin >> Options_2;
	if(Options_2 == 1)
	{
		plan_1();
		cout << a << "x" << b << "=?" << endl;
		cin >> answer;
		if (answer == a * b)
		{
			cout << "True" << endl;
			
		}
	else{
		cout << "False" << endl;	
		}
		
	}
	
	
	
	if(Options_2 == 2)
	{
		plan_2();
		cout << a << "x" << b << "=?" << endl;
		cin >> answer;
		if (answer == a * b)
		{
			cout << "True" << endl;
			
		}
		else
		{
		cout << "False" << endl;	
		}
	}
	
	if(Options_2 == 3)
	{
		plan_3();
		cout << a << "x" << b << "=?" << endl;
		cin >> answer;
		if (answer == a * b)
		{
			cout << "True" << endl;
			
		}
		else
		{
		cout << "False" << endl;	
		}
	
   	}
   	
   	
   	if (Options_2 < 1 || Options_2 > 3)//错误判断 
	{
		BUG();
	}
}


void screen_4()
{
	cout << "-------------------------------- 分级别除法计算练习器 -----------------------------------------" << endl;
	cout << "1.十以内的除法计算(so easy)" << endl;
	cout << "2.一百以内的除法计算(easy)" << endl;
	cout << "3.一千以内的除法计算(a little difficult)" << endl;
	cout << "请依次输入商和余数" << endl;
	cin >> Options_2;
	if(Options_2 == 1)
	{
		division_1();
		cout << a << "/" << b << "=?" << endl;
		cin >> answer >> answer_2;
		if (answer == a / b && answer_2 == a % b)
		{
			cout << "True" << endl;
			
		}
	else{
		cout << "False" << endl;	
		}
		
	}
	
	
	
	if(Options_2 == 2)
	{
		division_2();
		cout << a << "/" << b << "=?" << endl;
		cin >> answer >> answer_2;
		if (answer == a / b && answer_2 == a % b)
		{
			cout << "True" << endl;
			
		}
		else
		{
		cout << "False" << endl;	
		}
	}
	
	if(Options_2 == 3)
	{
		division_3();
		cout << a << "/" << b << "=?" << endl;
		cin >> answer >> answer_2;
		if (answer == a / b && answer_2 == a % b)
		{
			cout << "True" << endl;
			
		}
		else
		{
		cout << "False" << endl;	
		}
	
   	}
   	
   	
   	if (Options_2 < 1 || Options_2 > 3)//错误判断 
	{
		BUG();
	}
}


// -----------------------------------------------主函数 -------------------------------------------

int main()
{
	screen_main();//调用screen_main函数
	cin >> Options_1; //选项1
	
	
	if(Options_1 == 1)
	{
		screen_1();
	} 
	
	
	if(Options_1 == 2)
	{
		screen_2();
	}
	
	
	if(Options_1 == 3)
	{
		screen_3();
	}
	
	
	if(Options_1 == 4)
	{
		screen_4();
	}
	if (Options_1 < 1 || Options_1 > 4)
	{
		BUG();
		return 0;
	} 

}


/* -----------------------------------------------------------------日志 ------------------------------------------------------------
[2024/8/29]:完成了加法全部部分 
[2024/8/29]:完成了减法全部部分
[2024/8/29]:完成了乘法全部部分
[2024/8/29]:完成了除法全部部分
待解决BUG：除法出现除零  除法出现无限循环/不循环小数导致计算错误 
[2024/8/30]:除零BUG已修复 
[2024/8/30]:BUG修复失败，睡觉! 
------------------------------------------------------------------- 日志 --------------------------------------------------------------*/ 
