#include <stdio.h>

#define MAX_SIZE 100 

int main() 
{
    int arr[MAX_SIZE], size, i, pos, elem;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }

    
    printf("Original array: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    printf("Enter the position and element to be inserted: ");
    scanf("%d %d", &pos, &elem);

    if (pos < 0 || pos > size) 
	{
        printf("Invalid position!\n");
        return 0;
    }

    for (i = size; i > pos; i--) 
	{
        arr[i] = arr[i-1];
    }
    arr[pos] = elem;
    size++;

    
    printf("Array after insertion: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= size) 
	{
        printf("Invalid position!\n");
        return 0;
    }

    for (i = pos; i < size-1; i++) 
	{
        arr[i] = arr[i+1];
    }
    size--;

    
    printf("Array after deletion: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

