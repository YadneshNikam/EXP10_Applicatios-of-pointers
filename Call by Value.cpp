//yashrastogi exp-10
// 24070123135 call by value
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
output:
20
50
*/