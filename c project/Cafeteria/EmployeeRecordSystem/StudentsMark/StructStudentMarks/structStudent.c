#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
    struct details
    {
        int reg_no;
    }
    details;
}
student;
int main()
{
    int i,n;
    struct student s1;
    struct details d;
    printf("Enter total of students:");
    scanf("%d",&n);

    printf("\n Enter information of student:\n");
    printf("Enter name:");
    scanf("%s",s1.name);
    printf("Enter roll number:");
    scanf("%d",&s1.roll);
    printf("Enter marks:");
    scanf("%f",&s1.marks);
    printf("Enter the details");
    scanf("%d",&s1.details.reg_no);

    printf("Displaying information:\n");
    for(i=0;i<n;i++)
    {
        printf("\n no.student info\n");
        printf("\t registration no: %d",s1.details.reg_no);
        printf("\tName:%s\n",s1.name);
        printf("\tRoll number:%d\n",s1.roll);
        printf("\t Marks:%.1f\n\n",s1.marks);
    }
    return 0;
}