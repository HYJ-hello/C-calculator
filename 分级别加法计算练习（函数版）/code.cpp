// --------------------------------------------------------- ͷ�ļ� ----------------------------------------------- 

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
// -------------------------------------�����ռ� --------------------------------------

using namespace std;
 
// -------------------------------------------------------------- ���� ------------------------------------------------------------

int Options_1; // ��һ���û�ѡ��(ѡ����������) 
int Options_2; //�ڶ����û�ѡ�� (ѡ���Ѷ�) 
long long answer;//�û��Ĵ� 
long long answer_2;
long long a , b;//������


// -------------------------------------------��������� --------------------------------------------


void plan_1()
{
	srand(static_cast<unsigned int>(time(NULL))); // �����������
	a = rand() % 10;
	b = rand() % 10;
} 
 
 
 void plan_2()
{
	srand(static_cast<unsigned int>(time(NULL))); // �����������
 	a = rand() % 100;
 	b = rand() % 100;
}
 
 
 void plan_3()
{
	srand(static_cast<unsigned int>(time(NULL))); // �����������
 	a = rand() % 1000;
 	b = rand() % 1000;
}







void division_1()
{
	srand(static_cast<unsigned int>(time(NULL))); // �����������
	a = rand() % 10;
	b = rand() % 9 + 1;//����1��9������� 
} 
 
 
 void division_2()
{
	srand(static_cast<unsigned int>(time(NULL))); // �����������
 	a = rand() % 100;
 	b = rand() % 99 + 1;//����1��99������� 
}
 
 
 void division_3()
{
	srand(static_cast<unsigned int>(time(NULL))); // �����������
 	a = rand() % 1000;
 	b = rand() % 999 + 1;//����1��999������� 
}


// -------------------------------------------------------------�Զ��庯�� ----------------------------------------------------------------

void BUG()
{
	cout << "���ſ�BUG�أ�����"<< endl;
	cout << "���ſ�BUG�أ�����"<< endl;
	cout << "���ſ�BUG�أ�����"<< endl;
	cout << "????????????????????????" << endl;
	cout << "????????????????????????" << endl;
	cout << "????????????????????????" << endl;
	cout << "????????????????????????" << endl;
		
}


void screen_main()
{
    cout << "========== �����޵зּ������ѵ���� ==========" << endl;
    cout << "1.��λ���ӷ�����" << endl;
    cout << "2.��λ����������" << endl;
	cout << "3.��λ���˷�����" << endl;
	cout << "4.��λ����������" << endl;
} 


void screen_1()
{
	cout << "-------------------------------- �ּ���ӷ�������ϰ�� -----------------------------------------" << endl;
	cout << "1.ʮ���ڵļӷ�����(so easy)" << endl;
	cout << "2.һ�����ڵļӷ�����(easy)" << endl;
	cout << "3.һǧ���ڵļӷ�����(a little difficult)" << endl;
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
   	
   	
   	if (Options_2 < 1 || Options_2 > 3)//�����ж� 
	{
		BUG();
	}
}










void screen_2()
{
	cout << "-------------------------------- �ּ������������ϰ�� -----------------------------------------" << endl;
	cout << "1.ʮ���ڵļ�������(so easy)" << endl;
	cout << "2.һ�����ڵļ�������(easy)" << endl;
	cout << "3.һǧ���ڵļ�������(a little difficult)" << endl;
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
   	
   	
   	if (Options_2 < 1 || Options_2 > 3)//�����ж� 
	{
		BUG();
	}
}


void screen_3()
{
	cout << "-------------------------------- �ּ���˷�������ϰ�� -----------------------------------------" << endl;
	cout << "1.ʮ���ڵĳ˷�����(so easy)" << endl;
	cout << "2.һ�����ڵĳ˷�����(easy)" << endl;
	cout << "3.һǧ���ڵĳ˷�����(a little difficult)" << endl;
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
   	
   	
   	if (Options_2 < 1 || Options_2 > 3)//�����ж� 
	{
		BUG();
	}
}


void screen_4()
{
	cout << "-------------------------------- �ּ������������ϰ�� -----------------------------------------" << endl;
	cout << "1.ʮ���ڵĳ�������(so easy)" << endl;
	cout << "2.һ�����ڵĳ�������(easy)" << endl;
	cout << "3.һǧ���ڵĳ�������(a little difficult)" << endl;
	cout << "�����������̺�����" << endl;
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
   	
   	
   	if (Options_2 < 1 || Options_2 > 3)//�����ж� 
	{
		BUG();
	}
}


// -----------------------------------------------������ -------------------------------------------

int main()
{
	screen_main();//����screen_main����
	cin >> Options_1; //ѡ��1
	
	
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


/* -----------------------------------------------------------------��־ ------------------------------------------------------------
[2024/8/29]:����˼ӷ�ȫ������ 
[2024/8/29]:����˼���ȫ������
[2024/8/29]:����˳˷�ȫ������
[2024/8/29]:����˳���ȫ������
�����BUG���������ֳ���  ������������ѭ��/��ѭ��С�����¼������ 
[2024/8/30]:����BUG���޸� 
[2024/8/30]:BUG�޸�ʧ�ܣ�˯��! 
------------------------------------------------------------------- ��־ --------------------------------------------------------------*/ 
