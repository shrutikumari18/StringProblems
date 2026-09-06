#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Coding{
    public:
    bool isPalindrom(string& s){
        int i = 0;
        int j = s.size()-1;

        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
int main(){
    Coding solver;
    string s = "abfgbfba";
    if(solver.isPalindrom(s)){
        cout<<"Yes, Its palindrom";
    }
    else{
        cout<<" not palindrom.";
    }
}