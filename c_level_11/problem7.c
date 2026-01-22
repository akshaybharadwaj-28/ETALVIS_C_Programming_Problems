//Question: Write a function to compare a set of integers. Print Success or Failure

//Code

#include <stdio.h>
void memcomp(int *a, int *b, int size);
int main(){
    int a[10]={1,2,3,4,5},b[10]={1,2,8,4,5};
    memcomp(a,b,5);
}

void memcomp(int *a, int *b, int size){
    int flag=1;
    for(int i=0;i<5;i++){
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Success");
    }
    else if(flag==0){
        printf("Failure");
    }
}
