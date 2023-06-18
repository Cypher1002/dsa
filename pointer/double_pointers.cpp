#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int i =6;
     int *p = &i;
     
//double poiner
     int **ptr2 = &p ;
    /*  cout<<"printing p:"<<p<<endl;
      cout<<"address of p:"<<&p<<endl;
cout<<*ptr2<<endl;
*/

cout<<i<<endl;
cout<<*p<<endl;
cout<<**ptr2<<endl;



      return 0;
}