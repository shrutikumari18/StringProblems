#include<iostream>
using namespace std;

class Coding{
    public:
    string removeVowels(string& s){
        string res = "";
        for(int i =0; i< s.size(); i++){

            char ch = s[i];

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                continue;
            }
            res = res + ch;
        }
        return res;
    }
};
int main(){
    Coding solver;
    string s = "shruti";
    string res = solver.removeVowels(s);
    cout<<res;
}