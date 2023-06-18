#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cout << fixed;
    cout.precision(1);
    for(int i=0;i<t;i++)
    {
        int num,C=0;
        double G=0.0;
        cin >> num;
        for(int j=0;j<num;j++)
        {
            int temp_c;
            double temp_g;
            cin >> temp_c >> temp_g;
            C+=temp_c;
            G+=temp_g*temp_c;
        }
        cout << C <<" "  << G/C <<"\n";
    }
}