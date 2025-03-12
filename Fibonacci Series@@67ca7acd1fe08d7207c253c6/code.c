void fibonacciSeries(int n){
    int a=0,b=1,temp;
    if(n<=0){
        return;
    }
    if(n==1){
        printf("0");
    }
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++){
        temp=a+b;
        printf("%d ",temp);
        a=b;
        b=temp;
    }
    printf("\n");
}
