#include <map>

class Debug
{
    private:
        std::map<std::string,int> table;
        Debug();
        Debug(Debug&&) = delete;                    //disable copy constructor
        Debug(const Debug&) = delete;               //disable copy constructor
        Debug& operator=(Debug&&) = delete;         //disable assigment constructor
        Debug& operator=(const Debug&) = delete;    //disable assignment constructor

    public:
        static Debug& instance();
        int get(std::string);
        void set(int);
};
