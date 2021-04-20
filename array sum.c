#include<stdio.h>

int main()
{
    int marks[5],i,sum=0,size;
    //size
    printf("Size of Array: ");
    scanf("%d",&size);
    
    for(i=0; i<size; i++)
    {
    // get data 
    
    printf("Element %d: ",i+1);
    scanf("%d",&marks[i]);
    
    
    // add
    sum += marks[i];
    }
    
    // print sum
    printf("Sum of all array elements = %d", sum);
    
    return 0;  
}