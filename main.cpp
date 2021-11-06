//For each integer n in the inclusive interval a-b:

//If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
//Else if  and it is an even number, then print "even".
//Else if  and it is an odd number, then print "odd".

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    string intMap[10]= {"zero","one", "two","three","four","five","six","seven","eight","nine"};
    for(int i = a; i <= b; i++) {
        if(i<=9){
            cout<<intMap[i]<<endl;
        }
        else if (i%2==0){
            cout<<"even"<<endl;
        }
    }
    return 0;
}