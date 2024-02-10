// 5. Program to count vowels and consonants in a string using pointer. 

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]){
    char vowels[10] = "AEIOUaeiou";
    char word[50] = {"\0"}; 

    int vowels_count = 0, consonents_count = 0; 
    printf("Enter Word: "); 
    scanf("%s", &word);

    char *ptrw; 
    ptrw=&word; 
    // printf("%s\n", word);
    for (int i = 0; i < strlen(word); i++)
    {
        for (int j = 0; j < strlen(vowels); j++)
        {
            if (*(&ptrw[i]) == vowels[j])
        {
            // printf("%d Found\n", +1);
            vowels_count++; 
        }
        else
        {
            continue;
        }
        
        }   
    }

    consonents_count = strlen(word) - vowels_count; 

    printf("No. of Vowels = %d\n", vowels_count);
    printf("No. of Consonents = %d\n", consonents_count);

    // printf("%d", strchr(word, 'A')); 
    return 0;
}