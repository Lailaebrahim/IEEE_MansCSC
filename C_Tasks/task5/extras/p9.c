#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
void Count( char *str);
int main()
{ char str[MAX];
  printf("%s" ,"Enter a string :\n");
  fgets(str , MAX , stdin);
  Count(str);
  return 0;
}


void Count( char *str){
int vowels=0 , consenant=0 ;
 for(int i = 0 ; i<strlen(str) ;i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) /* checking whether it's an alphabet or not to not count white space */
        {
              if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
                 {
                      vowels++;

                 }

              else{
                     consenant++;
                   }
        }
                                   }
printf("consenant:%d \n", consenant);
printf("vowels:%d \n", vowels);
return ;
}

