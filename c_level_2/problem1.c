//Question:- Get a number from the user and check if the number equals 50. If yes, then print 1 otherwise print 0.
//Example:- Input:50 Output:1    Input:56789 Output:0

//Code

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    switch (num){
        case 50 : printf("Result is 1");
                  break;
        default : printf("Result is 0");
    }
}
