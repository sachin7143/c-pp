#include <iostream>
using namespace std;

int main()
{
    char s1[] = "20";
    char s2[] = "30";
    long int n1 = stol(s1);
    long int n2 = stol(s2);
    long int res = n1 + n2;
    cout << res;
    return 0;
}
