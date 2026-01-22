//Question: Write a function to copy integers from one location to another location

//Code

#include <stdio.h>
void memcopy(int *a, int* b, int size);
int main(){
    int a[5],b[5];
    printf("Enter numbers: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a);
    }
    for(int i=0;i<5;i++){
        printf("%p ",&a[i]);
    }
    memcopy(a,b,5);
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%p ",&b[i]);
    }
}

void memcopy(int *a, int *b, int size){
    int i;
    for(i=0;i<5;i++){
        *(b+i)=*(a+i);
    }
}
