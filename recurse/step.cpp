#include <iostream>

using namespace std;

int calStepMethods(int stairCount) {
    if (stairCount < 1) {
        return 0;
    }

    if (stairCount == 1) {
        return 1;
    }

    if (stairCount == 2) {
        return 2;
    }

    return calStepMethods(stairCount - 1) + calStepMethods(stairCount - 2);
}

int calStepMethodsbyStepping(int stairCount) {
    if (stairCount < 1) {
        return 0;
    }

    if (stairCount == 1) {
        return 1;
    }

    if (stairCount == 2) {
        return 2;
    }

    int stepMethods = 0;
    int preStepMethods = 2;
    int prePreStepMethods = 1;
    int stairStepped = 3;

    for (; stairStepped < stairCount + 1; ++stairStepped ) {
        stepMethods = prePreStepMethods + preStepMethods;
        prePreStepMethods = preStepMethods;
        preStepMethods = stepMethods;
    }

    return stepMethods;
}

int main()
{
    cout << "calStepMethods" << endl;
    cout << "0 stair:   " << calStepMethods(0) << endl;
    cout << "1 stair:   " << calStepMethods(1) << endl;
    cout << "2 stairs:  " << calStepMethods(2) << endl;
    cout << "3 stairs:  " << calStepMethods(3) << endl;
    cout << "4 stairs:  " << calStepMethods(4) << endl;
    cout << "10 stairs: " << calStepMethods(10) << endl;

    cout << "calStepMethodsbyStepping" << endl;
    cout << "0 stair:   " << calStepMethodsbyStepping(0) << endl;
    cout << "1 stair:   " << calStepMethodsbyStepping(1) << endl;
    cout << "2 stairs:  " << calStepMethodsbyStepping(2) << endl;
    cout << "3 stairs:  " << calStepMethodsbyStepping(3) << endl;
    cout << "4 stairs:  " << calStepMethodsbyStepping(4) << endl;
    cout << "10 stairs: " << calStepMethodsbyStepping(10) << endl;
}