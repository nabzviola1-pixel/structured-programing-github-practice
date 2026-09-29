#include <stdio.h>
#include <stdlib.h>
/* it prompts the user for specific number of values, validates that the input is positive, and then uses a for loop
to collect each individual integer. However, the logic is currently incomplete because it reads each value
inside the loop but fails to add it to the sum variable. Additionally, the code is cut off before it can calculate the final
average or print any results to the screen.
*/
int main()
{   int num_Values;
    int value;
    int sum = 0;
    float average;

    printf("Enter the number of values to sum: ");
    if (scanf("%d", &num_Values)!=1 || num_Values <=0) {
        printf("Invalid number of values.\n");
        return 1;
    }
    for (int i=1; i<=num_Values; i++) {
        printf("Enter value%d: ", i);
        scanf("%d", &value);
        sum += value;
    }

       average = (float)sum/ num_Values;

      printf("Sum: %d\n", sum);
      printf("Average: %.2f\n",average);

    return 0;
}
