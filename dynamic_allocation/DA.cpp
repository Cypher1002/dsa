#include<bits/stdc++.h>
using namespace std;
//passby value no value update
void update(int n){//copy of n made
    n++;
}


//pass by refrence 
void update1(int &n ){//same memeory refered
    n++;
}

int main(){

    /*
int i =5;
//create  a refrence variable;

int &j = i;
cout<<i<<endl;
j++;

cout<<j<<endl;
    return 0;
*/

int n=7;
cout<<"before:"<<n<<endl;
update1(n);
cout<<"after:"<<n<<endl;


}