#include<stdio.h>
int  main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr);
    }
    int c=arr[0];
    for (int i=0;i<a;i++){
        if(arr[i]>c){
         c=arr[i]; 
    }
    }printf("%d",c);
    return 0;
}