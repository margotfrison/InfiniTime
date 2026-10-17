#include "DecimalTime.h"

DecimalTime DecimalTime::localtime(std::time_t* unixTime)
{
    std::tm localStdTime = *std::localtime(unixTime);

    std::uint32_t secondsStdSinceMidnight =
        localStdTime.tm_hour * 3600 +
        localStdTime.tm_min * 60 +
        localStdTime.tm_sec;

    std::uint32_t decimalSeconds = (secondsStdSinceMidnight * 1000) / 864;

    return DecimalTime {
        decimalSeconds / 10000,
        (decimalSeconds / 100) % 100,
        decimalSeconds % 100
    };
}
