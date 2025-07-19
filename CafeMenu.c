#include <stdio.h>

int main()
{
    char choice;
    do
    {
        printf("\nCafe Menu:\n");
        printf("1. Coffee\n");
        printf("2. Tea\n");
        printf("3. Sandwich\n");
        printf("4. Cake\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");

        // Space before %c to ignore newline
        scanf(" %c", &choice);

        switch (choice)
        {
        case '1':
            printf("You selected Coffee.\n");
            break;
        case '2':
            printf("You selected Tea.\n");
            break;
        case '3':
            printf("You selected Sandwich.\n");
            break;
        case '4':
            printf("You selected Cake.\n");
            break;
        case '5':
            printf("Thank you for visiting!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '5');
    
    return 0;
}