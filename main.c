#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char* line;
	size_t length = 0;
	ssize_t lineSize = 0;

	lineSize = getline(&line, &length, stdin);



	printf("%s", line);	

	free(line);
	return 0;
}
