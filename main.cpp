#include <iostream>

using namespace std;

int f(int n){
    if (n>1) {
        return f(n-1)+f(n-2);
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
        cout<<f(i)<<" ";
    }
    cout<<endl;
    return 0;
}

