#include <iostream>
#include <limits> // для numeric_limits
using namespace std;

int main() {
    const int days = 7;

    int* measurementsPerDay = new int[days];
    cout << "Введите количество замеров для каждого дня недели (7 значений):" << endl;
    for (int i = 0; i < days; ++i) {
        cin >> measurementsPerDay[i];
    }

    double** temperatures = new double*[days];
    for (int i = 0; i < days; ++i) {
        temperatures[i] = new double[measurementsPerDay[i]];
        cout << "Введите температуры для дня " << i + 1 << " (" << measurementsPerDay[i] << " замеров): ";
        for (int j = 0; j < measurementsPerDay[i]; ++j) {
            cin >> temperatures[i][j];
        }
    }

    // a) 
    double minTempFirstDay = temperatures[0][0];
    for (int j = 1; j < measurementsPerDay[0]; ++j) {
        if (temperatures[0][j] < minTempFirstDay) {
            minTempFirstDay = temperatures[0][j];
        }
    }
    cout << "Минимальная температура в первый день: " << minTempFirstDay << endl;

    // b) 
    int negativeCountWeekends = 0;
    for (int i = 5; i < days; ++i) { 
        for (int j = 0; j < measurementsPerDay[i]; ++j) {
            if (temperatures[i][j] < 0) {
                negativeCountWeekends++;
            }
        }
    }
    cout << "Количество отрицательных температур в выходные дни: " << negativeCountWeekends << endl;

    // c) 
    double maxTemp = temperatures[0][0];
    int dayOfMaxTemp = 0;
    for (int i = 0; i < days; ++i) {
        for (int j = 0; j < measurementsPerDay[i]; ++j) {
            if (temperatures[i][j] > maxTemp) {
                maxTemp = temperatures[i][j];
                dayOfMaxTemp = i;
            }
        }
    }
    cout << "Максимальная температура за неделю: " << maxTemp << ", зафиксирована в день " << (dayOfMaxTemp + 1) << endl;

    // d) 
    double sumFirstMeasurements = 0;
    for (int i = 0; i < days; ++i) {
        sumFirstMeasurements += temperatures[i][0];
    }
    double avgFirstMeasurements = sumFirstMeasurements / days;
    cout << "Средняя температура по первым замерам каждого дня: " << avgFirstMeasurements << endl;

    for (int i = 0; i < days; ++i) {
        delete[] temperatures[i];
    }
    delete[] temperatures;
    delete[] measurementsPerDay;

    return 0;
}
