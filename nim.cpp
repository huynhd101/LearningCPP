#include <iostream> //iostream used for inputting and outputting
#include <ctime> //ctime used for seeding
#include <cstdlib>
using namespace std;

int main()
{
    bool p1Turn = true;
    bool gameOver = false;

    int totalChips = 0;

    srand(time(0));

    totalChips = (rand() % 100) + 1;
    cout << "There are this many chips in the pile: " << totalChips << endl;
    return 0;
}