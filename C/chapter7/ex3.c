#include<stdio.h>

int main()

{
	int x, i, num, f, flag=0, v;
	
	printf ("Enter a number");
	scanf("%d",&x);
	
			do
			{			
				
				{//for factorial
					num = x;
					f = 1;
					for(;num >= 1;num--)
					{
						f = f * num;
				
					}
					printf("%d\n", f);
					
				}
				
				
				{ //for checking prime or not
				
				num = x;
					for(i = 2; i <= num/2; ++i)
					    {
					        // condition for nonprime number
					        if(num%i == 0)
					        {
					            flag = 1;
					            break;
					        }
					    }
					
						num = x;
					    if (num == 1) 
					    {
					      printf("1 is neither a prime nor a composite number.\n");
					    }
					    else 
					    {
					        if (flag == 0)
					          printf("%d is a prime number.\n", num);
					        else
					          printf("%d is not a prime number.\n", num);
    					}
					
				}
					
				
				{//checking if its odd or even
					num = x;
					if(num % 2 == 0)
        				printf("%d is even.\n", num);
    				else
        				printf("%d is odd.\n", num);
        								
				}
				printf("Do you wish to enter another number\n");
				scanf("%d",&v);
			}while(v != 0);
			
			
		
		
		
		
		
		
		
	
	
	
/*	
	switch (i)
	{
		case 1:
		printf("Factorial of a number");
		break;
		
		case 2:
		printf("Prime or not");
		break;
		
		case 3:
		printf("even or odd");
		break;
		
		default:
		printf("exit");
	} */
	
	return 0;
}

	
