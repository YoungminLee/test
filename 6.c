/********************************************
*	6. ���������� ��� ������ �� ���ϱ�		*
*	��ǻ�� ���а�							*
*	20093323 �̿���							*
********************************************/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	FILE *in_file;
	int a, b;
	int no_cases, start, end, sum=0;

	in_file = fopen("input.txt", "r");
	if(in_file == NULL) exit(1);

	fscanf(in_file, "%d", &no_cases);

	for(a=0; a<no_cases; a++)
	{
		fscanf(in_file, "%d %d", &start, &end);
		sum=0;
		for(b=start; b<=end; b++)
		{
			sum+=b;
		
			
		}	
		printf("%d\n", sum);
	}
}