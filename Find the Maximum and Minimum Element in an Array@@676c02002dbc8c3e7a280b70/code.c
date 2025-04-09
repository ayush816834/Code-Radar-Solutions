#include<stdio.h>
int  main(){
    int a;
    int v;
    int c;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    v=c=arr[0];
    
    for(int i=0;i<a;i++){
        if(arr[i]>c){
         c=arr[i]; 
    }}
    for (int i=0;i<a;i++){
        if(arr[i]<v){
         v=arr[i]; 
    } }printf("%d\n,%d",c,v);
    return 0;
}