int factorialRange(int start,int end){
    if (start<0||end<start){
        printf("Invalid range");
    }
    else{
        for(i=start;i<=end;i++){
        if(i==0){
            printf("%d",1);
            continue;
        }
        int no=1;
        for(n=i;n<=end;n++){
            no*=n;
        }
        return no;
    }
  }
}
   