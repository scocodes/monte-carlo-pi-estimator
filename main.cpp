#include <iostream>
#include <vector>
#include <random>

double estimatePi(int samples);

int main(){
    int samples = 1000;
    double pi = estimatePi(samples);

    std::cout << "Samples: " << samples << '\n';
    std::cout << "Pi Estimate: " << pi << '\n';
    
    return 0;
}

double estimatePi(int samples){
    int inside = 0;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(-1.0, 1.0);

    for(int i=0; i <= samples; i++){
        double x = dist(gen);
        double y = dist(gen);

        if(x*x + y*y <= 1.0){
            inside++;
        }
        
    }
    return 4.0 * inside / samples;
}
