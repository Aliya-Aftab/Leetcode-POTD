#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int possibleStringCount(string word) {
    int n=word.length();
    int ans=0;
    int count=1;
    for(int i=0;i<n-1;i++){
    if(word[i]==word[i+1]){
    count++;
    }
    else{
    ans+=count-1;
    count=1;
    }
    }
    if(count!=1)
    ans+=count-1;
    return ans+1;
    }
    
}; 
int main(){

}
