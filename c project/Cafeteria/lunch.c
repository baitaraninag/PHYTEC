#include<stdio.h>
int lunch(int total)
{
    int amount,c;
    main:
    printf("you are inside the lunch section!!!\n");
    printf("---------ITEM LIST------");
    printf("\n1. RICE\n2. DAL\n3. CHICKEN CURRY\n4. EGG CURRY\n5. FISH CURRY\n6. SAHI PANEER\n7. SALAD\n8. PAPAD");
    printf("\n");
    printf("\nChoose your dish :");
    scanf("%d",&c);
    printf("\nEnter your amount you want :");
    scanf("%d",&amount);
    switch(c)
    {
        case 1:
        printf("you have choosen RICE.");
        printf("\n\n-----BILL--------");
        printf("\nRICE per plate Rs.10");
        total = amount*10;
        printf("\nYour total cost of %d plate RICE is:%d",amount,total);
        break;

        case 2:
        printf("you have choosen DAL.");
        printf("\n\n-----BILL--------");
        printf("\nDAL per plate Rs.10");
        total = amount*10;
        printf("\nYour total cost of %d plate DAL is:%d",amount,total);
        break;

        case 3:
        printf("you have choosen CHICKEN CURRY.");
        printf("\n\n-----BILL--------");
        printf("\nCHICKEN CURRY per plate Rs.50");
        total = amount*50;
        printf("\nYour total cost of %d plate CHICKEN CURRY is:%d",amount,total);
        break;


        case 4:
        printf("you have choosen EGG CURRY.");
        printf("\n\n-----BILL--------");
        printf("\nEGG CURRY per plate Rs.25");
        total = amount*25;
        printf("\nYour total cost of %d plate EGG CURRY is:%d",amount,total);
        break;

        case 5:
        printf("you have choosen FISH CURRY.");
        printf("\n\n-----BILL--------");
        printf("\nFISH CURRY per plate Rs.35");
        total = amount*35;
        printf("\nYour total cost of %d plate FISH CURRY is:%d",amount,total);
        break;

        case 6:
        printf("you have choosen SAHI PANEER.");
        printf("\n\n-----BILL--------");
        printf("\nSAHI PANEER per plate Rs.30");
        total = amount*30;
        printf("\nYour total cost of %d plate SAHI PANEER is:%d",amount,total);
        break;

        case 7:
        printf("you have choosen SALAD.");
        printf("\n\n-----BILL--------");
        printf("\nSALAD per plate Rs.10");
        total = amount*10;
        printf("\nYour total cost of %d plate SALAD is:%d",amount,total);
        break;

        case 8:
        printf("you have choosen PAPAD.");
        printf("\n\n-----BILL--------");
        printf("\nPAPAD per plate Rs.8");
        total = amount*8;
        printf("\nYour total cost of %d plate PAPAD is:%d",amount,total);
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}