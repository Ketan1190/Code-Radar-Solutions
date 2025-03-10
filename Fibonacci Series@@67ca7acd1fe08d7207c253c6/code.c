void fibonacciSeries(int n){
    int a=0;
    int b=1;
    
    for(int i=1;i<=n;i++){
        printf("%d",a);
        int temp=a+b;
        
        a=b;
        b=temp;


    }
}