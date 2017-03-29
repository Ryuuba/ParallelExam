#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <mutex>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;
using std::thread;
using std::vector;
using std::mutex;
using std::ref;
using std::ostream;

mutex mx;

struct Point {
    double x, y, z;
    bool operator < (Point b) {
        return (sqrt(x*x + y*y + z*z) < sqrt(b.x*b.x + b.y*b.y + b.z*b.z));
    }
};

void max_magnitude(vector<Point>& coordinate_set, unsigned start, unsigned chunk, vector<Point>& max_elements) {
    auto it = std::max_element(
        coordinate_set.begin()+start, 
        coordinate_set.begin()+start+chunk
    );
}

inline ostream& operator << (ostream& os, Point& p) {
    os << p.x << ' ' << p.y << ' ' << p.z;
    return os;
}

int main() {
    Point p;
    vector<Point> coordinate_set, max;
    
    while (cin >> p.x >> p.y >> p.z)
        coordinate_set.push_back(p);
   
    auto it = std::max_element(max.begin(), max.end());
    cout << *it << endl;
    return 0;
}