
void searchProperty()
{
   int taskToPerform;
   while (1)
   {
      printf("1. Find the property using property name\n");
      printf("2. Find the property using property location\n");
      printf("3. Find the property using property size\n");
      printf("4. Find the property using property price\n");
      printf("5. back");
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
