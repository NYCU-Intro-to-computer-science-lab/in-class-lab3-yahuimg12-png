// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;

void printIndent(int depth) {
    if (depth == 0) return;
    cout << "|--";
    printIndent(depth - 1);
}

int fib(int n, int depth) {

    printIndent(depth);
    cout << "SEARCH fib(" << n << ")\n";

    if (n == 1 || n == 2) {
        printIndent(depth);
        cout << "GET fib(" << n << ") = 1\n";
        return 1;
    }

    int a = fib(n - 1, depth + 1);
    int b = fib(n - 2, depth + 1);
    int result = a + b;

    printIndent(depth);
    cout << "GET fib(" << n << ") = " << result << "\n";

    return result;
}

int main() {
    int n;
    cin >> n;

    int ans = fib(n,0);
    cout << ans << endl;

    return 0;
}
