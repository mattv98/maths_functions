#include <stdio.h>
int main()
{
	int opt;
	int var1;
	int var2;
	int i, n, sum = 0, num;
	float avg;	
	
	printf("1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5:Average\n");
	printf("Enter the number correspoding to the function you want to perform:\n");
	scanf("%d",&opt);
	
	switch(opt)
	{	
		//Addition function
		case 1:
			printf("Enter 2 variables:\n");
			scanf("%d%d", &var1, &var2);

			printf("%d + %d = %d\n", var1, var2, var1 + var2);
		break;
		
		//Subtraction function
		case 2:
			printf("Enter 2 variables:\n");
			scanf("%d%d", &var1, &var2);

			printf("%d - %d = %d\n", var1, var2, var1 - var2);
		break;

		//Multiplication function
		case 3:
			printf("Enter 2 variables:\n");
			scanf("%d%d", &var1, &var2);

			printf("%d * %d = %d\n", var1, var2, var1 * var2);
		break;

		//Division function
		case 4:
			printf("Enter 2 variables:\n");
			scanf("%d%d", &var1, &var2);

			printf("%d / %d = %d\n", var1, var2, var1 / var2);
		break;
		
		//Average
		case 5:
			printf("How many numbers do you want work out the average for?\n");
			scanf("%d", &n);

			printf("Enter %d variables:\n", n);
			for(i = 0; i < n; i++)
			{
				scanf("%d", &num);
				sum = sum + num;
			}

			avg = sum / n;
			
			printf("The average of those numbers is %f\n", avg);
				
		break;

		//If wrong option is selected
		default:
			printf("Option not on the list\n");
		break;
	}	
	return 0;
}
	
