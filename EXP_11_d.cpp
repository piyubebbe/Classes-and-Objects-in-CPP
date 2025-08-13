//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

class cuboid
{
    public:
    int height;
    int width;
    int length;

    public:
    void input()
    {
    cout << "Enter cuboid length: ";
    cin >> length;   
    cout << "Enter cuboid height: ";
    cin >> height;   
    cout << "Enter cuboid width: ";
    cin >> width;   
    }

    void volume()
    {
        int v = height * width * length;
        cout << "Volume: " << v;
    }
};

int main()
{
    cuboid c1;
    c1.input();
    c1.volume();
}

/*
Output:
Enter cuboid length: 10
Enter cuboid height: 20
Enter cuboid width: 30
Volume: 6000
*/