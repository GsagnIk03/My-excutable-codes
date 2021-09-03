#include<stdio.h>
int main()
{
    printf("Character Determination & Integer Convertion!\n");
    char ch,ch1,ch2,ch3;
    printf("Enter A New Character:\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("%c is an uppercase character. Want to change it to corresponding lowercase character?(Y/N):\n",ch);
        scanf(" %c",&ch1);
        if(ch1=='Y' || ch1=='y')
        {
            printf("The correponding lowercase character of %c is = %c",ch,ch+32);
        }
        else if(ch1=='N' || ch1=='n')
        {
            printf("Want to see %c's Integer Interpretation?(Y/N):",ch);
            scanf(" %c",&ch2);
            if(ch2=='Y' || ch2=='y')
            {
                printf("The Integer Interpretation of %c is=%d",ch,ch);
            }
        else
        {
                printf("Thank You!Your Final Output is=%c",ch);
        }
        }
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c is an lowercase character. Want to change it to corresponding uppercase character?(Y/N):\n",ch);
        scanf(" %c",&ch3);
        if(ch3=='Y' || ch3=='y')
        {
            printf("The correponding lowercase character of %c is = %c",ch,ch-32);
        }
        else if(ch3=='N' || ch3=='n')
        {
            printf("Want to see %c's Integer Interpretation?(Y/N):",ch);
            scanf(" %c",&ch3);
            if(ch3=='Y' || ch3=='y')
            {
                printf("The Integer Interpretation of %c is=%d",ch,ch);
            }
            else
            {
                printf("Thank You!Your Final Output is=%c",ch);
            }
        }
    }
    else
    {
        printf("It's not a character:\n");
    }
    return 0;
}