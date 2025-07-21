#include<stdio.h>

int main() 
{
    int ch,plates,cups;
    int total = 0;

do
    {
     printf("\nWelcome To Sejal Hotel\n");
    printf("Menu:\n");
    printf("1 Samosa 20/-\n");
    printf("2 Dosa   30/-\n");
    printf("3 Tea    10/-\n");
    printf("0 Exit\n");

    printf("Enter your Choice : ");
    scanf("%d",&ch);

 switch(ch){
     case 1:
        printf("Enter number of plats : ");
        scanf("%d",&plates);
        int sub_samosa = plates*20;
        total  += sub_samosa;
        printf("Sub-total: %d",sub_samosa);
        break;
 
       case 2:
        printf("Enter number of plats : ");
        scanf("%d",&plates);
        int sub_dosa = plates*30;
         total  += sub_dosa;
        printf("Sub-total: %d",sub_dosa);
        break;

        case 3:
        printf("Enter number of cups : ");
        scanf("%d",&cups);
        int sub_tea = cups*10;
         total  += sub_tea;
        printf("Sub-total: %d",sub_tea);
        break;
        
        case 0:
        printf("\nExiting order menu...\n");
        break;

       default:
       printf("choose from menu ");
       break;
    }
}while(ch != 0);

printf("\n\ngrand total  : %d",total);

 return 0;
}
