#include<bits/stdc++.h>
using namespace std;

string unCommon(string s1, string s2){
    int i=0,j=0;
    while(i<s1.size()&&j<s2.size()){
        if(s1[i]==s2[j]){
            j++;
        }
        i++;
    }
    return j==s2.size()?"":s2.substr(j,s2.size());
}
void SCS(vector<string>&v){
    int n=v.size();
    string res=v[0];
    for(int i=1;i<n;i++){
        res+=unCommon(res,v[i]);
    }
    cout<<"Ans: "<<res<<endl;
    cout<<"Size: "<<res.size()<<endl;

}

int main(){
    vector<string> v={"aggtab","gxtxayb"};
    SCS(v);
}
