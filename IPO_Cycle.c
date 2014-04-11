/* Jonathan Dimmick & Steven Welch
   CSC 322
   Assignment 5 
 */

# include <stdio.h>


int main (int argc, char *argv[])
{
	FILE *fp;
	int i;
	char line[100];
	
	for (i=0;i<argc;i++)
	{
		fp = fopen(argv[i], "r");
		if (fp == NULL)
		{
			printf("Cannot open input file %s",argv[i]);
			return 1;
		}
		
		while (fgets(line, sizeof(line), fp) != NULL)
		{
			//fputs(line, stdout);
			printf("%s", line);
		}
		
		fclose(fp);
		
	}
	
	return 0;
}
