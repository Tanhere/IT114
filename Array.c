#include <stdio.h>

//Compiler version gcc  6.3.0


int main()
{
  int id,pin,acc [3][2]={2222,4444,3333,6666,5555,2525};
  
  printf("Enter ID number: \n");
 scanf("%d",&id);
  printf("Enter PIN: \n");
 scanf("%d",&pin);
 
  
  if(id==acc[0][0], pin==acc[0][1])
    {
    printf("You're successfully logged in\n%d",id);
    }
    else if(id==acc[1][0], pin==acc[1][1])
    {
    printf("You're successfully logged in%d",id);
    }
    else if(id==acc[2][0], pin==acc[2][1])
    {
    printf("You're successfully logged in\n%d",id);
    }
    else
    
    printf("Invalid ID/PIN");
    
    

  return 0;
}