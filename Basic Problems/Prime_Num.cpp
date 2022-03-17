#include <iostream>
using namespace std;

int main(){
int num;
cin>> num;
int i = 2;
while (i<num){
    if(num%i == 0){
        cout<< "This number is not a Prime Number"<< endl;
        break;
    }
    i = i+ 1;
}
if (i==num){
    cout<< "Prime"<< endl;
}
}