int fibonacciSeries(int n){
    int a=0,b=1,temp;
    for(int i=2;i<n;i++){
        temp=a+b;
        printf("%d",temp);
        a=b;
        b=temp;
    }
    printf("\n");
}
