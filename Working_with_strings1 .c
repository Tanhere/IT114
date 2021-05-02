#include<stdio.h>
#include<string.h>

int main()
{

    char strng[200];
    int i,vow=0,con=0,spc=0;

//taking user input
    printf("Input a Sentence:");
    fgets(strng,sizeof(strng),stdin);

    for(i=0; strng[i]!='\0'; i++)
    {
        if(strng[i]=='a'|| strng[i]=='A'||strng[i]=='e'|| strng[i]=='E'||strng[i]=='i'|| strng[i]=='I'||strng[i]=='o'|| strng[i]=='O'||strng[i]=='u'|| strng[i]=='U')
         {
        vow++;
        strng[i]=strng[i]-32;
           
        }
       else if(strng[i]== ' ')
        {
        spc++;
        }
        else
        con++;
            
    }  
    
    printf("String Converted:");
    puts(strng);
    printf("String Length: %zu\n",strlen(strng));
    printf("Vowels: %d",vow);
    printf("\nConsonants: %d\n",con-1);
   
    



    return 0;
}