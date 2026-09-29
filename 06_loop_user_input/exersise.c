#include <stdio.h>
#include <stdlib.h>
/* it utilizes a mathematical conditional statement with the abs() absolute value function to dynamically determine whether to print
a star or a blank space based on the current row and column coordinates.
*/
int main()
{
    for (int row = 1; row <= 9; row++){
        for (int col = 1; col <= 9; col++){
            if (col >= abs(5 -row) + 1 && col <=9 - abs(5 - row)){
                printf("*");
            }else{
                printf(" ");
        }
     }
     printf("\n");
    }
    return 0;
}
