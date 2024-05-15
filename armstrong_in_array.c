#include<stdio.h>

int main(){
int n,i;
printf("Enter the size of the array\n");
scanf("%d",&n);
int arr[n];
printf("Enter the array element\n");
for(i=0;i<n;i++)
{
    scanf("%d ",&arr[i]);
}
for(i=0;i<n;i++)
{
   int temp=arr[i],c=0;
   while(arr[i]>0)
   {
     c++;
     arr[i]/=10;
   }
arr[i]=temp;
int r,s=0,p;
while(arr[i]>0)
{
 r=arr[i]%10;
 p=1;
 for(int j=0;j<c;j++)
 {
  p=p*r;
 }
 s+=p;
 arr[i]/=10;
}
if(temp==s)
{
    printf("%d is armstrong.",temp);
}
else{
    printf("%d is not armstrong.",temp);
}

}
return 0;
}