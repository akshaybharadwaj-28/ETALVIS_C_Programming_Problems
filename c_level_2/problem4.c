//Question:- Get a number from the user and check if the number is greater than 50. If yes, then print 1; otherwise print 0.
//Example:- Input:45 Output:0    Input:56789 Output:1

//Code

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    switch (num>50){
        case 1 : printf("Result is 1");
                  break;
        default : printf("Result is 0");
    }
}
