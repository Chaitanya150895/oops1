#include<stdio.h>

int main()

{
	int l, x, i, num, f, flag=0, v;
	
	printf ("Enter a number");
	scanf("%d",&l);
	
			
	switch (l)
	{
		case 1:
			{//for factorial
					num = x;
					f = 1;
					for(;num >= 1;num--)
					{
						f = f * num;
				
					}
					printf("%d\n", f);
					
				}
			
		printf("Factorial of a number");
		break;
		
		case 2:
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
			
				printf("Prime or not");
				break;
		
		case 3:
			{//checking if its odd or even
					num = x;
					if(num % 2 == 0)
        				printf("%d is even.\n", num);
    				else
        				printf("%d is odd.\n", num);
        								
			}
				
				
		printf("even or odd");
		break;
		
		default:
		printf("exit");
	} 
	
	return 0;
}

	
