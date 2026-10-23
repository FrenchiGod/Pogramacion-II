#include <iostream>
#include <vector>

std::vector<std::string>
    wifi;
std::string a;
int main(){
    std::cin >> a;
    wifi.push_back((a));
    std::cout << wifi[0];
}