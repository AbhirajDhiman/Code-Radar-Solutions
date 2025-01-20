#include <stdio.h>
int main(){
    float a;
    scanf("%f", &a);
    printf("You entered: %f", a);
    if(a==0.0){
        printf("You entered: 0.0");
    }
    return 0;
}