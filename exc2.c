#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main2()
{
	int arr[4];
	int arr2[8];
	int sum = 0;
	int sum2 = 0;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}

	for (int j = 0; j < 8; j++)
	{
		scanf("%d", &arr2[j]);
		sum2 = sum2 + arr2[j];
	}
	if (sum > sum2)
	{
		FILE* f = fopen("biggersum.bin", "w");
		if (f == NULL)
		{
			printf("ERROR!");	
		}
		else
		{
			int written=fwrite(arr, sizeof(int), 4, f);
			fclose(f);
		}
	}
	else
	{
		FILE* f = fopen("biggersum.bin", "w");
		if (f == NULL)
		{
			printf("ERROR!");
		}
		else
		{
			int written=fwrite(arr2, sizeof(int), 8, f);
			fclose(f);
		}
	}

	return 0;
}