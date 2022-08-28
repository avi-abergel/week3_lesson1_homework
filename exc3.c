#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
	struct avi {
		int val;
		char name[100];
		short answer;
	};

	struct avi avi1;

	scanf("%d", &avi1.val);
	scanf("%s", &avi1.name);
	avi1.name[strlen(avi1.name)] = NULL;
	if ((strlen(avi1.name) > 5) &&( avi1.val > 10))
	{
		avi1.answer = 1;
	}
	else
	{
		avi1.answer = 0;
	}

	struct avi avi2;
	scanf("%d", &avi2.val);
	scanf("%s", &avi2.name);
	avi2.name[strlen(avi2.name)] = NULL;
	if (strlen(avi2.name) > 5 && avi2.val > 10)
	{
		avi2.answer = 1;
	}
	else
	{
		avi2.answer = 0;
	}

	struct avi avi3;
	scanf("%d", &avi3.val);
	scanf("%s", &avi3.name);
	avi3.name[strlen(avi3.name)] = NULL;
	if (strlen(avi3.name) > 5 && avi3.val > 10)
	{
		avi3.answer = 1;
	}
	else
	{
		avi3.answer = 0;
	}
	FILE* f = fopen("structure.bin", "w");
	int written=fwrite(&avi1, sizeof(struct avi), 3, f);
	fclose(f);
	return 0;
}