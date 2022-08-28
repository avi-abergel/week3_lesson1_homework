#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main1()
{
    int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	FILE* f = fopen("arr.bin", "w");
	if (f == NULL)
	{
		printf("ERROR!");
	}
	else
	{
		int written=fwrite(arr, sizeof(int), 10, f);
		fclose(f);
	}
    return 0;
}
