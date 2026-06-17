#include <iostream>
#include <vector>
#include <random>

void random_generator(int n);

int main(){
    int n = 1000;
    random_generator(n);
    return 0;
}

void random_generator(int n){
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_real_distribution<double> dist(-1.0, 1.0);

    for(int i=0; i <= n; i++){
        
    }
    

}