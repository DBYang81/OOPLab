#include "Point.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

int main() {
    srand(time(NULL));
    vector<shared_ptr<Point>> cnt;

    Point pt, p(1.0, 1.0);
    Circle c, crl(2.0,2.0, 2.0);
    Square s, sqr(5.0,5.0,2.0,2.0);

    cnt.push_back(make_shared<Point>(p));
    cnt.push_back(make_shared<Circle>(crl));
    cnt.push_back(make_shared<Square>(sqr));

    pt.input("Point:");
    cnt.push_back(make_shared<Point>(pt));

    c.input("Circle:");
    cnt.push_back(make_shared<Circle>(c));

    s.input("Square:");
    cnt.push_back(make_shared<Square>(s));

    cout << "*****************************Original data************************" << endl << endl;

    for(auto& elem: cnt){
        elem->output();
    }

    cout << endl << "**************************Sorting by Area ************************************"<< endl;

    sort(cnt.begin(), cnt.end(), [](shared_ptr<Point> &p, shared_ptr<Point> &p1)->bool {
        return p->area() < p1->area();
    });

    for(auto& elem: cnt){
        elem->output();
    }

    cout << endl << endl;
    cout << "************ Add five random objects to the vector ****************" << endl << endl;

    for(int i = 0; i < 5; ++i){
        int index = rand() % 3;
        if (index == 0) {
            Point point;
            point.input("Point: ");
            cnt.push_back(make_shared<Point>(point));
        }
        else if (index == 1) {
            Circle circle;
            circle.input("Circle: ");
            cnt.push_back(make_shared<Circle>(circle));
        }
        else if (index == 2) {
            Square square;
            square.input("Square: ");
            cnt.push_back(make_shared<Square>(square));
        }
        else {
            cout << "error input" << endl;
        }
    }

    cout << endl << "*************Sorting by Area (with Bonus Task) ***********************"<< endl;

    sort(cnt.begin(), cnt.end(), [](shared_ptr<Point> &p, shared_ptr<Point> &p1)->bool {
        return p->area() < p1->area();
    });

    for(auto& elem: cnt){
        elem->output();
    }

    return 0;
}
