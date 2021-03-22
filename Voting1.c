#include<stdio.h>
//#include<string.h>

int main()
{
    char Fname[31];
    
    int age1;
    printf("name:");
    scanf("%[^\n]",&Fname);
    printf("Age:");
    scanf("%d", &age1);
   
   ///condition//
    if(age1>=18)
    {
    printf("\nName: %s\n",Fname);
    printf("Age: %d\n",age1);
    printf("You are eligitable for voting");
    }
    else
    {
    printf("\nName: %s\n", Fname);
    printf("Age: %d\n",age1);
    printf("You are not eligitable for voting");
 
    }
    
    
    return 0;
}