#include <iostream> //iostream used for inputting and outputting
#include <ctime> //ctime used for seeding
#include <cstdlib>
using namespace std;

const int MAX_CHIPS = 50;

int main()
{
    bool p1Turn = true;
    bool gameOver = false;

    int totalChips = 0;
    int numPlayers = 0;
    srand(time(0));
    cout << "Instructions: The goal of Nim is to take turns removing chips from a pile.\
    The one to take the last chip loses.\n";
    totalChips = (rand() % MAX_CHIPS) + 1;

    cout << "How many players?";
    cin >> numPlayers;
    string playerNames[numPlayers];

    
    cout << "There are this many chips in the pile: " << totalChips << endl;
    return 0;
}