#include <bits/stdc++.h>

using namespace std;



int main()
{
  int t;
  int count;
  cin>>t;
  while(t--)
  {
      char in[100];
      int sz,te;
      
      cin>>sz>>te;
      
    //   for(int i=0; i<sz; ++i)
    //   {
    //       cin>>in[i];
    //   }
    cin>>in;
    int Ml, cflag;
      
    while(te--)
    {
        
        int start,end;
        cin>>start>>end;
        
        char Main[sz],reverse[sz];
        
       int ra=end-(start-1);
       
        
        for(int k=0, j =(start-1); j<=end; ++j ,++k )
        {
            
            Main[k]=in[j];
           Ml=k;
           
        }

        
        
        for (int fl=0, k=0 , j=Ml-1; j>=0; --j,++k)
    
        
        {
           
            reverse[k]=Main[j];

            if(Main[k]==reverse[k])
            {
                fl+=1;

                cflag=fl;
               
                
            }
            
           
        }
        
    } 
    
   
    
    if(cflag==Ml)
    {
        count+=1;
    }
  }
  
  cout<<count;
    return 0;
}