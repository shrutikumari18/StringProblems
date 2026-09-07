#include<iostream>
#include<algorithm>
using namespace std;

class Coding{
    public:
    string encryptString(string s){

        int i = 0;
        int n = s.size();

        string ans = "";

        while(i< n){
            char ch = s[i];
            int count = 0;


            while(i < n && s[i] == ch){
                i++;
                count++;
            }
            ans += ch;
            ans += to_string(count);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
    Coding solver;
    string s = "aaabcc";
    string ans = solver.encryptString(s);
    cout<<ans;
}