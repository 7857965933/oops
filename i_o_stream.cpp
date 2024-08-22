// #include<iostream>
// using namespace std;
// #include<fstream>
// 
// int main()
// {
    // ofstream out("abc.txt",ios::app);
    // out<<"prashant"<<endl;
    // out<<"bhushan"<<endl;
    // out<<"12345678"<<endl;
    // out<<"12345678"<<endl;
    // out<<"12345678"<<endl;
// 
    // return 0;
// }



//! Now reading data from file:-


#include<iostream>
using namespace std;
#include<fstream>

int main()
{
    ifstream ifs;
    ifs.open("abc.txt");
    string str1;
    string str2;
    int a;
    ifs>>str1;
    ifs>>str2;
    ifs>>a;
    ifs.close();
    cout<<str1<<" "<<str2<<" "<<a<<endl;

    if(!ifs.eof())
    cout<<"true"<<endl;

   // if(ifs)/* for checking is file open or not*/
   // cout<<"true"<<endl;

   //if(!ifs.is_open()) // true message print out if file will not open:-
   //cout<<"true"<<endl;

   
    return 0;
}
