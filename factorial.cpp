#include<iostream>

int main(){
        int n;
        int factorial = 1;
        std::cout<<"Enter number: ";
        std::cin>>n;

        for(int i = 1; i <= n; i++){
                factorial *= i;
        }

        std::cout<< n << "! = " << factorial;
}

