#include<stdio.h>
int snacks(int total)
{
    int amount,c;
    main:
    printf("you are inside the snacks section!!!\n");
    printf("---------ITEM LIST------");
    printf("\n1. TEA\n2. CREAM BUN\n3. SAMOSA AND GHUGNI\n4. VADA AND GHUGNI\n5. ALOO CHOP AND GHUGNI\n6. CHUDA MIXTURE");
    printf("\n");
    printf("\nChoose your dish :");
    scanf("%d",&c);
    printf("\nEnter your amount you want :");
    scanf("%d",&amount);
    switch(c)
    {
        case 1:
        printf("you have choosen TEA.");
        printf("\n\n-----BILL--------");
        printf("\nTEA per cup Rs.10");
        total = amount*10;
        printf("\nYour total cost of %d cup TEA is:%d",amount,total);
        break;

        case 2:
        printf("you have choosen CREAM BUN.");
        printf("\n\n-----BILL--------");
        printf("\nCREAM BUN per pocket Rs.15");
        total = amount*15;
        printf("\nYour total cost of %d pocket CREAM BUN is:%d",amount,total);
        break;

        case 3:
        printf("you have choosen SAMOSA AND GHUGNI.");
        printf("\n\n-----BILL--------");
        printf("\nSAMOSA AND GHUGNI per plate Rs.25");
        total = amount*25;
        printf("\nYour total cost of %d plate SAMOSA AND GHUGNI is:%d",amount,total);
        break;


        case 4:
        printf("you have choosen VADA AND GHUGNI.");
        printf("\n\n-----BILL--------");
        printf("\nVADA AND GHUGNI per plate Rs.25");
        total = amount*25;
        printf("\nYour total cost of %d plate VADA AND GHUGNI is:%d",amount,total);
        break;

        case 5:
        printf("you have choosen ALOO CHOP AND GHUGNI.");
        printf("\n\n-----BILL--------");
        printf("\nALOO CHOP AND GHUGNI per plate Rs.25");
        total = amount*25;
        printf("\nYour total cost of %d plate ALOO CHOP AND GHUGNI is:%d",amount,total);
        break;

        case 6:
        printf("you have choosen CHUDA MIXTURE.");
        printf("\n\n-----BILL--------");
        printf("\nCHUDA MIXTURE per plate Rs.20");
        total = amount*20;
        printf("\nYour total cost of %d plate CHUDA MIXTURE is:%d",amount,total);
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}