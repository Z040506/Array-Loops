#include <stdio.h> 
    int main(){

        char name[50];
        int age;

        printf("Enter your name: ");
        scanf("%s", &name);

        printf("Enter your Age: ");
        scanf("%d", &age);

        printf("Name: %s \n", name);

        if(age > 0 && age <= 17){
            printf("You are a Minor! \n");
        }
        else if(age >= 18 && age <= 25)
            printf("You are a Young Adult! \n");
        else if(age >= 26 && age <= 59){
            printf("You are an Adult! \n");
        }
        else if(age >= 60 && age <= 100){
            printf("You are a Senior! \n");
        }
        else{
            printf("WOW YO A MUNSTAH! \n");
        }

        float balance,withdraw;
        balance = 1000;

        printf("Enter Withdraw amount: ");
        scanf("%f", &withdraw);
        
        if(withdraw > balance){
            printf("INSUFFICIENT BALANCE.");
        }
        else{
            float new_balance = balance - withdraw;
            printf("WITHDRAW SUCCESSFUL! \n"
                   "REMAINING BALANCE: %.2f", new_balance
            );
        }



        return 0;
    }