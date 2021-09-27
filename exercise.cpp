#include<iostream>
using namespace std;

class smallone
{public:
smallone(int sma) 
{ cout<<"sm constr:"<<sma<<"\n";}
};
void fn(int n) 
{ static smallone sm(n);
cout<<"in function fn with n="<<n<<endl;
}
int main()    
{  fn(10);      
   fn(20); 
return 0;
}
