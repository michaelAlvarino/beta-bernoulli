#include<iostream>
#include<random>

int main(int argc, char **argv) {
    if (argc < 3) {
        std::cout << "input mean and stdev\n";
        return 1;
    }
    double mean = std::stod(argv[1]);
    double stdev = std::stod(argv[2]);
    std::normal_distribution<double> normal(mean, stdev);
    std::default_random_engine generator;
    double prob;
    for (int i = 0; i < 10000; ++i) {
        prob = normal(generator);
        std::bernoulli_distribution bern(prob);
        std::cout << bern(generator) << std::endl;
    }
}
