#include <stdio.h>
#include <stdlib.h>
 /* the function prompts the user to calculate mortgage details based on user input and reads it using %f
  format specifier and store them using the address-of operator(&).
  */
int main()
{
        float mortgage_Amount,mortgage_Term_Years,interest_Rate;
        float total_interest,total_payable,total_Months,monthly_payment;

        printf("Enter Mortgage Amount (in dollars): ");
        scanf("%f",&mortgage_Amount);

        printf("Enter Mortgage term (in years): ");
        scanf("%f", &mortgage_Term_Years);

        printf("Enter interest rate (as a decimal): ");
        scanf("%f",&interest_Rate);

        total_interest = mortgage_Amount * interest_Rate * mortgage_Term_Years;
        total_payable = mortgage_Amount + total_interest;
        total_Months = mortgage_Term_Years * 12;
        monthly_payment = total_payable/total_Months;

        printf("The Monthly payable amount is: $%.2f\n\n", monthly_payment);

    return 0;
}
