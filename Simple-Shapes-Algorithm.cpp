#include <iostream>
#include <cmath> 
using namespace std; 
int main() {  
  int x[4], y[4];
  char next;
  int count; 
  
  for(count=0; count<4; count++){
    cout << "Enter coordinates?";
    cin >> next;        
    
    if(next=='Y'){
      cout << "\nEnter X" << count+1 << "=";      
      cin >> x[count];            
      
      cout << "\nEnter Y" << count+1 << "=";
      cin >> y[count];   
    }else{      
      cout << "\nOk, we have " << count << " coordinates";
      break;    
    } 
  }
    
  if(count==4){    //distance between 2 points        
    double term1 = pow((x[1]-x[0]),2);
    double term2 = pow((y[1]-y[0]),2);
    
    double d1 = sqrt(term1+term2);
    
    term1 = pow((x[3]-x[2]),2);
    term2 = pow((y[3]-y[2]),2);
    
    double d2 = sqrt(term1+term2);
    
    term1 = pow((x[2]-x[0]),2);    
    term2 = pow((y[2]-y[0]),2);        
    
    double d3 = sqrt(term1+term2);
    
    term1 = pow((x[3]-x[1]),2);    
    term2 = pow((y[3]-y[1]),2);        
    
    double d4 = sqrt(term1+term2); 
    
    if(d1==d2 && d2==d3 && d3==d4){      
      cout << "\nSquare!";    
    }else if(d1==d2 && d3==d4){
      cout << "\nRectangle!"; 
    } else{      
      cout << "\nNot a simple shaple!";    
    }
   } else if(count == 3){ 
     double term1 = pow((x[1]-x[0]),2);   
     double term2 = pow((y[1]-y[0]),2);       
     
     double d1 = sqrt(term1+term2);
     
      term1 = pow((x[2]-x[0]),2);
      term2 = pow((y[2]-y[0]),2);
      
      double d2 = sqrt(term1+term2); 
      
      term1 = pow((x[2]-x[1]),2);    
      term2 = pow((y[2]-y[1]),2);   
      
      double d3 = sqrt(term1+term2);    
      
      if(d1!=0 && d2!=0 && d3!=0){      
        cout << "\nTriangle!";    
      }else{       
        cout << "\nNot a simple shaple!";
        }      
      } else {      
        cout << "\nNot a simple shaple!";  
      }        
        return 0; 
  }
