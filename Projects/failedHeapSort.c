#include "stdio.h"

void rearrange(int* a,int* b,int* c){
    int max;

    if(*b>*a && *b>*c){
        max=*b;
        *b=*a;
        *a=max;
    }
    if(*c>*a && *c>*b){
        max=*c;
        *c=*a;
        *a=max;
    }

}

void replace(int *x,int *y){
    int t;

    t = *x;
    *x = *y;
    *y = t;
}

void heapsort(int arr[],int siz){
    

    for(int i=siz/2 - 1; i >0; i--){
        int x=(i*2)-1;
        rearrange(&arr[x],&arr[x+2],&arr[x+3]);
    }

    rearrange(&arr[0],&arr[1],&arr[2]);
    
    replace(&arr[0],&arr[siz-1]);  
            
    siz--;
    int j=siz;
    if(j>0){
        heapsort(arr,j);
    } 
}


void printarr(int arr[],int size){

    for(int i=0; i<size; i++){
        printf("\n %d",arr[i]);
    }
}




void main(){

    int arr[]={2,4,1,3,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printarr(arr,size);

    heapsort(arr,size);
    printarr(arr,size);

}