#include<stdio.h>
#include<stdlib.h>

void StringReverse(char s[],int i);

int main(void)
{
	char s[60];
	int i;

	printf("Please enter the strings\n");
	scanf_s("%s",s,60);
	printf("the inverted strings order is ");
	i = strlen(s);
	StringReverse(s,i-1);
	printf("\n");

	system("pause");
	return 0;
}

void StringReverse(char s[],int i)
{
	if (i==0)
	{
		printf("%c", s[i]);
	}
	else
	{
		printf("%c", s[i]);
		StringReverse(s,i-1);
	}
}