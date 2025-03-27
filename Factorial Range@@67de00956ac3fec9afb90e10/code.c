void factorialRange(int start,int end){
        if(start==0){
        printf("%d\n",1);
        int start=1;
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