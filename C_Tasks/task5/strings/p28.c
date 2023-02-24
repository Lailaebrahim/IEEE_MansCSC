#include <stdio.h>
#include <stdlib.h>
#define MAX 100
size_t FindFword(const char * str , const char * word);
int main()
{   char str[MAX];
    char word[MAX];
    size_t wordIndex;
    puts("Enter a string :");
    fgets( str , MAX , stdin);
    puts("Enter a word to find it's first occurrence:");
    fgets( word , MAX , stdin);
    wordIndex = FindFword(str , word);
    printf("The first occurrence of word '%s' is at index %d.", word ,wordIndex );
    return 0;
}
size_t FindFword(const char * str , const char * word){
       size_t i ;
       int found ;
       for(i = 0 ; str[i] != '\0' ; i ++){ /* loop the string ti find matching first letter of the word */
        if( str[i]==word[0]){
                found=1;
           for(int j = 0 ; word[j] != '\n' ; j++){ /*loop next chars in str without changing i "it saves the index where we found
                                                   word use i+j to compare word with coming letters of str */
                if(str[i+j] != word[j])
                {
                    found=0 ; /* if one char not matching then found=0 and get out of the inner loop and continue the outer loop
                              to search the whole string for another matching char to see next chars and so on */
                    break;
                }
                                                 }
                            }
                 if(found==1){
                    return i; }            }


}
