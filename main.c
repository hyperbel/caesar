#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char* line;
	size_t length = 0;
	ssize_t lineSize = 0;

	//read stdin and get size of line
	lineSize = getline(&line, &length, stdin);

	// loop over chars in input
	for(size_t i = 0; i < lineSize - 1; i++)
	{
		// print char + 1 for caesar cipher
		printf("%c", line[i] + 1);	
	}

	free(line);
	return 0;
}
