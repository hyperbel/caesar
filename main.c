#include <stdio.h>
#include <string.h>

int argparse(int argc, char* argv[]) {
	if (argv[1] == "--help") {
		printf("Usage: 'caesar -nN', where N is the shift of letters you want to add");
		return 0;
	} else {
		char str[strlen(argv[1])];
		char *ptr;
		long val;
		strcpy(str, argv[1]);
		val = strtol(str, &ptr, strlen(argv[1]));
		return val;
	}
}

int main(int argc, char *argv[]) {

	size_t n = argparse(argc, argv);
	while (1)
	{
		char ch[BUFSIZ] = { 0 };
		size_t i;

		while(fgets(ch, sizeof(ch), stdin) != NULL)
		{
			for (i = 0; i <= sizeof(ch); i++)
			{
				if (ch[i] == '\n') { printf("%c", ch[i]); }
				else { printf("%c", ch[i] + n); }
			}
			memset(ch, 0, sizeof(ch));
		}
	}

	return 0;
}
