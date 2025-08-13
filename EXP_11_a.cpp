//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

class cuboid
{
    public:
    int height = 2;
    int width = 3;
    int length = 5;
};

int main()
{
    cuboid c1;
    int vol = c1.height * c1.length * c1.width;
    cout << "Volume: " << vol;
}

/*
Output:
Volume: 30
*/