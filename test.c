#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>
#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//	if(dest !=NULL &&src != NULL)
//	while (*dest++ = *src++)
//	{
//		;		
//	}
//}
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);
//		while (*dest++ = *src++)
//		{
//			;
//		}
//}
//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	*p = 20; //����
//	printf("$d\n", num);
//	return 0;
//}
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//char* ����Ŀ�ĵص�ַ
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//����
	assert(src != NULL);
	//��srcָ����ַ���������destָ��Ŀռ� ��'\0'�ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[]= "###############";
	char arr2[]= "bit";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;//arr1 ��ַ
}
