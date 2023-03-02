#include<stdio.h>
int dinner(int total)
{
    int amount,c;
    main:
    printf("you are inside the dinner section!!!\n");
    printf("---------ITEM LIST------");
    printf("\n1. ROTI\n2. MIX VEGETABLES CURRY\n3. ALOO FRY\n4. CHILLI GOBI\n5. PANEER MATTAR CURRY\n6. VEG BIRYANI");
    printf("\n");
    printf("\nChoose your dish :");
    scanf("%d",&c);
    printf("\nEnter your amount you want :");
    scanf("%d",&amount);
    switch(c)
    {
        case 1:
        printf("you have choosen ROTI.");
        printf("\n\n-----BILL--------");
        printf("\nROTI per piece Rs.5");
        total = amount*5;
        printf("\nYour total cost of %d piece ROTI is:%d",amount,total);
        break;

        case 2:
        printf("you have choosen MIX VEGETABLES CURRY.");
        printf("\n\n-----BILL--------");
        printf("\nMIX VEGETABLES CURRY per plate Rs.10");
        total = amount*10;
        printf("\nYour total cost of %d plate MIX VEGETABLES CURRY is:%d",amount,total);
        break;

        case 3:
        printf("you have choosen ALOO FRY.");
        printf("\n\n-----BILL--------");
        printf("\nALOO FRY per plate Rs.10");
        total = amount*10;
        printf("\nYour total cost of %d plate ALOO FRY is:%d",amount,total);
        break;


        case 4:
        printf("you have choosen CHILLI GOBI.");
        printf("\n\n-----BILL--------");
        printf("\nCHILLI GOBI per plate Rs.15");
        total = amount*15;
        printf("\nYour total cost of %d plate CHILLI GOBI is:%d",amount,total);
        break;

        case 5:
        printf("you have choosen PANEER MATTAR CURRY.");
        printf("\n\n-----BILL--------");
        printf("\nPANEER MATTAR CURRY per plate Rs.20");
        total = amount*20;
        printf("\nYour total cost of %d plate PANEER MATTAR CURRY is:%d",amount,total);
        break;

        case 6:
        printf("you have choosen VEG BIRYANI.");
        printf("\n\n-----BILL--------");
        printf("\nVEG BIRYANI per plate Rs.55");
        total = amount*55;
        printf("\nYour total cost of %d plate VEG BIRYANI is:%d",amount,total);
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}