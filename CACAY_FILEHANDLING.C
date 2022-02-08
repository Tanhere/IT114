#include<stdio.h>
#include<stdlib.h>
#include<string.h>


   //argument pass and return value
   int student1_grades(int func_math, int func_english, int func_science);
   int student2_grades(int func_math, int func_english, int func_science);

int main()
{
    
    //variables
    char student1_name[20],student2_name[20];
    int sum,sum2,student1_id,student2_id,math,science,english,math_2,english_2,science_2;
    float average,average_2;
    
    FILE *student1,*student2;
    
    //locate files
    student1=fopen("student1.txt","w");
   
    //user input
    printf("Name: ");
    scanf("%s",&student1_name);
    
    printf("ID: ");
    scanf("%d",&student1_id);
    
    printf("Math: ");
    scanf("%d",&math);
    
    printf("Science: ");
    scanf("%d",&english);
    
    printf("English: ");
    scanf("%d",&science); 
     
    //pass arguments
    sum=student1_grades(math,english,science);
    average=sum/3;
    
    //printf("\nName: %s\nID: %d\n",student1_name,student1_id);
   // printf("Total Grade: %d", sum);
   // printf("\nTotal Average: %.2f", average);
    
    //print in file
    fprintf(student1,"\nName: %s\nID: %d\n",student1_name,student1_id);
    fprintf(student1,"Math: %d\nEnglish: %d\nScience: %d\n",math,english,science);
    fprintf(student1,"Total Grade: %d", sum);
    fprintf(student1,"\nTotal Average: %.2f", average);

  // close file
    fclose(student1);
  
    //locate files
    student2=fopen("student2.txt","w");
    
  
    //user input
    printf("\nName: ");
    scanf("%s",&student2_name);
    
    printf("ID: ");
    scanf("%d",&student2_id);
    
    printf("Math: ");
    scanf("%d",&math_2);
    
    printf("Science: ");
    scanf("%d",&english_2);
    
    printf("English: ");
    scanf("%d",&science_2); 
     
    //pass arguments
    sum2=student2_grades(math_2,english_2,science_2);
    average_2=sum2/3;
  
   // printf("\nName: %s\nID: %d\n",student2_name,student2_id);
   // printf("Total Grade: %d", sum2);
    //printf("\nTotal Average: %.2f", average_2);
    
    
    //print in file
    fprintf(student2,"\nName: %s\nID: %d\n",student2_name,student2_id);
    fprintf(student2,"Math: %d\nEnglish: %d\nScience: %d\n",math_2,english_2,science_2);
    fprintf(student2,"Total Grade: %d", sum2);
    fprintf(student2,"\nTotal Average: %.2f", average_2);


    fclose(student2);
    
    
    return 0;
    
}

//return value type int
int student1_grades(int func_math, int func_english, int func_science)
{        
        int func_sum_student1; 
      
        func_sum_student1= func_math+func_english+func_science;
               
        return func_sum_student1;

}

int student2_grades(int func_math, int func_english, int func_science)
{        
        int func_sum_student2; 
      
        func_sum_student2= func_math+func_english+func_science;
               
        return func_sum_student2;

}