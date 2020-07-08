#include <iostream>
#include <string>
using namespace std;

//No return
/*
void mul(int a, int b){
    cout << a*b;
}*/

//Returns
/*
int mul(int a, int b){
    return a*b;
}*/

//Prototype
int mul(int, int);

int main(){
    // Variables
    /*
    int my_age = 19;
    double price = 32.32;
    char c = 'a';
    string name = "Victoria";

    cout << my_age;*/

    //Loops

    /*
    for(int i = 0; i<10; i++){
        cout << i << endl;
        cout << "Counting..." << endl;
    } */


    // Functions
    //mul(2, 3);
    //cout << mul(2,3);

    //Arrays
    int arr[3] = {1, 2, 3};

    for (int i = 0; i<3; i++){
        cout << arr[i] << " ";
    }

    string arr2[3] = {"Mercury", "Venus", "Earth"};

    for (int i = 0; i<3; i++){
        cout << arr2[i] << " ";
    }

    return 0;
}

/*
int mul(int a, int b){
    return a*b;
}*/