#include<stdio.h>

//separate fnction///
int add(int var1,int var2);
int mul(int var1,int var2);
int subs(int var1,int var2);
float divs(float var1,float var2);

int main()
{
    int num1,num2,sum,sub,mult;
    float div1;
    
    printf("Input any 2 integers: ");
    scanf("%d %d", &num1,&num2);
    
   // pass argurments//
    
    sum = add(num1,num2);
    printf("ADD = %d\n", sum);
    
    mult = mul(num1,num2);
    printf("MUL= %d\n",mult);
    
    div1 = divs(num1,num2);
    printf("DIV = %.1f\n", div1);
    
    sub= subs(num1,num2);
    printf("SUB = %d\n", sub);
    
    
   

}
int add(int var1,int var2)
{ 
   int sum1;
   sum1=var1+var2;
   return sum1;
}

int mul(int var1,int var2)
{
    int mul1;
    mul1= var1* var2;
    return mul1;

}

int subs(int var1,int var2)
{
    int sub1;
    sub1=var1-var2;
    return sub1;

}
float divs(float var1,float var2)

{
    float div1;
    div1 = var1 /var2;
    return div1;
    


}




