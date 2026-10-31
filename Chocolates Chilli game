#include<stdio.h>
int main()
{
    printf("************************************\n");   
    printf("      WELCOME TO THE GAME \n");
    printf("************************************\n");
    int choc,n1,n2;
    printf("Enter no of chocolates : ");
    scanf("%d",&choc);

    if(choc<=0)
    printf("Enter valid chocolates.\n");

    else
    {
     while(choc>0)
     {
        s1:
        printf("----\n");
        printf("player n1 turns.\n");
        printf("select chocolates (1 to 3) n1 : ");
        scanf("%d",&n1);

        if(n1>0 && n1<4)
        {
        choc=choc-n1;
        if(choc<=0)
        {
            printf("only chilly remaining.. n1 lost the game\n");
            break;
        }
       // printf("The remaining choclates are : %d\n",choc);
        }
        else
        {
            printf("Invalid.. Selact in range(1 to 3).\n");
            goto s1;
        }

        s2:
        printf("------\n");
        printf("player n2 turns.\n");
        printf("select chocolates (1 to 3) n2 : ");
        scanf("%d",&n2);
        
        if(n2>0 &&n2 <4)
        {
        choc=choc-n2;
        if(choc<=0)
        {
            printf("only chilly remaining.. n2 lost the game\n");
            break;
        }
        //printf("The remaining choclates are : %d\n",choc);
        }
        else
        {
            printf("Invalid.. Selact in range(1 to 3).\n");
            goto s2;
        }
     }
    }
}
