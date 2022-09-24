#include<stdio.h>
#include<stdlib.h>

// function to display the value of array
void printArray(int* a, int n)
{
    printf("sorted array :-\n");
    for(int i=0; i<n; i++)
    {

        printf("%d,",a[i]);
    }
    printf("\n");
}

// function to sort the array
void bubbleSort(int *a, int n)
{
    int temp;
    //int isSorted = 0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                                            // temp = a[j];
                                            // a[j] = a[j+1];
                                            // a[j+1] = temp;
                                            // Avoid above swaping technique 
                                            // Always try to work with bits
                a[j] = a[j] ^ a[j+1];
                a[j+1] = a[j+1] ^ a[j];
                a[j] = a[j] ^ a[j+1];
                //isSorted = 0;
            }
        }
    }
}
// main function
int main()
{

    int i = 0;                           
    int *ptr;

    //  (type cast)    (space calculation)
    ptr = (int *) malloc(20 * sizeof(int));
    int count = 0;
    printf("Enter numbers :-)\n");

    while (scanf("%d", &ptr[i]))
    {
        printf("  -> ");
                if (ptr[i] == '=')
                {
                    printf("\n");
                    break;
                }
                i++;
                count++;
    }

    printf("\n");
    bubbleSort(ptr,count);
    printArray(ptr,count);
    free(ptr);


    return 0;
}

