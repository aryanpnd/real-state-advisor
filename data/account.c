
void account()
{
    int option;

    template1("Press 1 to Register - OR - Press 2 to Login");
    scanf("%d", &option);

    getchar();

    if (option == 1)
    {
        system("CLS");
        registration();

        system("CLS");
        template1(" Registration Successfull ");
        sleep(3);
        system("CLS");

        system("CLS");
        template1(" Redirecting to Login... ");
        sleep(3);
        system("CLS");

        login();
    }

    else if (option == 2)
    {
        system("CLS");
        login();
    }
}

void registration()
{
    char username[15];
    char password[15];
    char password1[15];

    char fileLocation[] = "data\\users\\";

    template1(" REGISTER ");

    printf("\nUsername: ");
    fflush(stdin);
    gets(username);
    // scanf("%s", username);
    printf("\nPassword: ");
    gets(password);
    // scanf("%s", username);
    // printf("\n\n Enter to sign Up....: ");
    // getch();

    strcat(fileLocation, username);

    FILE *account;
    account = fopen(fileLocation, "w");

    fprintf(account, "%s", password);

    fclose(account);
};

void login()
{
    char username[15];
    char password[15];
    char passwordToCompare[15];
    int loopVal = 1;

    char fileLocation[] = "data\\users\\";

    template1(" LOGIN ");


    FILE *loginPtr;
    while (1)
    {

        strcpy(fileLocation, "data\\users\\");
        printf("\nUsername: ");
        fflush(stdin);
        scanf("%s", username);
        printf("\nPassword: ");
        fflush(stdin);
        scanf("%s", password);

        strcat(fileLocation, username);

        loginPtr = fopen(fileLocation, "r");

        if (loginPtr == NULL)
        {
            system("cls");
            template1("Wrong Username");
            sleep(1);
            system("cls");
            template1("Try Again...");
            sleep(1);
            system("cls");
        }
        else
        {
            fgets(passwordToCompare, 15, loginPtr);
            if (strcmp(password, passwordToCompare) == 0)
            {
                system("cls");
                template1(" LOGIN SUCCESSFULL.... ");
                sleep(1);
                fclose(loginPtr);
                break;
            }
            else
            {
                system("cls");
                template1("Wrong password");
                sleep(1);
                system("cls");
                template1("Try Again...");
                sleep(1);
                system("cls");
                fclose(loginPtr);
            }
        }
    }

    fclose(loginPtr);
};