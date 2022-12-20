#include <stdio.h>
#include <string.h>

int argparse(int argc, char* argv[]) {
	for(int i = 0; i < argc; i++)
		printf("%s ",argv[i]);
	//if (sizeof(argv)/argv == 2)
	return 0;
}

int main(int argc, char *argv[]) {

	size_t n = argparse(argc, argv);
	while (n > 0)
	{
		char ch[BUFSIZ] = { 0 };
		size_t i;

		while(fgets(ch, sizeof(ch), stdin) != NULL)
		{
			for (i = 0; i <= sizeof(ch); i++)
			{
				if (ch[i] == '\n') { printf("%c", ch[i]); }
				else { printf("%c", ch[i] + 1); }
			}
			memset(ch, 0, sizeof(ch));
		}
	}

	return 0;
}

