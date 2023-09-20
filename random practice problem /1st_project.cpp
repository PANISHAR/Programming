#include<bits/stdc++.h>


using namespace std;

// Function prototypes
void showMenu();
void performAddition();
void performSubtraction();
void performMultiplication();
void performDivision();
void solveQuadraticEquation();
void calculateArea();
void calculateAge();
void calculateStatistics();

int main() {
    cout << "Hello everyone!!! This is my first project for C++ Programming Language Laboratory." << endl;
    cout << "I have build a Calculator Software for the department of Computer Science and Engineering, Metropolitan University." << endl;
    cout << "Let's get started!" << endl;

    showMenu();

    return 0;
}

void showMenu() {
    int choice;
    cout << endl;
    // cout << "----- Calculator Software -----" << endl;
    // cout << "1. Add" << endl;
    // cout << "2. Subtract" << endl;
    // cout << "3. Multiply" << endl;
    // cout << "4. Divide" << endl;
    // cout << "5. Solve Quadratic Equation" << endl;
    // cout << "6. Calculate Area" << endl;
    // cout << "7. Calculate Age" << endl;
    // cout << "8. Calculate Statistics" << endl;
    // cout << "0. Exit" << endl;
    // cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            performAddition();
            break;
        case 2:
            performSubtraction();
            break;
        case 3:
            performMultiplication();
            break;
        case 4:
            performDivision();
            break;
        case 5:
            solveQuadraticEquation();
            break;
        case 6:
            calculateArea();
            break;
        case 7:
            calculateAge();
            break;
        case 8:
            calculateStatistics();
            break;
        case 0:
            cout << "Thank you for using the Calculator Software. Goodbye!" << endl;
            return;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    showMenu();
}

void performAddition() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Result: " << num1 + num2 << endl;
}

void performSubtraction() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Result: " << num1 - num2 << endl;
}

void performMultiplication() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Result: " << num1 * num2 << endl;
}

void performDivision() {
    double num1, num2;
    cout << "Enter the dividend: ";
    cin >> num1;
    cout << "Enter the divisor: ";
    cin >> num2;

    if (num2 != 0) {
        cout << "Result: " << num1 / num2 << endl;
    } else {
        cout << "Error: Cannot divide by zero." << endl;
    }
}

void solveQuadraticEquation() {
    double a, b, c;
    cout << "Enter the coefficients (a, b, c) of the quadratic equation ax^2 + bx + c = 0:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root: " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

void calculateArea() {
    int choice;
    cout << "Calculate Area" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double length, width, area;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area = length * width;
            cout << "Area of the rectangle: " << area << endl;
            break;
        }
        case 2: {
            double radius, area;
            const double pi = 3.14159;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = pi * radius * radius;
            cout << "Area of the circle: " << area << endl;
            break;
        }
        case 3: {
            double base, height, area;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

void calculateAge() {
    int currentYear, birthYear;
    cout << "Enter the current year: ";
    cin >> currentYear;
    cout << "Enter the birth year: ";
    cin >> birthYear;
    
    if (birthYear <= currentYear) {
        int age = currentYear - birthYear;
        cout << "Age: " << age << endl;
    } else {
        cout << "Invalid birth year. Please try again." << endl;
    }
}

void calculateStatistics() {
    int N;
    cout << "Enter the number of inputs: ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid number of inputs. Please try again." << endl;
        return;
    }

    vector<double> inputs(N);
    cout << "Enter the inputs: ";
    for (int i = 0; i < N; i++) {
        cin >> inputs[i];
    }

    double minValue = *min_element(inputs.begin(), inputs.end());
    double maxValue = *max_element(inputs.begin(), inputs.end());
    double sum = 0;

    for (int i = 0; i < N; i++) {
        sum += inputs[i];
    }

    double average = sum / N;

    sort(inputs.begin(), inputs.end());
    double median;
    if (N % 2 == 0) {
        median = (inputs[N / 2 - 1] + inputs[N / 2]) / 2.0;
    } else {
        median = inputs[N / 2];
    }

    double variance = 0;
    for (int i = 0; i < N; i++) {
        variance += pow(inputs[i] - average, 2);
    }
    variance /= N;

    cout << "Statistics:" << endl;
    cout << "Min: " << minValue << endl;
    cout << "Max: " << maxValue << endl;
    cout << "Avg: " << average << endl;
    cout << "Median: " << median << endl;
    cout << "Variance: " << variance << endl;
}
