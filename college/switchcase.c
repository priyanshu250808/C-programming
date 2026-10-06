#include <stdio.h>
int main()
{
 int choice;
 printf("1.cricket\n");
 printf("2.football\n");
 printf("3.badminton\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice)
 {
 case 1:
 printf("You selected cricket");
 break;
 case 2:
 printf("You selected football");
 break;
 case 3:
 printf("You selected badminton");
 break;
 default:
 printf("Invalid choice");
 }
 return 0;
}