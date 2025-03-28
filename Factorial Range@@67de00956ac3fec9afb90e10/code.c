int factorialRange(int start,int end){
    if (start<0||end<start){
        printf("Invalid range");
    }
    else{
        for(int i=start;i<=end;i++){
        if(i==0){
            printf("%d",1);
            continue;
        }
        int no=1;
        for(int n=i;n<=end;n++){
            no*=n;
        }
        printf("%d\n",no);
    }
  }
}
   