#include <iostream>

using namespace std;

int main() {
    string cadena;
    getline(cin, cadena);
    if(cadena=="char")
        cout<<sizeof(char)<<endl;
    if(cadena=="int")
        cout<<sizeof(int)<<endl;
    if(cadena=="short")
        cout<<sizeof(short)<<endl;
    if(cadena=="float")
        cout<<sizeof(float)<<endl;
    if(cadena=="double")
        cout<<sizeof(double)<<endl;
    if(cadena=="long")
        cout<<sizeof(long)<<endl;

    return 0;
}
