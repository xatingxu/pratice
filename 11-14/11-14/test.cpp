//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//
//struct s
//{
//	int a;
//	int b;
//	bool operator==(const s& rhs);
//};
//
//bool s::operator==(const s& rhs)
//{
//	return ((a == rhs.a) && (b == rhs.b));
//}
//int main()
//{
//	struct s s1, s2;
//	s1.a = 1;
//	s1.b = 3;
//	s2.a = 1;
//	s2.b = 2;
//	if (s1 == s2)
//	{
//		cout << "�����ṹ�����" << endl;
//	}
//	else
//	{
//		cout << "�����ṹ�岻���" << endl;
//	}
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu
{
	int i;
	int j;
	char k;
};
int main()
{
	//char str[20] = "hello world";
	//char* s = (char*)malloc(20);
	//strcpy(s, str);
	//printf("strlen(str)=%d\n", strlen(str));//11
	//printf("sizeof(str)=%d\n", sizeof(str));//20
	//printf("strlen(s)=%d\n", strlen(s));//11
	//printf("sizeof(s)=%d\n", sizeof(s));//4 sizeof(char*)=4;
	//free(s);



	//char* s = "0123456789";
	//printf("%d\n", strlen(s));//10  ��ʮ���ַ�
	////printf("%d\n", strlen(*s));//error
	//printf("%d\n", sizeof(s));//4  sizeof(ָ�룩=4
	//printf("%d\n", sizeof(*s));//1  *sָ�����ַ�����һ���ַ�


	//char s[] = "0123456789";
	//printf("%d\n", strlen(s));//10
	//printf("%d\n", sizeof(s));//11 s��һ�����飬����\0������
	//printf("%d\n", sizeof(*s));//1 *s�ǵ�һ���ַ�


	//char s[100] = "0123456789";
	//printf("%d\n", strlen(s));//10
	//printf("%d\n", sizeof(s));//100  s���ڴ��еĴ�С����Ϊ�ܹ�������100���ڴ档


	//int s[100] = { 0};
	//printf("%d\n", strlen(s));//error  strlen�Ĳ���ֻ����char*,�ұ�������'\0\��β��
	//printf("%d\n", sizeof(s));//400 100x4


	//char q[] = "abc";
	//char p[] = "a\n";
	//sizeof(q), sizeof(p), strlen(q), strlen(p);
	//printf("%d\n", strlen(q));//3
	//printf("%d\n", sizeof(q));//4
	//printf("%d\n", strlen(p));//2
	//printf("%d\n", sizeof(p));//3


	//char p[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
	//char q[] = { 'a', 'b', 'c', 'd ','\0','e','f','g'};
	//printf("%d\n", strlen(q));//4
	//printf("%d\n", sizeof(q));//
	//printf("%d\n", strlen(p));//���ֵ���ͱ������й�
	//printf("%d\n", sizeof(p));//8

	
	//Stu stu;
	//printf("%d\n", sizeof(Stu));  //��� 12  ���������ڴ油��
	//printf("%d\n", sizeof(stu));;  //��� 12  ���������ڴ油�� 


	char str[100] = "abc";
	char str1[sizeof(str)];
	
	system("pause");
	return 0;
}