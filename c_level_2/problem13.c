//Question:- Get a four digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, then print 1; otherwise print 0.
//Example:- Input:988 Output:1    Input:567 Output:0

//Code

#include <stdio.h>

int main() {
    int num,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num%10;
    num=num/10;
    num=num%10;
    switch (num==temp){
        case 1 : printf("Result is 1");
                  break;
        default : printf("Result is 0");
    }
}
