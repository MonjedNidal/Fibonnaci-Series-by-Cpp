#include <iostream>

using namespace std;

//integer function (fibo) with recursion to return the series.
int fibo(int n){
    if (n>1) {
        return fibo(n-1)+fibo(n-2);
    }
    else if (n==1) return 1;
    else return 0;
}

int main(){

    int terms;
    cout << "Enter number of terms : ";
    cin >> terms;

    cout<<"Fibonnaci Series : ";
    for (int i=0;i<=terms;i++){
        cout<<fibo(i)<<" ";
    }
    cout<<endl;
    return 0;
}

