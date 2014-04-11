/* Jonathan Dimmick & Steven Welch
   CSC 322
   Assignment 5 
 */

# include <stdio.h>
# include <stdlib.h>


int main (int argc, char *argv[])
{
	//FILE *ERR = stdout;
	FILE *fp;
	int i;
	char line[100];
	
	/* will not run with no arguments */
	if (argc == "") {
		printf("Usage: csc322a5 <infile> [<outfile>]");
		return 0;
	}
	
	//if (argc == 1) {
		
	
	for (i = 1; i < argc; i++) {
		fp = fopen(argv[i], "r");
		if (fp == NULL) {
			printf("Cannot open input file %s",argv[i]);
			return 1;
		}
		
		while (fgets(line, sizeof(line), fp) != NULL)
		{
			fputs(line, stdout);
		}
		
		fclose(fp);
		
	}
	
	return 0;
}
