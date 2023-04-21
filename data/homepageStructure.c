int i = 0;
int countLines = 0;

struct propertyDetails
{
   char propertyName[20];
   char location[20];
   int price;
   int size;
} st[500];

void addProperty()
{
   system("cls");
   template1("Fill the property Details");

   printf("Property name : ");
   scanf("%s", st[i].propertyName);
   printf("\n");

   printf("Property location : ");
   scanf("%s", st[i].location);
   printf("\n");

   printf("Property size (in BHK) : ");
   scanf("%d", &st[i].size);
   printf("\n");

   printf("Property price (in lacs) : ");
   scanf("%d", &st[i].price);
   printf("\n");

   FILE *fp = fopen("data\\properties\\propertiesData.txt", "a");
   fprintf(fp, "%s %s %d %d ", st[i].propertyName, st[i].location, st[i].size, st[i].price);
   fprintf(fp, "\n");
   fclose(fp);

   i = i + 1;
   printf("\n\t\t\t\tpress any key to continue...");
   getch();
   fflush(stdin);
}

void searchProperty()
{

   int taskToPerform;
   while (1)
   {
      system("cls");
      template1("Search properties");
      printf("1. Find the property using property name\n");
      printf("2. Find the property using property location\n");
      printf("3. Find the property using property size\n");
      printf("4. Find the property using property price\n");
      printf("5. back\n");
      printf("6. logout\n");
      scanf("%d", &taskToPerform);

      switch (taskToPerform)
      {
      case 1:
         findByName();
         break;
      case 2:
         findByLocation();
         break;
      case 3:
         findBySize();
         break;
      case 4:
         findByprice();
         break;
      case 5:
         homepage(0);
         break;
      case 6:
         exit(0);
         break;
      default:
         exit(0);
      }
   }
}
void findByName()
{
   system("cls");
   template2("property search");
   char temp[20];
   printf("Enter the property name : ");
   scanf("%s", temp);

   FILE *fp = fopen("data\\properties\\propertiesData.txt", "r");
   char propertyName[20], location[20];
   int price;
   int size;
   int courseId[10];
   int index = 1;

   while (fscanf(fp, "%s %s %d %d", propertyName, location, &size, &price) != EOF)
   {
      if (strcmp(temp, propertyName) == 0)
      {
         for (int i = 0; i < 100; i++)
            printf("-");

         printf("\n\t\t\t\t\t\t%dst Property details are\n\n", index);
         printf("\t\t\t\t\t\tProperty name is %s\n", propertyName);
         printf("\t\t\t\t\t\tProperty location name is %s\n", location);
         printf("\t\t\t\t\t\tProperty size is %dbhk\n", size);
         printf("\t\t\t\t\t\tProperty price (in lacs) is %d\n", price);
         index++;
      }
   }
   printf("\n\t\t\t\tpress any key to continue...");
   getch();
   fclose(fp);
   fflush(stdin);
}

void findByprice()
{
   system("cls");
   template2("property search");
   int temp;
   printf("Enter the property price : ");
   scanf("%d", &temp);

   FILE *fp = fopen("data\\properties\\propertiesData.txt", "r");
   char propertyName[20], location[20];
   int price;
   int size;
   int courseId[10];
   int index = 1;
   while (fscanf(fp, "%s %s %d %d", propertyName, location, &size, &price) != EOF)
   {
      if (temp == price)
      {
         for (int i = 0; i < 100; i++)
            printf("-");

         printf("\n\t\t\t\t\t\t%dst Property details are\n\n", index);
         printf("\t\t\t\t\t\tProperty name is %s\n", propertyName);
         printf("\t\t\t\t\t\tProperty location name is %s\n", location);
         printf("\t\t\t\t\t\tProperty size is %dbhk\n", size);
         printf("\t\t\t\t\t\tProperty price (in lacs) is %d\n", price);
         index++;
      }
   }
   printf("\n\t\t\t\tpress any key to continue...");
   getch();
   fclose(fp);
   fflush(stdin);
}

void findByLocation()
{
   system("cls");
   template2("property search");
   char temp[20];
   printf("Enter the property location : ");
   scanf("%s", temp);

   FILE *fp = fopen("data\\properties\\propertiesData.txt", "r");
   char propertyName[20], location[20];
   int price;
   int size;
   int courseId[10];
   int index = 1;

   while (fscanf(fp, "%s %s %d %d", propertyName, location, &size, &price) != EOF)
   {
      if (strcmp(temp, location) == 0)
      {
         for (int i = 0; i < 100; i++)
            printf("-");

         printf("\n\t\t\t\t\t\t%dst Property details are\n\n", index);
         printf("\t\t\t\t\t\tProperty name is %s\n", propertyName);
         printf("\t\t\t\t\t\tProperty location name is %s\n", location);
         printf("\t\t\t\t\t\tProperty size is %dbhk\n", size);
         printf("\t\t\t\t\t\tProperty price (in lacs) is %d\n", price);
         index++;
      }
   }
   printf("\n\t\t\t\tpress any key to continue...");
   getch();
   fclose(fp);
   fflush(stdin);
}

void findBySize()
{
   system("cls");
   int temp;
   template2("property search");
   printf("Enter the property size : ");
   scanf("%d", &temp);

   FILE *fp = fopen("data\\properties\\propertiesData.txt", "r");
   char propertyName[20], location[20];
   int price;
   int size;
   int courseId[10];
   int index = 1;

   while (fscanf(fp, "%s %s %d %d", propertyName, location, &size, &price) != EOF)
   {
      if (temp == size)
      {

         for (int i = 0; i < 100; i++)
            printf("-");

         printf("\n\t\t\t\t\t\t%dst Property details are\n\n", index);
         printf("\t\t\t\t\t\tProperty name is %s\n", propertyName);
         printf("\t\t\t\t\t\tProperty location name is %s\n", location);
         printf("\t\t\t\t\t\tProperty size is %dbhk\n", size);
         printf("\t\t\t\t\t\tProperty price (in lacs) is %d\n", price);
         index++;
      }
   }
   printf("\n\t\t\t\tpress any key to continue...");
   getch();
   fclose(fp);
   fflush(stdin);
}

void totalCount()
{
   char propertyName[20], location[20];
   int price;
   int size;
   int index = 1;
   system("cls");
   FILE *fp = fopen("data\\properties\\propertiesData.txt", "r");
   char ch;

   while ((ch = fgetc(fp)) != EOF)
   {
      if (ch == '\n')
      {
         countLines = countLines + 1;
      }
   }

   while (fscanf(fp, "%s %s %d %d", propertyName, location, &size, &price) != EOF)
   {
      for (int i = 0; i < 100; i++)
         printf("-");

      printf("\n\t\t\t\t\t\t%dst Property details are\n\n", index);
      printf("\t\t\t\t\t\tProperty name is %s\n", propertyName);
      printf("\t\t\t\t\t\tProperty location name is %s\n", location);
      printf("\t\t\t\t\t\tProperty size is %dbhk\n", size);
      printf("\t\t\t\t\t\tProperty price (in lacs) is %d\n", price);
      index++;
   }

   printf("\n\t\tThe total number of properties currently available for sale :\t %d", countLines);
   printf("\n\t\t\t\tpress any key to continue...");
   getch();
   fflush(stdin);
}

void updateProperty()
{
   system("cls");
   char temp[20];
   template1("Update property");
   printf("Enter the property name : ");
   scanf("%s", temp);

   FILE *fp = fopen("data\\properties\\propertiesData.txt", "r+");
   char propertyName[20], location[20];
   int price, size, index = 0;

   while (fscanf(fp, "%s %s %d %d", propertyName, location, &size, &price) != EOF)
   {
      if (strcmp(temp, propertyName) == 0)
      {
         printf("Enter the updated property name : ");
         scanf("%s", st[index].propertyName);
         printf("\n");

         printf("Enter the updated property location : ");
         scanf("%s", st[index].location);
         printf("\n");

         printf("Enter the updated property size : ");
         scanf("%d", &st[index].size);
         printf("\n");

         printf("Enter the updated property price : ");
         scanf("%d", &st[index].price);
         printf("\n");

         fseek(fp, -1 * (strlen(propertyName) + strlen(location) + 9), SEEK_CUR);
         fprintf(fp, "\n%-20s %-20s %5d %10d\n", st[index].propertyName, st[index].location, st[index].size, st[index].price);
         fclose(fp);
         printf("Property details updated successfully!\n");
         return;
      }
      strcpy(st[index].propertyName, propertyName);
      strcpy(st[index].location, location);
      st[index].size = size;
      st[index].price = price;
      index++;
      printf("\n\t\t\t\tpress any key to continue...");
      getch();
   }

   fclose(fp);
   printf("Property not found!\n");
   fflush(stdin);
}

void deleteProperty()
{
   system("cls");
   char temp[20];
   template1("Delete property");
   printf("Enter the property name : ");
   scanf("%s", temp);

   FILE *fp = fopen("data\\properties\\propertiesData.txt", "r");
   FILE *fpTemp = fopen("temp.txt", "w");
   char propertyName[20], location[20];
   int price, size;

   while (fscanf(fp, "%s %s %d %d", propertyName, location, &size, &price) != EOF)
   {
      if (strcmp(temp, propertyName) == 0)
      {
         continue;
      }
      fprintf(fpTemp, "%s %s %d %d\n", propertyName, location, size, price);
      countLines++;
   }

   fclose(fp);
   fclose(fpTemp);
   remove("data\\properties\\propertiesData.txt");
   rename("temp.txt", "data\\properties\\propertiesData.txt");
   printf("Property deleted successfully!\n");
   printf("\n\t\t\t\tpress any key to continue...");
   getch();
   fflush(stdin);
}