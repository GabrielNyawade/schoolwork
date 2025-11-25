/* QUESTION:
 *
 * A computer program is required to evaluate the credit worthy of a client. The
 * program reads the credit limit, price and quantity of the item to be
 * purchased by the client, If the value of the goods is more than the credit
 * limit, the program displays "Sorry you cannot purchase goods worth such a
 * value on credit" and allows the customer to re-enter the quantity,
 * otherwiise, displays "Thank You for purchasing from us" and the value of the
 * purchase. This should be repeated for n customers
 *
 * Required:
 *  i) Draw a flowchart for your solution
 * ii) Write the C program that implemnts the algorithm in (i) above
 *
 */

#include "stdio.h"
#include "stdlib.h"

int main(void)
{

    printf("---------------------------------------------\n\n");
    printf("Welcome to Are You Worthy\n");
    printf("\n---------------------------------------------\n\n");
    double credit_limit, price, quantity;
    int no_of_customers;
    char re_enter;
    printf("Enter the number of customers to serve  today: ");
    scanf("%d", &no_of_customers);
    for (int i = 0; i < no_of_customers; i++)
    {
        printf("\n---------------------------------\n\n");
        printf("Hello our valued customer\n");
        printf("\n---------------------------------\n");

        printf("Enter your credit limit: ");
        scanf("%lf", &credit_limit);

        printf("Enter the price of the item: ");
        scanf("%lf", &price);

        while (1)
        {
            printf("Enter the quantity of items to be purchased: ");
            scanf("%lf", &quantity);
            if ((price * quantity) > credit_limit)
            {
                printf(
                    "Sorry you cannot purchase goods worth such a value on credit\n");

                printf("Would you like to change the quantity of items (Y/N): ");
                scanf("%s", &re_enter);

                if (re_enter != 'Y')
                {
                    printf("Have a good day.\n");
                    break;
                }

            }
            else
            {
                printf("\n------------------------------------------\n\n");
                printf("You successfully purchased goods worth %.2lf on credit\n",
                       price * quantity);
                printf("Thank You for purchasing from us\n");
                break;
            }
        }
    }
    return 0;
}
