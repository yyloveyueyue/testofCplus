#include <iostream>
#include <string>
using namespace std;

class Building;
class goodGay
{
public:
    goodGay();
    void visit();

private:
    Building *building;
};

class Building
{
    friend class goodGay;

public:
    Building();

public:
    string m_SittingRoom;

private:
    string m_BedRoom;
};

goodGay::goodGay()
{
    building = new Building;
}

void goodGay::visit()
{
    cout << "good guy is visiting: " << this->building->m_SittingRoom << endl;
    cout << "good guy is visiting: " << this->building->m_BedRoom << endl;
}

Building::Building()
{
    this->m_SittingRoom = "SittingRoom";
    this->m_BedRoom = "Bedroom";
}

void test()
{
    goodGay gg;
    gg.visit();
}

int main()
{
    test();
    system("pause");
    return EXIT_SUCCESS;
}