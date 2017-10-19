//
// Created by Kaustubh Shivdikar on 10/18/17.
//

# include <iostream>
# include <omp.h>
# include <iomanip>

# define M_PI 3.14159265358979323846

using namespace std;


int main() {

    long steps = 1000;
    double answer = 0;

#pragma omp parallel for
    for (long i = 0; i < steps; i++) {
    answer += (4 / 1 + (i*i)) * (1/steps);
    }

    cout.precision(19);
    cout << "Calculated PI: "<< answer << endl;
    cout << "Math PI: " << M_PI << endl;
    double difference;
    difference = answer - M_PI;
    cout << "Difference is: " << difference << endl;




    return 0;
}