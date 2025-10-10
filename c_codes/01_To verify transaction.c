#include <stdio.h>

int main() {
    int daily_total, amount, daily_spend, transaction_country, number_of_transaction;
    int daily_limit = 5000;

    printf("Enter daily total: ");
    scanf("%d",&daily_total);

    printf("Enter transaction amount: ");
    scanf("%d",&amount);
    
    daily_spend= daily_total + amount;
    if(daily_spend > daily_limit) {
        printf("Transaction is suspicious\n");
    } 
    else {
        printf("Enter transaction country (1=Pakistan, 2=UAE, 3=Other): ");
        scanf("%d",&transaction_country);

        if(transaction_country == 1 || transaction_country == 2) {
            printf("Enter number of transactions in an hour: ");
            scanf("%d", &number_of_transaction);

            if(number_of_transaction > 3) {
                printf("Transaction is suspicious\n");
            } else {
                printf("Transaction is safe\n");
            }
        } 
        else {
            printf("Transaction is suspicious\n");
        }
    }

    return 0;
}
