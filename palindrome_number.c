bool isPalindrome(int x) {
    int n,a;
    double sum=0;
    n=x;
    while(x>0)
   {  
        a=x%10;
        sum=sum*10+a;
        x=x/10;
    }

    if(sum==n)
       return true;
    else
       return false;
}