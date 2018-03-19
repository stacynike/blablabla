#include <iostream>
#include <math.h>
using namespace std;
int nod(int,int);
int nok(int, int);


int main()
{   int a, b;
    cout<<"Enter a and b\n";
    cin>>a>>b;
    if (a<0 || b<0)
        cout <<"The programm can't be completed\n";
    else     
    {
    nod(a,b);
    cout<<"NOD of the a, b = "<<nod(a,b)<<endl;
    nok(a,b);
    cout<<"NOK of the a, b ="<<nok(a,b)<<endl;
    }
	system("pause");
	return 0;
} 
 int nod (int x, int y)
 { int z;
    if (x>y)
       {
           if (y==0)
           z=x;
           else 
           {
            while(x%y!=0) 
             { z=x%y;
               x=y;
              y=z;
             } 
             return y;
           }  
       }
    else 
     {  if (x==0)
         z=y;
         else 
         {
             while (y%x!=0)  
             { z=y%x;
               y=x;
               x=z;
              } 
            return x; 
         }    
     }
   return z;
   }
  int nok(int x, int y)
  { 
      int z;
      z= (x*y)/(nod(x,y));
      return z;
  }   
      
