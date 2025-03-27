// Your code here..
void factorialRange(int start,int end){
    for (int i=start;i<=end;i++){
        if(i==0){
        printf("%d\n",1);
    }
    else{
        for(int n=1;n<=i;n++){
        printf("%d\n",n*=i); 
        }       
    }
    }

}