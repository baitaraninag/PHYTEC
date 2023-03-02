#include<stdio.h>
#include"report.h"
int main()
{
    int p,c,m,b,a,n,o,q;
    printf("Marks for physics chemistry mathematics biology statistics IT english and odia are:\n");
    scanf("%d %d %d %d",&p,&c,&m,&b,&a,&n,&o,&q);
    printf("grade in PHYSICS\n",phy(p));
    printf("grade in CHEMISTRY\n",chem(c));
    printf("grade in MATHEMATICS\n",math(m));
    printf("grade in BIOLOGY\n",bio(b));
    printf("grade in STATISTICS\n",stat(a));
    printf("grade in IT\n",it(n));
    printf("grade in ENGLISH\n",eng(o));
    printf("grade in ODIA\n",odi(q));
    printf("\n");
    printf("GRADE SYSTEM\n");
    printf("\n");
    printf("grade\tmark\no\t91-100\nA\t81-90\nB\t71-80\nC\t61-70\nD\t51-60\nE\t34-50\nFAIL\t0-33");
    return 0;

}