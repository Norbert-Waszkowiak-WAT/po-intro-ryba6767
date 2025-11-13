#include <iostream>
using namespace std;
class point{
    public:
    int x;
    int y;
    void print(){
cout << "{" << x << "," << y << "}" << endl;
    }
};
int main(){
    point a;
    a.x=2;
    a.y=4;
    a.print();

     point b;
    b.x=4;
    b.y=1;
    b.print();
        point c;
    c.x=9;
    c.y=0;
    c.print();
return 0;
}