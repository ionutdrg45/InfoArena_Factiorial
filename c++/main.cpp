#include <iostream>
#include <fstream>

using namespace std;

int get_0(int p) {
    int n = -1;
    int nr_zero = 0;
    while(nr_zero != p) {
        n++;
        int aux_val = n;

        while(aux_val % 5 == 0 && aux_val) {
            aux_val /= 5;
            nr_zero++;
        }
    }
    if(n == -1) return 1;
    else return n;
}

int main()
{
    ifstream f("fact.in");
    ofstream g("fact.out");
    int x;
    f>>x;
    g<<get_0(x);
    f.close();
    g.close();
    return 0;
}
