#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
int arr[n];
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int mid;
if(n%2!=0){
    int mid = n/2;
}
printf("%d",arr[mid]);

else{
    printf("%d",(arr[mid]+arr[mid+1])/2);
}



return 0;
}