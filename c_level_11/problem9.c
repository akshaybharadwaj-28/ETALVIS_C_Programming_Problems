//Question: Write a function to concatenate two integer arrays into a single array.

//Code

#include <stdio.h>
void intcon(int* a, int size1, int* b, int size2, int*c);
int main(){
    int a[5]={1,2,3,4,5},b[5]={6,7,8,9,0},c[10];
    intcon(a,5,b,5,c);
}

void intcon(int* a, int size1, int* b, int size2, int*c){
    int i;
    for(i=0;i<size1;i++){
        c[i]=a[i];
    }
    i=0;
    while(b[i]!='\0'){
        c[i+size2]=b[i];
        i++;
    }
    for(i=0;i<size1+size2;i++){
        printf("%d ",c[i]);
    }
}
