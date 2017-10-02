#include<iostream>
#include<tuple>
#include<string>

using namespace std;
int main(){
tuple<int,string> b {10,"hello"};
cout<<get<0>(b)<<"  "<<get<1>(b)<<endl;
return 0;
}
