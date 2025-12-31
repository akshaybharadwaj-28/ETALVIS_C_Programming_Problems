//Question:- Get a two digit number from the user and check if the digit 1 is less than or equal to digit 0. If yes, then print 1; otherwise print 0.
//Example:- Input:66 Output:1    Input:67 Output:1    Input:98 Output:0

//Code

#include <stdio.h>

int main() {
    int num,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num%10;
    num=num/10;
    switch (num<=temp){
        case 1 : printf("Result is 1");
                  break;
        default : printf("Result is 0");
    }
}
