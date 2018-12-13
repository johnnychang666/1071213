#include<stdio.h>
#include<stdlib.h>
#define SIZE 15
#define SWAP(x,y){int t;t=x;x=y;y=t;}

void Binary(const int a[],int j,int right,int left);
void Print(int b,int j,int mid);

int main(void)
{
	int b[SIZE] = { 15,32,45,4,21,8,74,36,1,85,100,45,12,74,99 };
	int d,i,j;
	int left, right,a,c;

	left = 0;
	right = SIZE - 1;
	
	for (i = 0; i <SIZE-1; i++)
		for (j = 0; j < SIZE-1-i; j++) 
			if (b[j]>b[j + 1])
			{
				SWAP(b[j], b[j + 1]);
			}


	printf("Please enter a number which you want to find (enter the letter to end):");
	while (scanf_s("%d", &d) == 1)
	{
		 Binary(b, d, right, left);		
	}
	system("pause");
	return 0;
}

void Binary(const int a[],int j,int right,int left)
{
	int mid,b=0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (j == a[mid]) b = 1;
		if (j < a[mid]) right = mid - 1;
		else  left = mid + 1;
	}
		Print(b, j, mid);
}

void Print(int b,int j,int mid)
{
	if (b == 1) printf("%d is on array[%d]\n", j, mid);
	else printf("It's not found.\n");
	printf("Please enter a number which you want to find (enter the letter to end):");
}