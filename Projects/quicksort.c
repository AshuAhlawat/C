#include "stdio.h"

int *quicksort(int arr[],int size){
    int newarr[size];

    int x=arr[size-1];
    int y=0;

    for(int i=0; i<size; i++){

        if(arr[i] <= x){
            newarr[y]=arr[i];
            y++;
        }
    }
    for(int i=0; i<size; i++){

        if(arr[i] > x){
            newarr[y]=arr[i];
            y++;
        }
    }

    // printarr(newarr,size);

    if(checksort(newarr,size)==1){
        printarr(newarr,size);
        for(int i=0; i<size;i++){
            arr[i]=newarr[i];
            
        }
        return newarr;
    }
    else{
        quicksort(newarr,size);
    }

}


int checksort(int arr[],int size){
    int check=1;
    for(int i =0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            check=0;
        }
    }
    return check;
}


void printarr(int arr[],int size){
    printf("\n");
    for(int i=0; i<size; i++){
        printf(" %d",arr[i]);
    }
}





void main(){
    
    int size;
    printf("what size of array do you want? -- ");scanf("%d",&size);
    int inputs[size];
    
    for(int i=0; i<size;i++){
        printf("No. %d : ",i+1);scanf("%d",&inputs[i]);
    }
    

    printarr(inputs,size);

    int sorted_array=quicksort(inputs,size);

    printarr(sorted_array,size);
}
