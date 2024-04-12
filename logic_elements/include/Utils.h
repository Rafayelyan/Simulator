#ifndef UILS_H
#define UILS_H

#include <vector>

namespace Utils {

    enum Phase
    {
        NotStarted,
        StartedSwitching,
        Switched
    };

    struct SignalDisturbingCases {
        enum Value{
            Undefined = -1,
            A,
            B,
            C,
            D
        };
    };

}

#endif