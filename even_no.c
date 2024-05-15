#include<stdio.h>

int main(){
int r,c,i,j,s=0;
printf("Enter the row and column");
scanf("%d%d",&r,&c);
int arr[r][c];
printf("Enter the element of the array");
for(i=0;i<r;i++){
    for(j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++)
    {
       if(arr[i][j]%2==0){
        s+=arr[i][j];
       }
    }
}
printf("The sum of even element of the array is: %d",s);
return 0;
}