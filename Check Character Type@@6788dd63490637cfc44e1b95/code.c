#include <stdio.h>

int main(){
    char ch;
    char vowels[]=aeiouAEIOU;
    scanf("%c",&ch);
    int uvowels=0;
    for(int i=1;i<10;i++){
        uvowels+=1;
        break;
    }
    if(uvowels){
        printf("Vowel");
    }else{
        printf("Consonats");
    }
    return 0;
}