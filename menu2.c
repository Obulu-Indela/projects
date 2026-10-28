#include<stdio.h>
int main()
{
    char ch;
    int Total=0,tcount=0,ccount=0,dcount=0,mcount=0;
    printf("***WELCOME TO COFFE SHOP**\n");
    printf("1.Tea = 15\n2.Coffee = 20\n3.ColdCoffee = 30\n4.Milk = 10\n");

    int option=1;
    while(option)
    {
    printf("please enter menu option ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '1':
        printf("Tea \n");
        tcount++;
        break;
        case '2':
        printf("Coffee\n");
        ccount++;
        break;
        case '3':
        printf("ColdCoffee\n");
        dcount++;
        break;
        case '4':
        printf("Milk\n");
        mcount++;
        break;
        default:
        printf("Select correct option.\n");
    }
    printf("do you want to select again press '1' or no '0' : ");
    scanf("%d",&option);
}  
    printf("\n");
    if(tcount)
    printf("Tea         ----> %d*15 = %d\n",tcount,tcount*15);
    if(ccount)
    printf("Coffee      ----> %d*20 = %d\n",ccount,ccount*20);
    if(dcount)
    printf("ColdCoffee  ----> %d*30 = %d\n",dcount,dcount*30);
    if(mcount)
    printf("Milk        ----> %d*10 = %d\n",mcount,mcount*15);

    Total = tcount*15+ccount*20+dcount*30+mcount*15;

    int GST = Total*0.18;
    int q=tcount+ccount+dcount+mcount;
    
    printf(" ***WELCOME TO COFFE SHOP**\n");
    printf("-----------------------------\n");
    printf("Total     ----> %d items= %d\n",q,Total);
    printf("GST       ---->        = %d\n",GST);
    printf("-----------------------------\n");
    printf("Total Bill---->        = %d\n",Total+GST);
    printf("\n**THANK YOU & VISIT AGAIN**\n");

}
