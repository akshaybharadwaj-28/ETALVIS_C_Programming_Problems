//Question: Write a loop program to print 1 to 5 one by one. Write a function and print the result in main function.

//Code

#include <stdio.h>
int* arrange_ascend();
int main(){
    int *ptr=arrange_ascend();
    for(int i=0;i<5;i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}

int* arrange_ascend(){
    static int a[5];
    for(int i=0;i<5;i++){
        a[i]=i+1;
    }
    return a;
}
