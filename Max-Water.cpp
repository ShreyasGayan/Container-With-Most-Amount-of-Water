#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>height = {1, 1};

    int iniElem = 0;
    int lastElem = height.size() -1;
    int maxVolm = -1;

    while (iniElem < lastElem) {
        int minHeight = min(height[lastElem], height[iniElem]);
        int volume = (lastElem-iniElem) * minHeight;
        maxVolm = max(maxVolm, volume);
        if (height[lastElem] < height[iniElem]) {
            lastElem--;
        }
        else {
            iniElem++;
        }
    }
    // return maxVolm;
    cout << maxVolm;
    

}