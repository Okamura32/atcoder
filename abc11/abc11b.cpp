// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <cctype>

using namespace std;
int main(){
  char s[15]; cin>>s;
  for(int i=0;i<(int)(strlen(s));i++){
    if(i==0){
      s[i]=toupper(s[i]);
    }else{
      s[i]=tolower(s[i]);
    } 
  }
  cout<<s<<endl;
}