#include <stdio.h>
#include <string.h>

int main(void) {
	while (1)
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
