//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

class cuboid
{
    private:
    int height = 2;
    int width = 3;
    int length = 5;

    public:
    int volume()
    {
        int v;
        v = height * width * length;
        return v;
    }
};

int main()
{
    cuboid c1;
    int vol = c1.volume();
    cout << "Volume: " << vol;
}

/*
Output:
Volume: 30
*/