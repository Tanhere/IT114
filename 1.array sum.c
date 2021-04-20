#include<stdio.h>

int main()
{
    int marks[5],i,sum=0,size;
    //size
    printf(" LIMIT 5-10!!\n");
    printf("\nSize of Array: ");
    scanf("%d",&size);
   // limit
    if(size>=5 && size<=10){
    
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
    }
    
    else 
    printf("Array size Limit 5-10");
    
    return 0;  
}