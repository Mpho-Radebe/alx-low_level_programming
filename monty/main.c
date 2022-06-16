#include "main.h"

int main(int argc, char **argv)
{
	FILE *monty_file;
	stack_t *stack = NULL;
	const int MAX_INSTR_LENGTH = 50;
	char instr[MAX_INSTR_LENGTH + 1];
	char line[MAX_INSTR_LENGTH + 1];
	char* temp_str;
	int endOfFile;
	
 	int line_no = 1;

	if (argc == 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	monty_file = fopen(argv[1], "r");

	if (monty_file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	int i = 0;
	while (1)
	{
		line[0] = '\0';
		read_next_line(monty_file, line, MAX_INSTR_LENGTH, &endOfFile);
		
		if (line[0] != '\0')
			execute_monty_instr(&stack, line, line_no);
		
		if (endOfFile)
			break;
		line_no++;
	}

	fclose(monty_file);
	
	return (EXIT_SUCCESS); 
}
