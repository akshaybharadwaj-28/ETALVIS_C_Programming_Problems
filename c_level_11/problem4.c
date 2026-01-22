//Question: Write a function to find the two digit odd numbers whose sum of digits is 7. Print the results in the main function.

//Code

#include <stdio.h>
int* find_2digit_odd_sum7(int *a, int size);
int main(){
    static int i,a[50];
    int *ptr=find_2digit_odd_sum7(a,50);
    while(*(ptr+i)!='\0'){
        printf("%d\n",*(ptr+i));
        i++;
    }
}

int* find_2digit_odd_sum7(int *a, int size){
    int j=0,d0,d1;
    for(int i=10;i<100;i++){
        d0=i%10;
        d1=i/10;
        if(i%2 && d0+d1==7){
            a[j]=i;
            j++;
        }
    }
    return a;
}
