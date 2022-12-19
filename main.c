#include <stdio.h>
#include <stdlib.h>

int main(void) {

	while (1)
	{
		char buff[BUFSIZ];
		fgets(buff, sizeof buff, stdin);
		if (buff[strlen(buff)-1] == '\n') {
			for (size_t i = 0; i < strlen(buff)-1; i++) {
				printf("%c", buff[i] + 1);
			}
		} else {
			printf("\n");
		}
	}

	return 0;
}
