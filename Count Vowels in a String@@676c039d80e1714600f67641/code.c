// Your code here...
#include <stdio.h>
int main(){
    int i,vowel=0,consonant=0;
    char a[100];
    gets(a);
    for(i=0;a[i];i++){
        if(a[i]=='a' || a[i]='e'||a[i]=='i'||a[i]=='o'||a[i]=='u' || a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U');
        vowel++;
    }else{
        consonant++;
    }
    printf("%d",vowel);
    return 0;
}
