#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        printf("%d ",a[i]);
    }
    for(j=0;j<n;j++){
        if(a[j]%2!=0)
        printf("%d ",a[j]);
    }
}