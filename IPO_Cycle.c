/* Jonathan Dimmick & Steven Welch
   CSC 322
   Assignment 5 
 */

# include <stdio.h>


int main (int argc, char *argv[])
{
	FILE *fp;
	int i;
	double k;
	
	for (i=0;i<argc;i++)
	{
		fp = fopen(argv[i], "r");
		if (fp == NULL)
		{
			printf("Cannot open input file %s",argv[i]);
			return 1;
		}
		
		while (fscanf(fp, "%lf", &k) == 1)
		{
			/*putchar(k);*/
			printf("%lf\n",k);
		}
		
		fclose(fp);
		
	}
	
	return 0;
}
