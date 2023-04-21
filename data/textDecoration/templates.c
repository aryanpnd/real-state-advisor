void template1(char a[])
{
    printf("\n\n");
    for (int i = 0; i < 100; i++)
        printf("=");
    int x = 0;

    printf(" \n\n\n \t\t\t\t ");
    while (a[x])
    {
        putchar(a[x]);
        x++;
    }
    printf(" \n\n\n ");

    for (int i = 0; i < 100; i++)
        printf("=");
    printf("\n\n\n");
}
void template2(char a[])
{
    printf("\n\n");
    for (int i = 0; i < 50; i++)
        printf("- ");
    int x = 0;

    printf(" \n\n\n\n");
    printf("\t\t\t\t");
    while (a[x])
    {
        putchar(a[x]);
        x++;
    }
    printf("\n\n\n\n");

    for (int i = 0; i < 50; i++)
        printf("- ");
    printf("\n\n\n");
}

// void template3(int a,...)
// {

//     va_list charList;
//     va_start(charList, a);

//     printf("\n\n");
//     for (int i = 0; i < 50; i++)
//         printf("- ");
//     int x = 0;

//     printf(" \n\n\n\n\n\n ");
//     printf("%40c");
    
//     for (int i = 0; i < a; i++)
//     {
//         va_arg(charList, char);
//     }
    

//     printf("\n\n\n\n\n\n");

//     for (int i = 0; i < 50; i++)
//         printf("- ");
//     printf("\n\n\n");
// }
