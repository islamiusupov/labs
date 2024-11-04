    #include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

void celsiusToFahrenheitAndKelvin(double celsius, double &fahrenheit, double &kelvin) {
    fahrenheit = celsiusToFahrenheit(celsius);
    kelvin = celsiusToKelvin(celsius);
}

int main() {
    double celsius;

    std::cout << "Введите температуру в градусах Цельсия: ";
    std::cin >> celsius;

    double fahrenheit = celsiusToFahrenheit(celsius);
    double kelvin = celsiusToKelvin(celsius);

    std::cout << celsius << " °C = " << fahrenheit << " °F" << std::endl;
    std::cout << celsius << " °C = " << kelvin << " K" << std::endl;

    double fahrenheitLink, kelvinLink;
    celsiusToFahrenheitAndKelvin(celsius, fahrenheitLink, kelvinLink);

    std::cout << celsius << " °C = " << fahrenheitLink << " °F (через ссылку)" << std::endl;
    std::cout << celsius << " °C = " << kelvinLink << " K (через ссылку)" << std::endl;

    return 0;
}
