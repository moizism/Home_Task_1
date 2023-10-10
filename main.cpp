// TASK 1
#include <iostream>
 
using namespace std;
int main() {
    int x;
    x = 6;
    x = (x) * (x - 1) * (x - 2) * ( x - 3) * ( x - 4) * ( x - 5);
    cout << "The factorial of 6 is " << x;
    return 0;
}
 
// TASK 2
#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    int x1, x2, y1, y2;
    cout << "Enter the coordinates of point 1 "<< endl;
    cin >> x1;
    cin >> y1;
    
    
    cout << "Enter the coordinates of point 2 "<< endl;
    cin >> x2;
    cin >> y2;
    
    double dist;
    dist = sqrt ((pow((x2-x1), 2))+(pow((y2-y1), 2))); 
    cout << "The distance between them is " << dist;
    
    return 0;
}
 
// TASK 3
#include <iostream>
 
using namespace std;
 
int main(){
    double cm, m, km;
    
    cout << "Insert length in centimetres, we'll convert into metres and kilometres: ";
    cin >> cm;
    m = cm / 100;
    km = m / 1000;
    
    cout << "It is " << m << " metres and " << km << " kilometres.";
    return 0;
}
 
// TASK 4
#include <iostream>
#include <cmath>
using namespace std;
 
 
int main(){
    double a,b;
    cout << "Enter two values for a and b: "<< endl;
    cin >> a;
    cin >> b;
    double answer;
    answer = pow(a, 2) + ( 2 * a * b) + pow(b , 2);
    cout << "The answer is " << answer;
    return 0;
}
