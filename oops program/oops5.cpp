#include <iostream>
using namespace std;
namespace Math {
    void calculate() {
        cout << "Mathematics Calculation" <<endl;
    }
}

namespace Physics {
    void calculate() {
        cout << "Physics Calculation" <<endl;
    }
}

int main() {
   
    Math::calculate();
    Physics::calculate();
    
    return 0;
}
