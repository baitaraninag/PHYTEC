#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
    int emp_id;
    int emp_phone;
    int emp_name[20];
    int emp_gender[20];
    int emp_basicsalary[20];
};
void display(struct employee emp[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nemployee%d ID,Name,Phone Number,Gender and Basicsalary \n",i+1);
        printf("\n\n");
        scanf("%d %s %x %s %s",&emp[i].emp_id,&emp[i].emp_name,&emp[i].emp_phone,&emp[i].emp_gender,&emp[i].emp_basicsalary);
    }
}
int main()
{
    int n;
    printf("\n                STUDENT DETAILS                 \n");
    printf("\n\n");
    printf("\nEnter the number of employees record you want:");
    scanf("%d",&n);
    struct employee emp[n];
    display(emp,n);
}
