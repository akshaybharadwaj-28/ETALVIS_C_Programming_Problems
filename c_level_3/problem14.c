//Question:- Get a four digit number from the user and check if the first two digits and last two digits are the same. If yes, then print "Success"; otherwise print "Failure".
//Example:- Input:1919 Output:Success    Input:6567 Output:Failure

//Code

#include <stdio.h>

int main() {
    int num,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num%100;
    num=num/100;
    if(num==temp){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}
