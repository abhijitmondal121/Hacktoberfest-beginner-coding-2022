#include <bits/stdc++.h>
#include <unistd.h> //linux: sleep()
#include <windows.h> //windows: sleep()

using namespace std;

void display(int hr, int min, int sec) {
    system("clear");
    cout << setfill('0');
    cout << setw(2) << hr << ":";
    cout << setw(2) << min << ":";
    cout << setw(2) << sec << endl;
}

int main() {
    int hr = 0, min = 0, sec = 0;
    while(true) {
        sleep(1);
        sec++;
        if(sec>59) {
            min++;
            sec = 0;
        }
        if(min>59) {
            hr++;
            min = 0;
            sec = 0;
        }
        display(hr, min, sec);
    }
}
