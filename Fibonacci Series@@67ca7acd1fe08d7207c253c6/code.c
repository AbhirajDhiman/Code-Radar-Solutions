void fibonacciSeries(int n){
    int a=0,b=1,temp;
    if(n<=0){
        return n;
    }
    if(n==1){
        return n;
    }
    for(int i=2;i<n;i++){
        temp=a+b;
        printf("%d",temp);
        a=b;
        b=temp;
    }
    printf("\n");
}
