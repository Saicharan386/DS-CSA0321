#include <stdio.h>

#define MAX_SIZE 100 

int main() 
{
    int arr[MAX_SIZE], size, i, search, found = 0, low, high, mid;


    printf("Enter the size of the array: ");
    scanf("%d", &size);


    printf("Enter the sorted elements of the array: ");
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &search);


    low = 0;
    high = size - 1;
    while (low <= high) 
	{
        mid = (low + high) / 2;
        if (arr[mid] == search) 
		{
            printf("%d found at position %d.\n", search, mid+1);
            found = 1;
            break;
        }
        else if (arr[mid] < search) 
		{
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) 
	{
        printf("%d not found in the array.\n", search);
    }

    return 0;
}


