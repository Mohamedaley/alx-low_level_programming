#include <stdio.h>

void reverse(int* a, int n)
{
	int i, j = n - 1, tmp;

	for(i = 0; i < n / 2; i++)
	{
	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
	j--;
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7};

	for( int i = 0; i < 7; i++)
	{
	printf("%d",arr[i]);
	}
	putchar('\n');
	reverse(arr, 7);
	for(int i = 0; i < 7; i++)
	{
	printf("%d",arr[i]);
	}
}
