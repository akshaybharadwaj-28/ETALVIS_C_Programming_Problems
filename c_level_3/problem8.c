//Question:- Get a two digit number from the user and check if the digit 0 and digit 1 are not identical. If yes, then print "Success", otherwise print "Failure".
//Example:- Input:55 Output:Success    Input:56 Output:Failure

//Code

#include <stdio.h>

int main() {
    int num,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num%10;
    num=num/10;
    if(num!=temp){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}
