  long long int temp=x;
        long long  rev=0,rem,ans=0;
        if(x<0) return 0;
        if(x==0)return 1;
        int i=0;
        while(x>0)
        {//121
            
         rem=x%10;//0 1
            ans=ans*10+rem;//10
            x=x/10;//1
            

        }
        if(ans==temp)
        return 1;
        else
        return 0;
