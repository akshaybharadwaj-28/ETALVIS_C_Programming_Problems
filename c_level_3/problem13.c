//Question:- Get a four digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, then print "Success"; otherwise print "Failure".
//Example:- Input:988 Output:Success    Input:567 Output:Failure

//Code

#include <stdio.h>

int main() {
    int num,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num%10;
    num=num/10;
    num=num%10;
    if(num==temp){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}
