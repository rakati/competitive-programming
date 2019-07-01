#include <cstdio>

int main()
{
	int num_of_test, tries;
	int low, hight, med;
	char s[10];

	scanf("%d", &num_of_test);
	while (num_of_test--)
	{
		scanf("%d %d", &low, &hight);
		low++;
		scanf("%d", &tries);
		while (true)
		{
			med = (low + hight) / 2;
			printf("%d\n", med);
			fflush(stdout);
			scanf("%s", s);
			if (s[0] == 'C') break;
			if (s[4] == 'S') low = med + 1;
			else hight = med - 1;
		}
	}
	return 0;
}
