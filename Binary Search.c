#include<stdio.h>
#include<conio.h>
void main()
{
    int num, len;
    printf("\nEnter the length of array: ");
    scanf("%d",&len);
    int arr[len];
    int i, j;
    printf("\nEnter the elements of array: \n");
    for(i=0;i<len;i++)
    {
        printf("\nA[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d",&num);

    // Sorting
    int swap=0;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(arr[i]<arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }

    printf("\nSorted array: \n");
    for(i=0;i<len;i++)
    {
        printf("%d \t",arr[i]);
    }

    // Binary Search
    int mid=(len-2)/2;
    int f=0;
    if(arr[mid]>num) {
        for(i=0;i<mid;i++) {
            if(arr[i]==num) {
                printf("\nElement is Found at position %d.",i);
                break;
            }
            else {
                f=f+1;
            }
        }
    if(f==mid) {
        printf("\nElement Not Found!!");
    }
    }
    else {
        for(i=mid;i<len;i++) {
            if(arr[i]==num) {
                printf("\nElement is Found at position %d.",i);
                break;
            }
            else {
                f=f+1;
            }
        }
    if(f==len) {
        printf("\nElement Not Found!!");
    }
    }

    getch();
}