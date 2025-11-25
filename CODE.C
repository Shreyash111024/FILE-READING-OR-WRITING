#include <stdio.h>

int main() {
    FILE *fpr;
    char stock[30];
    float price;
    int quan;
    int choice;

    printf("Choose option:\n");
    printf("1. Write(Add stock)\n");
    printf("2. Read(View all stocks)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        fpr = fopen("stocks.txt", "a");

        if (fpr == NULL) {
            printf("Error opening file!\n");
            return 0;
        }

        printf("Enter stock name: ");
        scanf("%s", stock);

        printf("Enter quantity: ");
        scanf("%d", &quan);

        printf("Enter price: ");
        scanf("%f", &price);

        float total = price * quan;
        printf("Total price: %.2f\n", total);

        fprintf(fpr, "Stock: %s\nQuantity: %d\nPrice: %.2f\nTotal Price: %.2f\n\n",stock, quan, price, total);

        fclose(fpr);

        printf("Stock data saved successfully.\n");
    }
    else if (choice == 2) {
    
        fpr = fopen("stocks.txt", "r");

        if (fpr == NULL) {
            printf("Error opening file for reading! File may not exist.\n");
            return 0;
        }

        printf("\n--- Saved Stock Details ---\n\n");

        

        fclose(fpr);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
