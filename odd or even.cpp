#include <stdio.h>

int main() 
{
    int num;
    
    printf("Enter a set of numbers (separated by spaces): ");
    while (scanf("%d", &num) != EOF) 
	{
        if (num % 2 == 0) 
		{
            printf("%d is even\n", num);
        } else 
		{
            printf("%d is odd\n", num);
        }
    }
    
    return 0;
}

