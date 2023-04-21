#include "homepageStructure.c"
void homepage()
{

    int taskToPerform;
    while (1)
    {
        system("cls");
        template2("REAL ESTATE ADVISOR");

        printf("1. Sell new property\n");
        printf("2. Search property\n");
        printf("3. find total property\n");
        printf("4. delete existing property\n");
        printf("5. logout\n\n\t\t\tYour input :\t");
        scanf("%d", &taskToPerform);

        switch (taskToPerform)
        {
        case 1:
            addProperty();
            break;
        case 2:
            searchProperty();
            break;
        case 3:
            totalCount();
            break;
        case 4:
            deleteProperty();
            break;
        case 5:
            exit(0);
            break;

        default:
            exit(0);
        }
    }
}