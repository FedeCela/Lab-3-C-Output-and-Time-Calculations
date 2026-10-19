#include <iostream>
using namespace std;

int main() {
    int LEVEL1MIN = 78;
    int LEVEL2MIN = 144;
 
    int LEVEL1HOURS= LEVEL1MIN/ 60;
    int LEVEL1MINREMIND= LEVEL1MIN % 60;
 
    int LEVEL2HOURS= LEVEL2MIN/ 60;
    int LEVEL2MINREMIND= LEVEL2MIN % 60;
 
    int LEVEL2MORE = LEVEL2MIN - LEVEL1MIN;
    int HOURSDIFERENCE= LEVEL2MORE/ 60;
    int REMINDINGMIN = LEVEL2MORE% 60;
  
    cout << "Level 1: " << LEVEL1HOURS << " hours and "
         << LEVEL1MINREMIND << " minutes" << endl;

    cout << "Level 2: " << LEVEL2HOURS << " hours and "
         << LEVEL2MINREMIND << " minutes" << endl;

    cout << "Difference: " << HOURSDIFERENCE << " hours and "
         << REMINDINGMIN << " minutes" << endl;

 return 0;
}
