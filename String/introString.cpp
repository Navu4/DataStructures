#include<iostream>
#include<string>
// #include<algorithm>

using namespace std;

int main(){
    
    //  Input Type 1
    // ------------------------------------
    // string str;
    // cin >> str;
    // cout << str;
    // ------------------------------------


    //  Input Type 2
    // ------------------------------------
    // string str1 = "NavjotSingh";
    // string str1(5,'n');
    // cout << str1 << endl;
    // ------------------------------------

    //  Input Type 3
    // ------------------------------------
    // string str;
    // getline(cin, str);
    // cout << str << endl ;
    // ------------------------------------

    // Functions of Strings
    // ------------------------------------
    
    // append string
    // ------------------------------------
    // string s1 = "fam";
    // string s2 = "ily";

    // // s1.append(s2);
    // // s1 = s1 + s2; 
    // // cout << s1 << endl; 
    // ------------------------------------

    // Access Single character
    // cout << s1[1] << endl;
    // ------------------------------------


    // //  Clear Function
    // ------------------------------------
    // string abc = "sadasfasd dasd ads";
    // abc.clear();
    // cout << abc << endl;
    // ------------------------------------

    // Compare Function
    // ------------------------------------

    string s3 = "abc";
  	string s4 = "xyz";

  	cout << s4.compare(s3) << " " << "a" - "A" << endl;
    
    // // if( s1.compare(s2) == 0){
    // //     cout <<"String are equal";
    // // }
    // if( !s1.compare(s2)){
    //     cout <<"String are equal";
    // }
    //------------------------------------

    // Empty Function
    // ------------------------------------
    // string s1 = "abc",s2 = "xyz";
    // cout << s1 << endl;

    // s1.clear();

    // if(s1.empty())
    //     cout << "String is empty" << endl;
    // if(!s2.empty())
    //     cout << "String is not empty" << endl;
    // ------------------------------------

    // Erase Function
    // ------------------------------------
    // string s1 = "nincompop";
    // s1.erase(3,2);
    // cout << s1 << endl;
    // ------------------------------------

    // Find String
    // ------------------------------------
    // string s1 = "nincompoop";
    // cout << s1.find("poo") << endl;
    // ------------------------------------

    // Insert Functin
    // ------------------------------
    // string s1 = "nincompoop";
    // s1.insert(2,"lol");
    // cout << s1 << endl;
    // ----------------------------------

    // Length and size function
    // ----------------------------------
    // string s1 = "nincompoop";
    // cout << s1.length() << endl;
    // // cout << s1.size() << endl;
    // for ( int i =0 ; i < s1.length(); i++){
    //     cout << s1[i] << endl;
    // }

    //----------------------------------------


    // Substring function
    // ---------------------------------------
    // string s1 = "nincompoop";
    // string s = s1.substr(6,4);
    // cout << s << endl;

    // --------------------------------

    // String to Integer
    // string s1 = "786";
    // int x = stoi(s1); // String to Integer

    // cout << x+2 << endl;

    // Integer to String
    // int x = 786;
    // //  to_string(x) converts Integer to string
    // cout << to_string(x) + "2" << endl;

    // -------------------------------------

    // Sorting of String
    // --------------------------------------
    // string s1 = "dasdasdasdasdasd";
    // sort(s1.begin(),s1.end());

    // cout << s1 << endl;
    // --------------------------------------
    return 0;
}