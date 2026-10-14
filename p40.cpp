#include<iostream>
#include<string>
#include<cctype>
using namespace std;

class Solution{
    public:
        bool isPalindrome(string s){
            int a=0;
            int b=s.length()-1; 

            while(a<b){
                while(a<b && !isalnum(s[a]))
                    a++;
                while(a<b && !isalnum(s[b]))
                    b--;
                s[a]=tolower(s[a]);
                s[b]=tolower(s[b]);

                if(s[a]!=s[b])
                    return false;
                a++;
                b--;
            }
            return true;
        }

   
    

};

int main(){
    string str;
    bool result;
    Solution s1;
    cout<<"Enter the string: ";
    getline(cin, str);
    result=s1.isPalindrome(str);
    // cout<<boolalpha<<s1.isPalindrome(str)<<endl;

    if(result){
        cout<<"The String is Palindrome."<<endl;
    }
    else
        cout<<"String is not a Palindrome. "<<endl;

}

