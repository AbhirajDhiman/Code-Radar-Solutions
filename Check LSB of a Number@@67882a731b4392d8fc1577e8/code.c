#include <stdio.h>
void checkLsb(int num){
    if(num & 1){
        printf("Set");
    }else{
        printf("Not Set");
    }
}
int main(){
    int a;
    scanf("%d",&a);
    checkLsb(a);
    return 0;

}