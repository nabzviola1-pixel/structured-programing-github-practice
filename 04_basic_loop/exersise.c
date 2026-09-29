#include <stdio.h>
#include <stdlib.h>
/* this program is a payroll application that uses an infinite while (1) loop to continuously prompt
for an employee pay code (such as Manager or Hourly worker) and exits cleanly when the user inputs -1.
while a wide variety of floating-point variables are declared to handle salaries,hourly wages, and commissions, the core
conditional logic (like a switch or if-else structure) to process each worker type is ct off or not yet implemented.
*/

int main()
{
    int paycode = 0;
    float salary,hours,hourly_wage,gross_sales,piece_wage,total_pay;
    float commission_pay,wage_per_piece,pieces_produced,piece_pay;
    int pieces;

    while (1){
        printf("\nEnter employee pay code (-1 to end):\n");
        printf("1 = Manager\n2 = Hourly worker\n3 = commission worker\n4 = Piece_worker\n");
        printf("Choice: ");
        scanf("%d", &paycode);

        if (paycode == -1){
            printf("\nExiting program. Goodbye!\n");
            break;
        }

        switch (paycode){
          case 1:
               printf("Enter weekly salary: ");
               scanf("%f", &salary);
               total_pay = salary;
               printf("Manager's pay is $%.2f\n", total_pay);
               break;

          case 2:
                printf("Enter hourly wage: ");
                scanf("%f", &hourly_wage);
                printf("Enter hours worked: ");
                scanf("%f", &hours);

                if (hours <= 40.0){
                    total_pay = hours * hourly_wage;
                }else{

                    total_pay = (40.0 * hourly_wage);
                }
                printf("Hourly worker's pay is: $%.2f\n", total_pay);
                break;

          case 3:
               printf("Enter gross weekly sales: ");
               scanf("%f", &gross_sales);
               commission_pay = 250.0 + (0.057 * gross_sales);
               printf("Commission worker's pay is: $%.2f\n",commission_pay);
               break;

          case 4:
               printf("Enter wage per piece: ");
               scanf("%f", &wage_per_piece);
               printf("Enter number of pieces produced: ");
               scanf("%f", &pieces_produced);
               piece_pay = wage_per_piece * pieces_produced;
               printf("Pieceworker's pay is: $%.2f\n", piece_pay);
               break;

            default:
                  printf("Invalid pay code entered. Please try again.\n");
                  break;
            }
    }
    return 0;
}
