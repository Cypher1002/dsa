#include<bits/stdc++.h>
using namespace std;


int main(){

    //creation
unordered_map<string ,int > n;

//insertion 
pair<string,int> m =  make_pair("mehul", 3);
n.insert(m);

//3=2ND WAY 
n["mera"] = 1;

//search
cout<<n["mera"]<<endl;
cout<<n["mehul"]<<endl;
cout<<n.at("mehul");

//to check presence 
cout<<n.count("adad");

//to erase 
 cout<<n.erase("mehul");

 for(auto : i){
     cout<<i.first<<" " <<i.second<<endl;
 }


return 0;

}

