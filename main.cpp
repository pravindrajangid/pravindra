#include <iostream>
using namespace std;

int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

int main(){
    int N; cout<<"Enter N: "; cin>>N;
    cout<<"Fibonacci series up to "<<N<<" terms:\n";
    for(int i=0;i<N;i++) cout<<fib(i)<<(i+1==N? "\n":" ");
    return 0;
}
