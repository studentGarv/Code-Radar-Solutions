void factorialRange(int start,int end){
        if(i==0){
        printf("%d\n",1);
        int i=1;
    }
    else{
        for (int i=start;i<=end;i++){
        int no=1;
        for(int n=1; n<=i;n++){
            printf("%d\n",no*=n);
        }
          
    }   
    }
}