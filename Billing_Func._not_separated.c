#include<stdio.h>
#include<string.h>

int main()
{
    int id, unit;
    float rate,fchg=0,gamt,amt;
    char name[35];
    
    printf("Input Costumer ID:");
    scanf("%d", &id);
    printf("\nCustomer Name:");
    scanf("%s",&name);
    printf("\nCustomer Unit consumed: ");
    scanf("%d",&unit); 
    
    
     if(unit<=249)
         rate=1.50;
     else if(unit>=250 && unit<400)
         rate=1.60;
     else if(unit>=450 && unit<600)
         rate=1.85;
     else 
         rate=2;          
       
         gamt=unit*rate;
         if (gamt>250)
            fchg=gamt*10/100;
         amt=gamt+fchg;
         if (amt<400)
            amt=100;
            
    printf("\n-----------[Electric Bill]-----------\n");
    printf("Customer ID#                     :%d\n",id);
    printf("Customer Name                    :%s\n",name);
    printf("Unit Consumed                    :%d\n",unit);
    printf("Amount Charges @P.%4.2f per unit  :%8.2f\n",rate,gamt);
    printf("Surcharge Amount                 :%8.2f\n",fchg);
    printf("Total Customer Bill              :%8.2f\n",amt);
    printf("\n-----------[Electric Bill]-----------\n");

}

