#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float money, price;
    printf("Cold Drink Vending Machine\n");
    printf("1. Coke - UGX.1500\n2. Pepsi - UGX.1000\n3. Sprite - UGX.1500\n4. Fanta - UGX.1500\n5. Mirinda - UGX.1000\n6. Exit\n");
    printf("Enter your choice");
    scanf("%d", &choice);

    if (choice == 1){
       price = 1500;
       printf("You selected Coke. Insert UGX%.2f: ", price);

    }
    else if (choice == 2){
       price = 1000;
       printf("You selected Pepsi. Insert UGX%.2f: ", price);
    }
    else if (choice == 3){
       price = 1500;
       printf("You selected Sprite. Insert UGX%.2f: ", price);
    }
    else if (choice == 4){
       price = 1500;
       printf("You selected Fanta. Insert UGX%.2f: ", price);
    }
    else if (choice == 5){
       price = 1000;
       printf("You selected Mirinda. Insert UGX%.2f: ", price);
    }
    else if (choice == 6){
       printf("Thank you! Have a nice day.\n");
       return 0;
    }
    else {
        printf("Invalid selection! Please try again.\n");
        return 0;
    }

    scanf("%f", &money);

    if (money >= price){
        printf("Dispensing your drink... Enjoy!\n");
        if (money > price) {
            printf("Returning change: UGX%.2f\n", money - price);
        }
    }
    else {
        printf("Insufficient funds. Please insert at least UGX%.2f.\n", price - money);
    }
    return 0;
}


