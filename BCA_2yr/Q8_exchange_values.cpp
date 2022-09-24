#include <stdio.h>

// using pointers
void swap_using_pointer(int *xp, int *yp)
{
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

// // using refrence
void swap_using_reference(int& xp, int& yp)
{
   int temp = xp;
   xp = yp;
   yp = temp;
}

// using bitwise
void swap_using_bitwise(int& a, int& b)
{
   a = a ^ b;
   b = a ^ b;
   a = a ^ b;
}

int main()
{
   int x = 94;
   int y = 23;
   printf("Enter Value of x ");
   scanf("%d", &x);
   printf("\nEnter Value of y ");
   scanf("%d", &y);

   swap_using_pointer(&x,&y);
   swap_using_reference(x,y);
   swap_using_bitwise(x,y);
   printf("\nAfter Swapping: x = %d, y = %d", x, y);
   return 0;
}
