#include <iostream>
#include <string>
using namespace std;

int main (){
    string s1{"happy"};
    string s2{"birthday"};
    string s3;

    cout << "sl is \""<<s1<<"\";s2 is \""<<s2<< "\"; s3 is \"" << '\"'
<< "\n\nThe results of comparing s2 and s1:" << boolalpha
<< "\ns2 == s1 yields " << ( s2==s1)
<< "\ns2 != s1 yields " << (s2 !=s1 )
<< "\ns2 > s1 yields " << (s2 > s1 )
<< "\ns2 < s1 yields " << (s2 < s1 )
<< "\ns2 >= s1 yields " << (s2>=s1 )
<< "\ns2 <= s1 yields " << ( s2<=s1);

cout << "\n\n Testing s3.empty():\n";

if (s3.empty()){
    cout<< "s3 in empty: assigning s1 to s3 ; \n";
    s3=s1;
    cout<< "s3 is \""<< s3 <<"\"";

}
cout<< "\n\ns1 += s2 yields s1 = ";
s1+=s2;
cout << s1;
cout << "\n\ns1 +=\" to you\"yields\n"






}