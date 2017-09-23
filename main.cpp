#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        cout << "Hello, " << argv[i] << "!" << endl;
    }
    return 0;
}

/* second solution also works:
 *
 * #include <vector>
 *
 * vector<string> names(argv, argv + argc);
 * names.erase(names.begin());
 * for (string& name : names) {
 * cout << "Hello, " << name << "!" << endl;
 * }
 */