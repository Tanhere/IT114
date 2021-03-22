#include<stdio.h>

//separate fnction///
int add_grade(int g1,int g2,int g3,int g4,int g5);
int average(int g1,int g2,int g3,int g4,int g5);


int main()
{
    int num1,num2,num3,num4,num5,sum,div;
    
    printf("ENTER FIVE GRADES: ");
    scanf("%d %d %d %d %d", &num1,&num2,&num3,&num4,&num5);
    
   // pass argurments//
    
    sum = add_grade(num1,num2,num3,num4,num5);
    
    printf("Sum= %d\n", sum);
    
    div = average(num1,num2,num3,num4,num5);
    
    printf("Average= %d%% ",div);
    
    
    
    
   
}

int add_grade(int g1,int g2,int g3,int g4,int g5)
{  int add;
   
   add=g1+g2+g3+g4+g5;
   
    return add;
}
int average(int g1,int g2,int g3,int g4,int g5)
{
    int divs1,divs2;
    
    divs1=g1+g2+g3+g4+g5;
    divs2= divs1/5;
    return divs2;

}

