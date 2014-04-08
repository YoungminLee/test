/********************************************
*	6. 정수사이의 모든 정수의 합 구하기		*
*	컴퓨터 공학과							*
*	20093323 이영민							*
********************************************/

#include <stdio.h>
#include <stdlib.h>

int sum_numbers(int s, int t);

void main(void)
{
	FILE *in_file;
	int i, j;
	int no_cases, start, end, sum=0;

	in_file = fopen("input.txt", "r");
	if(in_file == NULL) exit(1);

	fscanf(in_file, "%d", &no_cases);

	for(i=0; i<no_cases; i++)
	{
		fscanf(in_file, "%d %d", &start, &end);
		sum=0;
		for(j=start; j<=end; j++)
		{
			sum+=j;
		
			
		}	
		printf("%d\n", sum);
	}
}