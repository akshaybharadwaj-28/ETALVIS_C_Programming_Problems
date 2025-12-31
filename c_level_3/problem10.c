//Question:- Get a two digit number from the user and check if the digit 0 is greater than digit 1. If yes, then print "Success", otherwise print "Failure".
//Example:- Input:45 Output:Success    Input:76 Output:Failure

//Code

#include <stdio.h>

int main() {
    int num,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num%10;
    num=num/10;
    if(temp>num){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}
