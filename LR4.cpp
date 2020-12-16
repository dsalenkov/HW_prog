#include <iostream>

int main(){
    int N, min_num; //size of array and number of min
    double mean, min_summ = 100000;// mean of numbers on main diagonal and min summm
    std::cin >> N;
    double ar[N][N]; // array
    for(int i = 0; i < N; i ++){
        for(int j = 0; j < N; j++){
            std::cin >> ar[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        mean += ar[i][i];
    }
    mean = mean / N;

    for(int j = 0; j < N; j++){
        int summ = 0;
        for(int i = 0; i < N; i++)
            summ += ar[i][j];
        if(min_summ > summ){
            min_summ = summ;
            min_num = j;
        }
    }

    for(int  i = 0; i < N; i++)
        ar[min_num][i] += mean;

    for(int i = 0; i < N; i ++){
        for(int j = 0; j < N; j++){
            std::cout << ar[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
