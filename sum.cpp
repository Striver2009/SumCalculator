/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(1,0);
    
   cout<<"to stop program type 0"<<endl;
    int i;
     int q;
  
/*******input***********/
    for(i=0;i>=0;i++){
        cout<<"Enter the number ";
        cin>>q;
        if(q==0){
            break;
        }
        
        v.push_back(q);
        
       
    }
/***********************/
/*******Processing***********/
int sum=0;
for(int k=0;k<v.size();k++){
    sum+=v[k];
}
cout<<sum;
    return 0;
}
