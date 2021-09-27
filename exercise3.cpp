#include<iostream>

using namespace std;
template<class newtype>

class Compare{
    private:
    newtype x,y;
    public:
    Compare(newtype a,newtype b):x(a),y(b){};
    newtype max(){
        return (x>y)?x:y;
    };
    newtype min(){
        return (x<y)?x:y;
    };
};

int main(){
    int a,b;
    cin>>a>>b;
    Compare <int> compare1(a,b);
    cout<<compare1.max()<<" "<<compare1.min()<<endl;

    float c,d;
    cin>>c>>d;
    Compare<float> compare2(c,d);
    cout<<compare2.max()<<" "<<compare2.min()<<endl;

    char e,f;
    cin>>e>>f;
    Compare<float> compare3(e,f);
    cout<<compare3.max()<<" "<<compare3.min()<<endl;
   
    return 0;
}