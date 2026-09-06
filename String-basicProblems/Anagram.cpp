#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

class Coding{
    public:
    bool isAnagram(string& s1, string& s2){

        map<char,int>mp1;
        map<char,int>mp2;

        for(int i = 0; i< s1.size(); i++){
            char ch = s1[i];
            mp1[ch]++;
        }
        for(int i = 0; i< s2.size(); i++){
            char ch = s2[i];
            mp2[ch]++;
        }

    if(mp1 == mp2) return true;
    return false;

    }
};
int main(){
    Coding solver;
    string s1 = "abdc";
    string s2 = "abdc";
    if(solver.isAnagram(s1,s2)){
        cout<<"is anagram.";
    }
    else{
        cout<<"not anagram.";
    }
}