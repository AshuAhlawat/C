#include<stdio.h>
void reverse_array(int arr[],int a,int b)
{
    int tem;                        // 654321
    while (a<b)
    {
        int temp;
        temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
        a++;
        b--;
    }

}
void print_array(int arr[],int c){

    for (int i = 0; i < c; i++)
    {
        printf("The Array of position %d is %d\n",i,arr[i]);

    }
}
int main()
{ 
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);

    }
    print_array(ar,n);
    reverse_array(ar,0,n-1);

    print_array(ar,n);


}