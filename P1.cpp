#include <iostream>
#include <cmath>
using namespace std;

// Sigmoid activation function
double sigmoid(double z) {
    return 1.0 / (1.0 + exp(-z));
}

int main() {
    double average, attendance, assignment, studyHours;

    cout << "===== Advanced Student Performance Predictor =====\n";

    cout << "Enter average score (0-100): ";
    cin >> average;

    cout << "Enter attendance percentage (0-100): ";
    cin >> attendance;

    cout << "Enter assignment percentage (0-100): ";
    cin >> assignment;

    cout << "Enter study hours per week: ";
    cin >> studyHours;

    // Normalize inputs
    average /= 100.0;
    attendance /= 100.0;
    assignment /= 100.0;
    studyHours /= 50.0;  // assuming 50 hours is max reasonable weekly study

    // Pre-trained weights (simulated trained model)
    double w1 = 2.5;   // average weight
    double w2 = 1.8;   // attendance weight
    double w3 = 1.5;   // assignment weight
    double w4 = 2.0;   // study hours weight
    double bias = -3.0;

    // Linear combination
    double z = (w1 * average) +
               (w2 * attendance) +
               (w3 * assignment) +
               (w4 * studyHours) +
               bias;

    // Sigmoid probability
    double probability = sigmoid(z);

    cout << "\nPerformance Probability Score: "
         << probability * 100 << "%\n\n";

    // Multi-level classification
    if (probability >= 0.70) {
        cout << "High Performer!\n";
        cout << "Excellent work! Keep maintaining your discipline and focus.\n";
    }
    else if (probability >= 0.40) {
        cout << "Average Student.\n";
        cout << "You are doing okay, but you can still do better.\n";
        cout << "Increase study hours and stay consistent.\n";
    }
    else {
        cout << "Needs Improvement.\n";
        cout << "It's not too late — sit up and take control of your academics!\n";
        cout << "Focus more on assignments, attendance, and structured study time.\n";
    }

    return 0;
}