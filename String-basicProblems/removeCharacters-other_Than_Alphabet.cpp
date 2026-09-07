#include<iostream>
using namespace std;
class Coding{
    public:
    string removeSpecialCharacters(string& s){
        string res = "";

        for(int i =0; i<s.size(); i++){
            char ch = s[i];

            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){

                res+= ch;
            }
        }

        if(res.size() == 0) return "-1";
        return res;
    }
};
int main(){
    Coding solver;
    string s = "a5dfgh@#HJKFV90&";
    string res = solver.removeSpecialCharacters(s);
    cout<<res;
}