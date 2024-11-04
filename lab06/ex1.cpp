#include <iostream>
using namespace std;

int main() {
    double var1 {1.5};
    double var2  {3.14};
    double *pvar1  {&var1};
    double *pvar2  {&var2};
    cout << "Значения переменных:" << endl;
    cout << "var1 = " << *pvar1 << ", var2 = " << *pvar2 << endl;

    cout << "Адреса переменных:" << endl;
    cout << "&var1 = " << pvar1 << ", &var2 = " << pvar2 << endl;

    cout << "Разность между адресами: " << pvar1 - pvar2<<  endl;

    cout << "Размер var1: " << sizeof(var1) << " байт, размер var2: " << sizeof(var2) << " байт" << endl;

    double arr[5] = {1.5, 3.14, -0.7, 3.0, -2.4};

    cout << "\nЭлементы массива и их адреса:" << endl;
    cout << "Первый элемент: значение = " << *arr << ", адрес = " << arr << endl;
    cout << "Второй элемент: значение = " << *(arr + 1) << ", адрес = " << (arr + 1) << endl;
    cout << "Последний элемент: значение = " << *(arr + 4) << ", адрес = " << (arr + 4) << endl;

    cout << "Разность адресов первого и второго элементов: " << reinterpret_cast<uintptr_t>(arr + 1) - reinterpret_cast<uintptr_t>(arr) << " байт" << endl;

    double* sum = new double(var1 + var2);
    double* diff = new double(var1 - var2);

    cout << "\nДинамические переменные:" << endl;
    cout << "Сумма: значение = " << *sum << ", адрес = " << sum << endl;
    cout << "Разность: значение = " << *diff << ", адрес = " << diff << endl;

    cout << "Разность между адресами динамических переменных: " << reinterpret_cast<uintptr_t>(sum) - reinterpret_cast<uintptr_t>(diff) << " байт" << endl;

    delete sum;
    delete diff;

    return 0;
}
