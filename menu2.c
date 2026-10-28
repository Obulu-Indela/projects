#include<stdio.h>
int main()
{
    char ch;
    int b,l,d;
    int Total=0,bcount=0,lcount=0,dcount=0;
    printf("1.Breakfast = 40\n2.Lunch = 60\n3.Dinner = 70\n");
  //  printf("Enter you option: \n");
    int flag=1;
    while(flag)
    {
    //printf("please enter menu option ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '1':
        printf("Breakfast \n");
        printf("please enter menu option ");
        scanf("%d",&b);
        // switch(ch)
        // {
        //     case
        // }
        bcount++;
        break;
        case '2':
        printf("Lunch\n");
        lcount++;
        break;
        case '3':
        printf("Dinner\n");
        dcount++;
        break;
        default:
        printf("Select correct option.\n");
    }
    printf("do you want to select again press '1' or no '0' : ");
    scanf("%d",&flag);
}  
    printf("\n");
    if(bcount)
    printf("Breakfast  ----> %d*40 = %d\n",bcount,bcount*40);
    if(lcount)
    printf("Lunch      ----> %d*60 = %d\n",lcount,lcount*60);
    if(dcount)
    printf("Dinner     ----> %d*80 = %d\n",dcount,dcount*80);
    Total = bcount*40+lcount*60+dcount*80;
    int GST = Total*0.18;
    int q=bcount+lcount+dcount;
    printf("-----------------------------\n");
    printf("Total    ----> %d items= %d\n",q,Total);
    printf("GST       ---->        = %d\n",GST);
    printf("-----------------------------\n");
    printf("Total Bill---->        = %d\n",Total+GST);
    printf("\n  THANK YOU & VISIT AGAIN");

   // printf("If you order again please enter '1' for 'YES' or '0' for 'NO' %c",ch);
    //if(ch==1)
}