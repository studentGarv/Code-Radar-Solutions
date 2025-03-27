void factorialRange(int start,int end){
    /*if(i==0){
        printf("%d\n",1);
    }
    for (int i=start;i<=end;i++){
        for(int n=1;n<=i;n++){
        printf("%d\n",i*=n); 
        }  
    }
    */ 
    for (int i = start; i <= end; i++) {
        long long factorial = 1; // Use long long to handle larger numbers
        for (int n = 1; n <= i; n++) {
            factorial *= n;
        }
    }