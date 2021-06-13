//============================================================================
// Name        : PatternV.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  char ch;
  cin>>ch;
  int n=5;
  if(ch=='V'){

    for(int i=1;i<=n;i++){
      int k=1;
      for(int j=1;j<=10;j++){
        if(j<=i || j>=11-i){
          cout<<k;

        }else{
          cout<<" ";
        }
       if(j<5)k++;
       if(j>5)k--;
      }
      cout<<endl;
    }
  }

  return 0;
}
