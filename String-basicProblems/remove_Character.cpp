#include<iostream>
#include<map>
using namespace std;

class Coding{
    public:
    string removeCharacter(string& s1, string& s2){

        map<char, int>mp;

        for(int i =0; i<s2.size(); i++){
            mp[s2[i]]++;
        }

        string ans = "";
        
        for(int i =0; i<s1.size(); i++){
            char ch = s1[i];

            if(mp[ch] == 0){
                ans = ans + ch;
            }
        }
        return ans;
    }
};
int main(){
    Coding solver;
    string s1 = "shruti";
    string s2 = "ruti";
    string ans = solver.removeCharacter(s1,s2);
    cout<<ans;

}