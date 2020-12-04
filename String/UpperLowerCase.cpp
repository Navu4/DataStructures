#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "jdsbASbnsDDjkdks";
    cout << s << endl;
    // // Uppercase
    // for( int i = 0 ; i < s.size() ; i++){
    //     if( s[i] >= 'a' && s[i] <= 'z'){    
    //         s[i] -= 32;
    //     }
    // }
    // cout << "Uppercase : " <<s << endl;
    // // Lowercase 
    // for( int i = 0 ; i < s.size() ; i++){
    //     if( s[i] >= 'A' && s[i] <= 'Z'){    
    //         s[i] += 32;
    //     }
    // }
    // cout << "Loweercase : " << s << endl;

    // in-build function
    // toupper
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout << s << endl;

    // tolower
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout << s << endl;

    return 0;
}