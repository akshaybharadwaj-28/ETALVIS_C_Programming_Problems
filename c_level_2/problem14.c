//Question:- Get a four digit number from the user and check if the first two digits and last two digits are the same. If yes, then print 1; otherwise print 0.
//Example:- Input:1919 Output:1    Input:6567 Output:0

//Code

#include <stdio.h>

int main() {
    int num,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num%100;
    num=num/100;
    switch (num==temp){
        case 1 : printf("Result is 1");
                  break;
        default : printf("Result is 0");
    }
}
