//Question: Adjust the carry in an integer array. (i.e. convert the 2-digit number into single digits and add the carry to the next number)

//Code

#include <stdio.h>
int main(){
    int i,n,a[30],carry,temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }
    a[0]=0;
    for(i=n;i>0;i--){
        carry=0;
        if(a[i]>9){
            temp=a[i];
            a[i]%=10;
            carry=temp/10;
            a[i-1]=a[i-1]+carry;
        }
    }
    if(a[0]>0){
        for(i=0;i<=n;i++){
            printf("%d ",a[i]);
        }
    }else if(!a[0]){
        for(i=1;i<=n;i++){
            printf("%d ",a[i]);
        }
    }
}
