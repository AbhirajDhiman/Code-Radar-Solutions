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
    int get=0;
    for(int i=start;i<=end;i++){
        if(isPrime(i)){
            printf("%d ",i);
            get=1;
        }
    
    }
    if(!get){
        printf("No prime numbers");
    }
    printf("\n");
}