#include<iostream>
using namespace std;
int main(){
    int t,num;
    cin >> t;
    while(t--){
        cin >> num;
        int rev=0;
        while(num!=0){
            rev=num%10+rev*10;
            num/=10;
        }
        std::cout << rev << std::endl;
    }

    return 0;
}
