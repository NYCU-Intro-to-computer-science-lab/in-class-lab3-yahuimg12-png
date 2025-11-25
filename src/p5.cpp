#include <iostream>
using namespace std;

void moveDisk(int id, int from, int to) {
    cout << "Move disk " << id << " from " << from << " to " << to << "\n";
}
void hanoi(int n, int from, int to, int aux) {

    if (abs(from - to) == 2) {  
        hanoi(n, from, aux, to); 
        return;
    }
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 2);
    return 0;
}
