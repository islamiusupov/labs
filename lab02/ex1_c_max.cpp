#include <iostream>
#include <algorithm>  
using namespace std;

int main()
{
    setlocale(0, "");
    double a1, b1, a2, b2, a3, b3;
    
    cout << "Введите стороны 1-го прямоугольника \n";
    cout << "a1 = "; cin >> a1;
    cout << "b1 = "; cin >> b1;
    
    cout << "Введите стороны 2-го прямоугольника \n";
    cout << "a2 = "; cin >> a2;
    cout << "b2 = "; cin >> b2;
    
    cout << "Введите стороны 3-го прямоугольника \n";
    cout << "a3 = "; cin >> a3;
    cout << "b3 = "; cin >> b3;

    double s1 = a1 * b1;
    double s2 = a2 * b2;
    double s3 = a3 * b3;

    double maxS = max({s1, s2, s3}); 
    int maxIndex = (maxS == s1) ? 1 : (maxS == s2) ? 2 : 3;

    (s1 == s2 && s2 == s3)
        ? cout << "Все площади равны"
        : cout << "Максимальная площадь у " << maxIndex << "-го прямоугольника, S = " << maxS;

    return 0;
}
