#include <string>
#include <map>
#include "../include/debug.h"

//private constructor so object can be accessed only from instance()
Debug::Debug()
{
}

Debug::~Debug()
{
}

Debug& Debug::instance()
{
    static Debug d;
    return d;
}

int Debug::get(std::string const key)
{
    for (auto iter : table)
    {
        if (key == iter.first)
        {
            return iter.second;
        }
    }

    return -1;
}

void Debug::set(int value)
{
    table["main"] = value;
}
