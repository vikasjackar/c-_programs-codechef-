 int lol=0,flg=false,c=0;
       for(int i=0; i<arr.size(); i++)
       {
           if(arr[i]==0)
           {
               if(lol>0)
               c++;
              
               
               lol=0;
               
           }
           else
           lol++;
           
           
       }
       if(lol==arr.size())
       return -1;
       
       if(lol!=0)
       c++;
       
       return c;
