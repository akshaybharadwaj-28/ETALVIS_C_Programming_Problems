//Question:- Get a two digit number from the user and check if the digit 1 is greater than or equal to digit 0. If yes, then print "Success", otherwise print "Failure".
//Example:- Input:66 Output:Success    Input:67 Output:Failure    Input:98:Success

//Code

#include <stdio.h>

int main() {
    int num,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num%10;
    num=num/10;
    if(num>=temp){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}
