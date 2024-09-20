#include <iostream>
using namespace std;

class Student {
private:
    int scores[5];  

public:

    void input() {
        for (int i = 0; i < 5; ++i) {
            cin >> scores[i];
        }
    }


    int calculateTotalScore() {
        int totalScore = 0;
        for (int i = 0; i < 5; ++i) {
            totalScore += scores[i];
        }
        return totalScore;
    }
};

int main() {
    int n; 
    cout << "Enter the number of students: ";
    cin >> n;

    Student students[n]; 


    for (int i = 0; i < n; ++i) {
        students[i].input();
    }


    int annaTotalScore = students[0].calculateTotalScore();


    int c = 0;
    for (int i = 1; i < n; ++i) {
        if (students[i].calculateTotalScore() > annaTotalScore) {
            c++;
        }
    }

    cout << "Number of students who scored higher than Anna is: " << c <<endl;

    return 0;
}


