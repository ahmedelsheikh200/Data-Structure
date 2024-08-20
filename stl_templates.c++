// standard template library
#include<iostream>
using namespace std;

// create template class
template<typename T>
class Calculator{
public:
    T subtract (T a , T b){
    return a - b;
}
T add (T a , T b){
    return a + b;
}
};

 int main(){
    Calculator<int >intCalculater;
    Calculator<float>floatCalculater;
    cout<<floatCalculater.add(5.3 ,2.4)<<endl;
    cout<<intCalculater.add(5 ,2)<<endl;
    cout<<floatCalculater.subtract(5.3 ,2.4)<<endl;
    cout<<intCalculater.subtract(5 ,2)<<endl;


 }