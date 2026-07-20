bool isPalindrome(int x) {
    int x1;
    double s1=0;
    x1=x;
    while(x1>0)
    {
        int s=x1%10;
        
        s1=s1*10+s;
        x1=x1/10;
    }
    
    if(s1==x)
    return true;
    else
    return false;
    
   
}