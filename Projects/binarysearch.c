#include "stdio.h"

int binarysearch(int array[],int size,int tofind){
    printf("\n\n %i ",size);
    int first=0;
    int last=size-1;
    int mid=(size/2);
    
    if(tofind==array[mid]){
        printf("\n mid ");
        return mid;
    }
    if(tofind==array[first]){
        printf("\n first ");
        return first;
    }
    if(tofind==array[last]){
        printf("\n last ");
        return last;
    }
    int sizenew=size/2;

    int newarray[sizenew];
    if(tofind>array[mid]){
        printf("\n bigger ");
        for(int i=0;i<sizenew;i++){
            newarray[i]=array[sizenew+i];
            printf(" %i",newarray[i]);
        }
    }
    else{
        printf("\n smaller ");
        for(int i=0;i<sizenew;i++){
            newarray[i]=array[i];
            printf(" %i",newarray[i]);
        }
    }
    printf("\n recursion");
    return binarysearch(newarray,sizenew,tofind);
    
}

int main(){

    int n;
    printf("what number do you want? -- ");scanf("%d",&n);
    
    int size=20;
    int arr[size];
    for(int i=0; i<size;i++){
        arr[i]=i+1;
        printf(" %i",arr[i]);
    }

    int x=binarysearch(arr,size,n);

    printf("\n\n The index of %i is %i",n,x);
    // for(int i=0;i<n;i++){
    //     printf("\n%i",x[i]);
    // }
}