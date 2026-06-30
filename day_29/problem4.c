// WAP to create inventory management system.
#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[20];
    int qty;
    float price;
};

int main() {
    struct Item inv[50];
    int n = 0, choice, i, id;

    do {
        printf("\n--- Inventory System ---\n");
        printf("1. Add Item\n");
        printf("2. Show Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Add
                printf("Enter ID, Name, Qty, Price: ");
                scanf("%d %s %d %f", &inv[n].id, inv[n].name, &inv[n].qty, &inv[n].price);
                n++;
                break;

            case 2: // Show
                printf("\nID\tName\tQty\tPrice\n");
                for(i=0; i<n; i++)
                    printf("%d\t%s\t%d\t%.2f\n", inv[i].id, inv[i].name, inv[i].qty, inv[i].price);
                break;

            case 3: // Search
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for(i=0; i<n; i++) {
                    if(inv[i].id == id) {
                        printf("Found: %d %s %d %.2f\n", inv[i].id, inv[i].name, inv[i].qty, inv[i].price);
                        break;
                    }
                }
                if(i == n) printf("Not found!\n");
                break;

            case 4: // Update
                printf("Enter ID to update: ");
                scanf("%d", &id);
                for(i=0; i<n; i++) {
                    if(inv[i].id == id) {
                        printf("Enter new qty: ");
                        scanf("%d", &inv[i].qty);
                        printf("Updated!\n");
                        break;
                    }
                }
                if(i == n) printf("Not found!\n");
                break;

            case 5:
                printf("Exiting...\n");
        }
    } while(choice != 5);

    return 0;
}  
/* --- Inventory System ---
   1. Add Item
   2. Show Items
   3. Search Item
   4. Update Quantity
   5. Exit
   Enter choice:2

   ID  Name  Qty  Price
   
   */
