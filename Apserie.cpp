//Method 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i+=2){
//         cout<<i<<" ";
//     }

// return 0;
// }




// Method 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a=27;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a+=13;
    }
return 0;
}
