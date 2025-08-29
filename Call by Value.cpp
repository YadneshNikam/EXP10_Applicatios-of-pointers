//Yadnesh Nikam
// 24070123134
#include <iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main() {
    int a=20,b=50;
    swap(a,b);
    cout<<a<<endl<<b;
}
/*

20
50

*/
