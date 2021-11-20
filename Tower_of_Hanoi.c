//Write a program to implement Tower of Hanoi Problem.

#include<stdio.h>
#include<math.h>

void TOH(int n,char src,char dest,char aux)
{
    if(n==1){
        printf("Move disk 1 from %c --> %c\n",src,dest);
        return;
    }
    else{
        TOH(n-1,src,aux,dest);
        printf("Move disk %d from %c --> %c\n",n,src,dest);
        TOH(n-1,aux,dest,src);
    }
}

int main()
{
    int num,a=1;
    printf("Enter the number of disk: ");
    scanf("%d",&num);
    TOH(num,'A','B','C');

    return 0;
}