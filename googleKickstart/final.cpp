#include <bits/stdc++.h>

using namespace std;

int watson(int ta){

      int count=0;
      char in[100];
      int sz,te;
      
      cin>>sz>>te;
      
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
            if(cflag==Ml)
              {
                 count+=1;

             }
        
    } 
    
    
   
    
    return count;
  }


int main()
{

        int t,ta=1;
 
  cin>>t;
  while(t--)
  {
    cout<<"case #"<<ta<<" :-"<<watson(ta)<<endl;
    ta++;
  }
  
  
  
    return 0;
}