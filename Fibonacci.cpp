#include <iostream>
using namespace std;
long long int calc(long long int n){
    return n<=1?n:(calc(n-1)+calc(n-2));
}
int main() {
    int n;
    //cin>>n;
    cout<<calc(50)<<endl;;
    return 0;
}
