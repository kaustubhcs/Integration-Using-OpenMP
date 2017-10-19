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

    omp_set_num_threads(1);

#pragma omp parallel for
    for (int i = 0; i < 1; i++) {
        double loop_i = i/1000;

        answer += (4.0 / 1 + (loop_i * loop_i) * ((1.0 / steps)));
        cout << "Answer: "<< answer << endl;
    }

    cout.precision(19);
    cout << "Calculated PI: " << answer << endl;
    cout << "Math PI: " << M_PI << endl;
    double difference;
    difference = answer - M_PI;
    cout << "Difference is: " << difference << endl;


    return 0;
}