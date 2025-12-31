//Question:- Get a number from the user and check if the number equals 50. If yes, then print "Success", otherwise print "Failure".
//Example:- Input:50 Output:Success    Input:56789 Output:Failure

//Code

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num==50){
        printf("Success");
    }
    else{
        printf("Failure");
    }
}
