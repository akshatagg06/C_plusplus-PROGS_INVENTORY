/*

*         ***********
*         *          
*         *          
*         *          
*         *          
*         *          
*         *          
*         *          
*         *          
*         *          
*********************
          *         *
          *         *
          *         *
          *         *
          *         *
          *         *
          *         *
          *         *
          *         *
***********         *

*/

#include <iostream>
using namespace std;

int main() {
	int n,i = 1,j;
	cin>>n;
	
	//for first row
	   cout<<"*";
	        
	   for(j = 2; j<=n/2; j++){
          cout<<" "; 
       }
	        
	   for(j = n/2 + 1; j<=n; j++){
	       cout<<"*";
	   }
	        
	   cout<<endl;
	   
	//middle - 1
	for(i = 2; i <= n/2; i++){
	   cout<<"*";
	        
	   for(j = 2; j<=n/2; j++){
          cout<<" "; 
       }
       
       cout<<"*";
       
       for(j = n/2 + 2; j<=n; j++){
           cout<<" ";
       }
       cout<<endl;
	}
	
	//full one
	for(j = 1; j<=n; j++){
	    cout<<"*";
	}cout<<endl;
	
	//middle - 2
	for(i = (n/2 + 2); i<= n-1; i++){
	    for(j = 1; j<=n/2; j++){
	        cout<<" ";
	    }
	    
	    cout<<"*";
	    
	    for(j = n/2 + 2; j<=n-1; j++){
           cout<<" ";
        }
        
        cout<<"*";
        cout<<endl;
	}
	
	//last row
	    for(j = 1; j<=(n/2 + 1); j++){
	        cout<<"*";
	    }
	    
	    for(j = n/2 + 2; j<=n-1; j++){
           cout<<" ";
        }
            
        cout<<"*";
        cout<<endl;
	
	return 0;
}





