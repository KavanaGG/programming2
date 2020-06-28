// reversing the element of 1D array

#include<stdio.h>
#define MAX_SIZE 6
void main()
{
int arr[MAX_SIZE];
int i, *p1,temp;
for(i=0;i<MAX_SIZE; i++)
{
arr[i]=rand()%100;
}
for(i=0; i<MAX_SIZE; i++)
printf("%d\t",arr[i]);
p1=arr;
for(i = 0; i < MAX_SIZE/2; i++) {
        temp=arr[i];
        arr[i]=arr[MAX_SIZE-i-1];
        arr[MAX_SIZE-i-1]=temp;
    }
printf("\n");
    for(i = 0; i < MAX_SIZE; i++)
        printf("%d\t", *(arr + i));
    return 0;
}
