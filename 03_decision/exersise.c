#include <stdio.h>
#include <stdlib.h>

int main()
{   // This program takes two integers from the user, uses if-else conditional logic to compare them,and prints which ever value is smaller
    int num1, num2;
    // 1. input: Get two numbers from the user
    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &num1, &num2);

    //2. Decision & output: compare the values using if...else if...else
    if (num1<num2){
        printf("%d is the smaller number.\n",num1);
        }
        else if(num2<num1){
            printf("%d is the smaller number.\n",num2);
        }
        else {
            printf("The numbers are equal.\n");
        }

       return 0;
}
