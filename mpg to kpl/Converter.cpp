#include "Converter.hpp"
#include <cmath>

double converter(int mpg)
{
    return round((mpg * 1.609344) / 4.54609188 * 100.0) / 100.0;
    // mpg into kpl
    // double imperialGallon = 4.54609188;
    // double miles = 1.609344;
    // double result = (mpg * miles) / imperialGallon;
    // return round(result * 100.0) / 100.0;
}