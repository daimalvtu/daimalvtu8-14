#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
////{
////	char arr[] = "helllo world sssss ddddd";
////	memset(arr,,2);
////	printf("%s\n",arr);
////	return 0;
////}
////�ҳ�100��200֮�������
////int sushu(int x)
////{
////	int a = 0;
////	for (a = 2; a < x; a++)
////	{
////		if (x%a==0)
////		{
////			return 0;//return 0��ִ������Ҫǿ�ܶ࣬һִ�о��������������ˣ���breakһִ��ֻ���������ѭ�����ѡ�
////			//break;
////		}
////	}
////	return 1;
////}
//////int main()
//////{
//////	int a = 12;
//////	int b = 20;
//////	int* pa = &a;
//////	printf("%d\n",*pa);
//////	return 0;
//////}
////int main()
////{
////	int i = 0;
////	int j = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		j = sushu(i);
////		if (1 == j)
////			printf("%d\n", i);
////		
////	}
////	return 0;
////}
////дһ���������ж�һ���ǲ�������
////char runnian(int x)
////{
////	if (x % 4 == 0)
////		return 1;
////	else
////		return 0;
////}
////int main()
////{
////	int a = 0;
////	int b = 0;
////	printf("��������ݣ�");
////	//int* pa = &a;
////	scanf("%d",&a);
////	b = runnian(a);
////	if (1 == b)
////		printf("��������");
////	else
////		printf("�ⲻ������");
////	return 0;
////}
////дһ��������ʵ��һ����������������۰����
int zheban(int x, int arr[],int n)
{
	int left = 0;
	int right = n;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > x)
		{
			right= mid-1;
		}
		else if (arr[mid] < x)
		{
			 left= mid+1;
		}
		else
		{
			return mid;
			break;
		}
		
	}
	if (left > right)
		return 0;
}
int numadd(int x)
{
	x++;
	return x;
}

int main()
{
	int a = 0;
	int arr1[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
	//printf("%c\n", arr1);
	printf("��������һ������");
	scanf("%d",&a);
	int se = sizeof(arr1) / sizeof(arr1[0])-1;
	int c = zheban(a,arr1,se);
	printf("%d\n",c);
	return 0;
}
