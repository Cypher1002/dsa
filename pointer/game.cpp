#include<bits/stdc++.h>
using namespace std;


int main(){
// int num = 5;
 
//  int *p = &num;
//  cout<<*p<<endl;
//  cout<<p<<endl;

// //copying a pointer
//  int *q = p;
//  cout<<q<<endl;
//  cout<<*q<<endl;


// //important concept
// int i =3;

// int *t = &i;
// cout<<(*t)++<<endl; 

//question 1
/*
float f = 10.5;
float p = 2.5;
float *ptr = &f;
(*ptr)++;
*ptr = p ;
cout<<*ptr<<" "<<f<<" "<<p; */

//question 2
/*
int a =4;
int b = 14;
int *c = &b;
*c = 7;
cout<<a<<" "<<b;
 aans == 4, 7; */


//question 3
int  a= 7;
int *c = &a ;
c = c+1;
cout<<c<<endl;




return 0;

}