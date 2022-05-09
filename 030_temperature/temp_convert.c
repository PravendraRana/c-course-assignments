#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float celsiusToKelvin(float temp)
{
    float convertTemp = 0.0;
    convertTemp = temp + 273.15;
    return convertTemp;
}
float kelvinToCelsius(float temp)
{
    float convertTemp = 0.0;
    convertTemp = temp - 273.15;
    return convertTemp;
}
float celsiusToFahrenheit(float temp)
{
    float convertTemp = 0.0;
    convertTemp = (temp * 9.0 / 5.0) + 32.0;
    return convertTemp;
}
float fahrenheitToCelsius(float temp)
{
    float convertTemp = 0.0;
    convertTemp = (temp - 32.0) * 5.0 / 9.0;
    return convertTemp;
}
float kelvinToFahrenheit(float temp)
{
    float convertTemp = 0.0;
    convertTemp = (temp - 273.15) * (9.0 / 5.0) + 32.0;
    return convertTemp;
}
float fahrenheitToKelvin(float temp)
{
    float convertTemp = 0.0;
    convertTemp = (temp - 32.0) * (5.0 / 9.0) + 273.15;
    return convertTemp;
}
int main(int argc, char *argv[])
{
    if(argc > 2)
    {
        if((strcmp(argv[1], "C") == 0 || strcmp(argv[1], "c") == 0 || strcmp(argv[1], "Celsius") == 0  || strcmp(argv[1], "celsius") == 0 || strcmp(argv[1], "°C") == 0) &&
           (strcmp(argv[2], "K") == 0 || strcmp(argv[2], "k") == 0 || strcmp(argv[2], "Kelvin") == 0 || strcmp(argv[2], "kelvin") == 0))
        {
            for(int i = 3; i < argc; i++)
            {
                printf("%.2f\n", celsiusToKelvin(atof(argv[i])));
            }
        }
        else if((strcmp(argv[2], "C") == 0 || strcmp(argv[2], "c") == 0 || strcmp(argv[2], "Celsius") == 0 || strcmp(argv[2], "celsius") == 0 || strcmp(argv[2], "°C") == 0) &&
            (strcmp(argv[1], "K") == 0 || strcmp(argv[1], "k") == 0 || strcmp(argv[1], "Kelvin") == 0 || strcmp(argv[1], "kelvin") == 0))
        {
            for(int i = 3; i < argc; i++)
            {
                printf("%.2f\n", kelvinToCelsius(atof(argv[i])));
            }
        }
        else if((strcmp(argv[1], "C") == 0 || strcmp(argv[1], "c") == 0 || strcmp(argv[1], "Celsius") == 0 || strcmp(argv[1], "celsius") == 0 || strcmp(argv[1], "°C") == 0) &&
        (strcmp(argv[2], "F") == 0 || strcmp(argv[2], "f") == 0 || strcmp(argv[2], "Fahrenheit") == 0 || strcmp(argv[2], "fahrenheit") == 0 || strcmp(argv[2], "°F") == 0))
        {
            for(int i = 3; i < argc; i++)
            {
                printf("%.2f\n", celsiusToFahrenheit(atof(argv[i])));
            }
        }
        else if((strcmp(argv[2], "C") == 0 || strcmp(argv[2], "c") == 0 || strcmp(argv[2], "Celsius") == 0 || strcmp(argv[2], "celsius") == 0 || strcmp(argv[2], "°C") == 0) &&
        (strcmp(argv[1], "F") == 0 || strcmp(argv[1], "f") == 0 || strcmp(argv[1], "Fahrenheit") == 0 || strcmp(argv[1], "fahrenheit") == 0 || strcmp(argv[1], "°F") == 0))
        {
            for(int i = 3; i < argc; i++)
            {
                printf("%.2f\n", fahrenheitToCelsius(atof(argv[i])));
            }
        }
        else if((strcmp(argv[1], "K") == 0 || strcmp(argv[1], "k") == 0 || strcmp(argv[1], "Kelvin") == 0 || strcmp(argv[1], "kelvin") == 0) &&
        (strcmp(argv[2], "F") == 0 || strcmp(argv[2], "f") == 0 || strcmp(argv[2], "Fahrenheit") == 0 || strcmp(argv[2], "fahrenheit") == 0 || strcmp(argv[2], "°F") == 0))
        {
            for(int i =3; i < argc; i++)
            {
                printf("%.2f\n", kelvinToFahrenheit(atof(argv[i])));
            }
        }
        else if((strcmp(argv[2], "K") == 0 || strcmp(argv[2], "k") == 0 || strcmp(argv[2], "Kelvin") == 0 || strcmp(argv[2], "kelvin") == 0) &&
        (strcmp(argv[1], "F") == 0 || strcmp(argv[1], "f") == 0 || strcmp(argv[1], "Fahrenheit") == 0 || strcmp(argv[1], "fahrenheit") == 0 || strcmp(argv[1], "°F") == 0))
        {
            for(int i = 3; i < argc; i++)
            {
                printf("%.2f\n", fahrenheitToKelvin(atof(argv[i])));
            }
        }
        else
        {
            fprintf(stderr, "temp_convert: error: Unrecognized temperature scale\n");
        }
    }
    else
    {
        fprintf(stderr, "temp_convert: error: Not enough arguments.\n");
        fprintf(stderr, "Usage: temp_convert INPUT_SCALE OUTPUT_SCALE [TEMPERATURE]...");
    }
    return EXIT_SUCCESS;
}