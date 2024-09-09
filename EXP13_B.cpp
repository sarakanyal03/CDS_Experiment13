//SARA KANYAL
//23070123115
#include <iostream>
using namespace std;
class Fetch {
int num;
public:
Fetch(){
    num=3;
    //cout<<num<<endl;
}
Fetch(int x){
    num=x;
    //cout<<x<<endl;
}
Fetch(const Fetch& b){
    num=b.num;
}
void disp(){
    cout<<num<<endl;
}
};
int main(){
Fetch f1,f2(6),f3(f1);
f1.disp();
f2.disp();
f3.disp();
}