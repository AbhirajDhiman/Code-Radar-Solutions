// Your code here...+
int factorialRange(int start,int end){
    int factorial=1;
    for(int i=start;i<=end;i++){
        factorial*=i;
    }

    printf("%d\n",factorial);

    return factorial;
}