#include<iostream>
#include<string>
using namespace std;
class ABC {
    public:
    ABC() {
        cout << "CONSTRUCTOR\n";
    }
    ~ABC() {
        cout << "DESTRUCTOR\n";
    }
};

int main() {
if(true) {
    ABC obj;
}

cout << "END OF MAIN FUNCTION";

return 0;
}