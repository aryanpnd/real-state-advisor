void logout(){
    char option;
    printf("\n\n\n\n\t\t\t\tAre you sure\nyou want to logout? (Y/N) : ");
    scanf("%c",option);
    switch (option)
    {
    case "Y":
        exit(0);
        break;
    case "y":
        exit(0);
        break;
    case "N":
        exit(0);
        break;
    case "n":
        exit(0);
        break;
    
    default:
        break;
    }

}