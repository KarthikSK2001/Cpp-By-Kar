#include <iostream>
using namespace std;

int main()
{
    int n1, n2, ans;
    cin >> n1 >> n2;
    ans = (n1 > n2) ? n1 : n2;
    do
    {
        if (ans % n1 == 0 && ans % n2 == 0)
        {
            cout << "LCM = " << ans;
            break;
        }
        else
            ++ans;
    } while (true);
    
    return 0;
}
