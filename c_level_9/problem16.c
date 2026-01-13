//Question: Add two integer arrays of up to 50 digits and store the result in a 51-digit array

//Code

#include <stdio.h>
int main(){
    int a[50],b[50],sum[51],i,j,m,n,carry,temp;
    printf("Enter digits in 1st array: ");
    scanf("%d",&m);
    printf("Enter digits in 2nd array: ");
    scanf("%d",&n);
    printf("Enter the digits of 1st array: ");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the digits of 2nd array: ");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=m-1,j=n-1;j>=0;i--,j--){
        b[i]=b[j];
    }
    for(i=0;i<m-n;i++){
        b[i]=0;
    }
    carry=0;
    for(i=m-1;i>=0;i--){
        sum[i]=a[i]+b[i]+carry;
        carry=0;
        if(sum[i]>9){
            temp=sum[i];
            sum[i]%=10;
            carry=temp/10;
        }
    }
    printf("\n");
    for(i=0;i<m;i++){
        printf("%d ",sum[i]);
    }
}
