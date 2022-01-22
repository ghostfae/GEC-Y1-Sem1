#include <iostream> 
using namespace std;

int main()
{
    int hariboStash = 40;
    int students = 14;

    int hariboEach = hariboStash / students;
    int hariboLeft = hariboStash % students;

    cout << "Each student gets " << hariboEach << " packets." << endl;
    cout << "There are " << hariboLeft << " left." << endl;
}