#include <iostream>
using namespace std;
int add (int a, int b) {
return a+b;
}
double add (double a, int b) {
    return a+b;
}
int main(){

cout<<"Add two integers:"<<add (10,20)<<endl;
cout<<"Add double and integer : "<< add (5.5, 10)<< endl;

return 0;
}
