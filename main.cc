#include<iostream>
#include<string>
#include<random>
#include<boost/random/beta_distribution.hpp>
#include<boost/random/ranlux.hpp>

int main(int argc, char **argv) {
    std::string line;
    int sum_x = 0;
    int tot = 0;
    while(std::getline(std::cin, line)) {
        sum_x += std::stoi(line);
        tot++;
    }
    boost::random::beta_distribution<> dist(sum_x, tot - sum_x);
    boost::random::ranlux3 gen;
    double sample = dist(gen);
    std::cout << "beta sample: " << sample << std::endl;
}
