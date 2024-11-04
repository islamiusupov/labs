#include <iostream>

int main() {
    int temperature_in_celcius = 0; 
    while (temperature_in_celcius <= 100) {
        int temperature_in_fahrenheit = 9 * temperature_in_celcius / 5 + 32;

        std::cout << "Температура: " << temperature_in_celcius << "°C = " << temperature_in_fahrenheit << "°F" << std::endl;

        temperature_in_celcius += 10;
    }

    return 0;
}
