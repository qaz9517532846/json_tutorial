#include <iostream>
#include <iomanip>
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;
using namespace std;

int main()
{
    std::ifstream read("/home/zmtech/catkin_ws/src/json_tutorial/src/demo.json");
    json j;
    read >> j;

    cout << "Command = " << j["Command"] << endl;
    cout << "Para = " << j["Para"] << endl;
    cout << "Result = " << j["Result"] << endl;
    cout << "Length = " << j["Result"]["Length"] << endl;
    cout << "Length = " << j["Result"]["list"][0]["Name"] << endl;

    json create_;
    create_["a"] = 1;
    create_["b"] = 2;
    cout << "create_ = " << create_.dump() << endl;

    return 0;
}
