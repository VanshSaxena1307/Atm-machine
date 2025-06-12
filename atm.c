#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    int p;
    printf("-----------------------------Hello! Welcome to Indian National Bank-----------------------------\n");
    printf("Please Enter your 4-digit Pin: ");
    scanf("%d", &p);
    printf("Verifying PIN...\n");
    Sleep(2000);
    
    if (p>=1111 && p<=9999)
    {
        char d[15];
        printf("Want to Withdraw or Deposit:  ");
        scanf("%s", d);
        int t;
        if (strcmp(d,"Withdraw")== 0)
        {
            printf("ENTER AMOUNT IN MULTIPLE OF 500:  ");
            scanf("%d", &t);
            printf("Hold On\n");
            Sleep(1000);
            while (1)
            {
                if (t%500==0)
                {
                    printf("Thanks for choosing us!\n");
                    printf("Wait a while\n");
                    Sleep(2000);
                    printf("You can collect your money\n");
                    printf("Don't Forget to take your card back!\n");
                    break;
                }
                else{
                    printf("Enter a valid amount");
                    scanf("%d", &t);
                }
            }
            
        }
        else if (strcmp(d,"Deposit")== 0)
        {
            int ac, ad;
            printf("Please enter your Account no.:  ");
            scanf("%d", &ac);
            printf("Verifying Account Number\n");
            Sleep(3000);

            printf("Enter Amount to Deposit:  ");
            scanf("%d", &ad);

            printf("Deposit cash in the cash dispenser\n");
            printf("You will be notified for this transaction within 24 hours\n");
            printf("Thanks for choosing us\n");

        }
    }
    else{
        printf("Enter a valid PIN no.!");
    }    
        

    
    return 0;
}