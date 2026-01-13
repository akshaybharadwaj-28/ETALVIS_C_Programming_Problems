//Question: Get multiple numbers from the user and store them in an array. Stop getting numbers when the number is 0. If 4 numbers are entered and first and last numbers are equal, print "Success" else "Failure".

//Code

#include <stdio.h>
int main(){
    int i,num,a[20],count=0;
    printf("Enter multiple numbers: ");
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }
    }
    i=0;
    while(a[i]!=0){
        if(a[i]){
            count++;
        }
        i++;
    }
    if(count==4 && a[0]==a[3]){
        printf("Success\n");
    }
    else{
        printf("Failure");
    }
}
