//Question: Write a program to get a 4 digit number from the user, print whether that number's middle two digits (hundred's digit and ten's digit) is prime.
//Input:6359 Output:Not Prime    Input:3537  Output:Prime

//Function name : middle_2digits_prime

//Code

#include <stdio.h>
int middle_2digits_prime();
int main(){
    middle_2digits_prime();
}

int middle_2digits_prime(){
    int num,i,flag=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    num=num%1000;
    num=num/10;
    for(i=2;i<num;i++){
        if(num%i==0){
            flag=1;
            printf("Not prime");
            break;
        }
    }
    if(flag==0){
        printf("Prime");
    }
}
