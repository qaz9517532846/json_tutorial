#include <iostream>
#include <iomanip>
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;
using namespace std;

int main()
{
    auto j3 = json::parse("{ \"happy\": false, \"pi\": 3.1415926 }");
    
    // Access the values
    bool check_happy = j3["happy"];
    double pi = j3["pi"];

    cout << "happy: " << check_happy << endl;
    cout << "pi: " << pi << endl;

    cout << "json convert to string = " << j3.dump(4) << endl;

    ofstream write_file;
    write_file.open("/home/zmtech/catkin_ws/src/json_tutorial/src/demo.json");
    write_file << setw(4) << j3 << std::endl;
    write_file.close();

    return 0;
}
