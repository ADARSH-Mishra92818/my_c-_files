#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(char row = 'A';row<='D';++row){
        for(int i=1;i<=n;++i){
            cout<<row<<"";
        }
        cout<<endl;
    }
}
