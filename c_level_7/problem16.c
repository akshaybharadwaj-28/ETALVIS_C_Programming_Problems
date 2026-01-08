//Question: Write a program to get a number from the user and print whether that number is prime or not.
//Input:31 Output:Prime    Input:27  Output:Not Prime

//Function name : check_prime

//Code

#include <stdio.h>
int check_prime();
int main(){
    check_prime();
}

int check_prime(){
    int i,num,flag=0;
    printf("Enter a number: ");
    scanf("%d",&num);
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
