#include <stdio.h>
#include <string.h>


///loops


int array_size(char s[]) {
   int i = 0;

   while(s[i]!='\0')
      i++;

   return i;	
}
//hello world

//dlorw olleh

// world hello 

char reverse1(char st[]) {
   int i,j;
   char ch;

   j = array_size(st) - 1;
   i = 0;

   while(i < j) {
      ch = st[j];
      st[j] = st[i];
      st[i] = ch;
      i++;
      j--;
   }
}

int main () {

  //  variables
    char m_array[100],reverse2[100], temp[100];
    int i , j,n;
    
    //print in screen getting user data
    
    printf("Enter Strings:");
    fgets(m_array,sizeof(m_array),stdin);
   
      array_size(m_array);
    
   n = array_size(m_array);
    
    
    //loop
   for(i = n-1; i >= 0; --i) {

      for(j = 0; i >= 0 && m_array[i] != ' '; --i,++j)
         temp[j] = m_array[i];

      reverse1(temp);
      
      strcat(reverse2,temp);
      
   }
    /// printing arrays
   printf("Original - %s\n", m_array);
   printf("Reversed - %s\n",reverse2);

   return 0;
}