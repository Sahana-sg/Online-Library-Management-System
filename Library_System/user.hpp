#include <string>
using namespace std;

class User{
    private:
        string name;
        string id;

    public:
        User(string name, string uid): name(name), id(uid) {}
};