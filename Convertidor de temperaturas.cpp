#include <iostream>

class TemperatureConverter {
public:
    // Función para convertir de Celsius a Fahrenheit
    static double CelsiusToFahrenheit(double celsius) {
        return (celsius * 9.0/5.0) + 32.0;
    }

    // Función para convertir de Celsius a Kelvin
    static double CelsiusToKelvin(double celsius) {
        return celsius + 273.15;
    }

    // Función para convertir de Fahrenheit a Celsius
    static double FahrenheitToCelsius(double fahrenheit) {
        return (fahrenheit - 32.0) * 5.0/9.0;
    }

    // Función para convertir de Fahrenheit a Kelvin
    static double FahrenheitToKelvin(double fahrenheit) {
        return (fahrenheit - 32.0) * 5.0/9.0 + 273.15;
    }

    // Función para convertir de Kelvin a Celsius
    static double KelvinToCelsius(double kelvin) {
        return kelvin - 273.15;
    }

    // Función para convertir de Kelvin a Fahrenheit
    static double KelvinToFahrenheit(double kelvin) {
        return (kelvin - 273.15) * 9.0/5.0 + 32.0;
    }
};

int main() {
    double temperature;
    int choice;

    std::cout << "Conversion de temperaturas\n";
    std::cout << "Seleccione la opcion:\n";
    std::cout << "1. Celsius a Fahrenheit\n";
    std::cout << "2. Celsius a Kelvin\n";
    std::cout << "3. Fahrenheit a Celsius\n";
    std::cout << "4. Fahrenheit a Kelvin\n";
    std::cout << "5. Kelvin a Celsius\n";
    std::cout << "6. Kelvin a Fahrenheit\n";
    std::cout << "Ingrese su opcion: ";
    std::cin >> choice;

    std::cout << "Ingrese la temperatura a convertir: ";
    std::cin >> temperature;

    switch (choice) {
        case 1:
            std::cout << "Resultado: " << TemperatureConverter::CelsiusToFahrenheit(temperature) << " °F\n";
            break;
        case 2:
            std::cout << "Resultado: " << TemperatureConverter::CelsiusToKelvin(temperature) << " K\n";
            break;
        case 3:
            std::cout << "Resultado: " << TemperatureConverter::FahrenheitToCelsius(temperature) << " °C\n";
            break;
        case 4:
            std::cout << "Resultado: " << TemperatureConverter::FahrenheitToKelvin(temperature) << " K\n";
            break;
        case 5:
            std::cout << "Resultado: " << TemperatureConverter::KelvinToCelsius(temperature) << " °C\n";
            break;
        case 6:
            std::cout << "Resultado: " << TemperatureConverter::KelvinToFahrenheit(temperature) << " °F\n";
            break;
        default:
            std::cout << "Opcion no valida\n";
    }

    return 0;
}