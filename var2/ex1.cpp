
#include <iostream>
using namespace std;

int main() {
    const double charka = 0.123;
    const double shkalik = 0.06;
    int kol_charok_vasya;
    int kol_shkalikov_vasya;
    int kol_charok_petya;
    int kol_shkalikov_petya;
    cin >> kol_charok_vasya;
    cin >> kol_shkalikov_vasya;
    cin >> kol_charok_petya;
    cin >> kol_shkalikov_petya;
    cout << "Вася выпил всего:" << charka * kol_charok_vasya + shkalik * kol_shkalikov_vasya << endl;
    cout << "Петя выпил всего:" << charka * kol_charok_petya + shkalik * kol_shkalikov_petya << endl;
    cout << "Друзья выпили всего:" << (charka * kol_charok_vasya + shkalik * kol_shkalikov_vasya) + (charka * kol_charok_petya + shkalik * kol_shkalikov_petya) << endl;
    return 0;
}