//Question: Write a program to get a number from the user, print whether that number's first two digits (ten's digit and one's digit) is prime.
//Input:359 Output:Prime    Input:3577  Output:Not Prime

//Function name : check_first_2digits_prime

//Code

#include <stdio.h>
int check_first_2digits_prime();
int main(){
    check_first_2digits_prime();
}

int check_first_2digits_prime(){
    int num,i,flag=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    num=num/100;
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
