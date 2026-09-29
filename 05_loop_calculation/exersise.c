#include <stdio.h>
#include <stdlib.h>
/* the problem is an infinite loop. The while loop lacks a reduction statement like number /= 10.
Because of this omission, the loop runs forever. Additionally, the program never prints the calculated
 count output to the user. it also misses a standard return 0; statement at the end of main.
 lastly, the input prompt contains a small typo spelling "integer" as "inter".

*/

int main()
{
        int number;
        int count = 0;
        int remainder;

        printf("Enter an inter (5 digits or fewer): ");
        scanf("%d", &number);

        while (number > 0){
            remainder = number % 10;

            if (remainder == 9){
                count++;
            }

            number = number / 10;
        }
        printf("The number of 9s in the integer is: %d\n", count);

    return 0;
}
