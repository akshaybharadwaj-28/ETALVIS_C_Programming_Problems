//Question: Pass an integer array to a function and increment each array element inside the function

//Code

#include <stdio.h>
void fun(int arr[], int size);
int main(){
    int a[5]={1,3,5,7,9};
    fun(a,5);
}

void fun(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        arr[i]=arr[i]+1;
        printf("%d ",arr[i]);
    }
}
