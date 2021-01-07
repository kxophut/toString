#ifndef TOSTRING_H
#define TOSTRING_H

#include <string>
#include <sstream>

template <typename T>
std::string toString(T x){

    std::string Result;

    std::ostringstream convert;  // Поток, используемый для конвертации

    convert << x;      // Вставляем текстовое представление x в поток

    Result = convert.str(); // Result строка std::string из потока convert

    return Result;
}

#endif
