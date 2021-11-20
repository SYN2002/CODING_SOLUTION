//Write a program to sort a given array using bubble sort algorithm.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void display(int *a,int n){
    for(int i=0;i<n;i++)
        printf("%3d",a[i]);
}

void BubbleShort(int *arr,int n){
    int c=1;
    while (c<n)
    {
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        printf("\nPass: %d\n",c);
        display(arr,n);
        printf("\n");
        c++;
    }
}


int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter the elements of the array: \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nBefore shorting the array is: ");
    display(arr,n);
    BubbleShort(arr,n);

    return 0;
}