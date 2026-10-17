#pragma once

#include <ctime>
#include <cstdint>

struct DecimalTime
{
    std::uint32_t hour;
    std::uint32_t minute;
    std::uint32_t second;

    static DecimalTime localtime(std::time_t* unixTime);
};
