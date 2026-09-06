#include<iostream>
#include<algorithm>
using namespace std;

class Coding{
    public:
    bool isAnagram(string& s1, string& s2){

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if(s1 == s2) return true;
        return false;
    }
};
int main(){
    Coding solver;
    string s1 = "abcde";
    string s2 = "abcdef";
    if(solver.isAnagram(s1,s2)){
        cout<<"is anagram";
    }
    else{
        cout<<"not anagram";
    }
}