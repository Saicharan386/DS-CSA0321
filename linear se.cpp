#include <stdio.h>

#define MAX_SIZE 100 

int main() 
{
    int arr[MAX_SIZE], size, i, search, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &search);

    for (i = 0; i < size; i++) 
	{
        if (arr[i] == search) 
		{
            printf("%d found at position %d.\n", search, i+1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("%d not found in the array.\n", search);
    }

    return 0;
}

