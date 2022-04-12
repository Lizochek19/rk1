

#include <iostream>
#include <string>

using namespace std;

string int_to_bin(int num, bool flag = false) {
    if (num == 0) return "0";
    string ans;
    if (flag || (!flag && num % 2 != 0)) ans = to_string(num % 2);
    return ans + int_to_bin(num / 2, true);
}
int main()
{
    cout << int_to_bin(10);
    return 0;
}


