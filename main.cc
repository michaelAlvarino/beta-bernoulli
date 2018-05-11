#include<iostream>
#include<string>
#include<random>

#include<boost/math/distributions/beta.hpp>

int main(int argc, char **argv) {
    std::string line;
    int sum_x = 0;
    int tot = 0;
    while(std::getline(std::cin, line)) {
        sum_x += std::stoi(line);
        tot++;
    }
    std::uniform_real_distribution<double> uniform(0.0, 1.0);
    boost::math::beta_distribution<> b(sum_x, tot - sum_x);
    std::default_random_engine generator(42);
    double seed = uniform(generator);
    double sample = boost::math::quantile(b, seed);
    std::cout << "beta sample: " << sample << std::endl;
}
