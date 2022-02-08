#include<stdio.h>

int main()
{  
  //variables
    int i=0,n=0,append,j,k;
    char lines[20];
    FILE *data;
    
   // data file
    data=fopen("text.txt","a");
    //print in screen
    printf("Lines to append: ");
    scanf("%d",&n);
    printf("Please Append %d Datas\n",n);
    
    //for loop
    for(i=0;i<n;i++)
    {
    j=i+1;
    printf("%d. ",j);
    scanf("%s",lines);
    
    //print inside file
    fprintf(data,"\n%s",lines);
  
    }

    
    
    fclose(data);
    return 0;
}