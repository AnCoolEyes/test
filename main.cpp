#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){

   
    cout<<"hello world!:"<<endl;
   int n;
   cin>>n;
   cout<<n;
   vector<int> vec;
    for(int i = 0;i<=3;i++){
      int temp;
      cin>>temp;
      vec.push_back(temp);
    }
    for(int i = 0;i<=3;i++){
      cout<<vec.at(i)<<" ";
    }
   system("pause");
    return 0;
 }