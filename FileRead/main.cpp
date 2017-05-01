#include <iostream>
#include <fstream>

using namespace std;
void readFile(const string& file_name) {
ifstream input(file_name.c_str());
    size_t num;
    input >> num;
    cout<<num<<endl;
    input.close();
}
int main() {
    readFile("data.txt");
    return 0;
}