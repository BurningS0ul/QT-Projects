#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    string A = "A";
    string B = "B";
    string C = "C";

    string copyA(A);
    string copyB(B);
    string copyC(C);

    enum BlockNamen_SP {
        Mo1, Mo2, Mo3, Mo4, Mo5, Mo6, Mo7,
        Di1, Di2, Di3, Di4, Di5, Di6, Di7,
        Mi1, Mi2, Mi3, Mi4, Mi5, Mi6, Mi7,
        Do1, Do2, Do3, Do4, Do5, Do6, Do7,
        Fr1, Fr2, Fr3, Fr4, Fr5, Fr6, Fr7,
        Sa1, Sa2, Sa3, Sa4, Sa5, Sa6, Sa7
    };
    // dazugehörige Namen als Strings
    static string s_blocknamen_SP[] = {
        "Mo1", "Mo2", "Mo3", "Mo4", "Mo5", "Mo6", "Mo7",
        "Di1", "Di2", "Di3", "Di4", "Di5", "Di6", "Di7",
        "Mi1", "Mi2", "Mi3", "Mi4", "Mi5", "Mi6", "Mi7",
        "Do1", "Do2", "Do3", "Do4", "Do5", "Do6", "Do7",
        "Fr1", "Fr2", "Fr3", "Fr4", "Fr5", "Fr6", "Fr7",
        "Sa1", "Sa2", "Sa3", "Sa4", "Sa5", "Sa6", "Sa7"
    };

    for (int i = 0; i < 42; i++) {
        cout << s_blocknamen_SP[i] << " ";
    }
    cout << endl;

    vector <string> DB;
    DB.push_back(copyA);
    DB.push_back(copyB);
    DB.push_back(copyC);

    for (int i = 0; i < DB.size(); i++) {
        cout << DB[i] << " ";
    }
    cout << endl;
    return 0;
}
