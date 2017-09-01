//Problem        : Mug Color
//Language       : C++
//Compiled Using : g++
//Version        : GCC 4.9.1
//Input for your program will be provided from STDIN
//Print out all output from your program to STDOUT

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int main() {
    string csaid;
    int numputs;

    string color_array[] = {"White", "Black", "Blue", "Red", "Yellow"};
    vector<string> colors(color_array, color_array+5);

    cin >> numputs;
    while(numputs > 0){
        cin >> csaid;
        vector<string>::iterator i = find(colors.begin(), colors.end(), csaid);
        if(i != colors.end()){
            colors.erase(i);
        }
        if(colors.size() == 1){
            break;
        }
        --numputs;
    }
    cout << colors[0] << endl;
    return 0;
}
