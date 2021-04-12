#include <stdio.h>

// checking credentials
int check_info(int id_numbers, int pins);

//login message
void login(int login_status,int id_number);

int main()
{
    //First variables
    int id_number, temp_pin, temp_status;
    
    
    printf("Enter Your ID NUMBER: ");
    scanf("%d", &id_number);
    
    printf("Enter Your PIN: ");
    scanf("%d", &temp_pin);
    
    //pass arg 
    temp_status = check_info(id_number,temp_pin);
    
   //pass the return value
    login(temp_status,id_number);
    
    return 0;
}

int check_info(int id_numbers, int pins)
{
    //variables 
    int 
    id_number_1 = 1100, pin_1 = 5555,
    id_number_2 = 0011, pin_2 = 4444,
    id_number_3 = 0001, pin_3 = 3333;
    
    //checks the pass arg is valid
    //using AND if both id and pin are true it will return 1;
    if (id_numbers == id_number_1 && pins == pin_1)
    {
        return 1;
    }
    
    else if (id_numbers == id_number_2 && pins == pin_2)
    {
        return 1;
    }
    
    else if (id_numbers == id_number_3 && pins == pin_3)
    {
        return 1;
    }
    // if either id or pass is not true, return 2
    else
    {
        return 2;
    }
    
}

void login(int login_status,int id_number)
{
    // if value is return 1 tell the user success msg
    if(login_status == 1)
    {   
        printf("\nYou have successfully Logged In!\n ID#: %d",id_number);
    }
    else
    {
       printf("\nInvalid ID/PIN."); 
    }
}
