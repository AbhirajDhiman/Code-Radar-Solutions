// Your code here...
int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void printPrimesInRange(int start,int end){
    for(int i=start;i<end;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    
    }
    printf("\n");
}