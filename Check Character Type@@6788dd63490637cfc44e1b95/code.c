#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    char vowels[]="aeiouAEIOU";
    scanf("%c",&ch);
    int uvowels=0;
    for(int i=0;i<100;i++){
        if(ch==vowels[i]){
        uvowels=1;
        break;
        }
    }
    if(uvowels){
        printf("Vowel");
    }else if(isalpha(ch)){
        printf("Consonant");
    }else if(isdigit(ch)){
        printf("Digit");
    
    }else{
        printf("Special Character");
    }
    return 0;
}