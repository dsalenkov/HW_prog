#include <iostream>

int main(){
    int N, M; // size of array
    std::cin >> N >> M;
    int ar[N][M]; // array
    for(int i = 0; i < N; i ++){
        for(int j = 0; j < M; j++){
            std::cin >> ar[i][j];
        }
    }

    for(int i = 0; i < N; i ++){ // check the negative numbers
        for(int j = 0; j < M; j++){
            if(ar[i][j] < 0 && i != 0)
                ar[i][j] += ar[i-1][j];
        }
    }

    for(int j = 0; j < M; j++){
        if(ar[0][j] < 0)
            ar[0][j] += ar[N - 1][j];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            std::cout << ar[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
