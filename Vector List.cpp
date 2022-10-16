#include <iostream>
#include <string>
using namespace std;

void question1(){
    int V[6];
    int i, negCount = 0, posCount = 0;

    for (i = 0; i < 6; i++){
        cout << "Num " << i+1 << " : ";
        cin >> V[i];

        if (V[i] < 0){
            negCount += 1;
        }
        else{
            posCount += 1;
        }
    }

    cout << endl;
    cout << "Negative numbers count: " << negCount << endl;
    cout << "Positive numbers count: " << posCount << endl;
}

void question2(){
    int i = 0, vector1[10], vector2[10];

    for (i = 0; i < 10; i++){
        cout << "Num " << i+1 << " : ";
        cin >> vector1[i];

        if (i % 2 == 0){
            vector2[i] = vector1[i] * 5;
        }
        else{
            vector2[i] = vector1[i] + 5;
        }
    }

    cout << "Vector 2: ";
    for (i = 0; i < 10; i++) cout << vector2[i] << " | ";
}

void question3(){
    int i, A[10];

    for (i = 0; i < 10; i++){
        cout << "Num " << i+1 << " : ";
        cin >> A[i];
    }

    for (i = 0; i < 10; i++){
        if (A[i] <= 10){
            cout << "Position: " << i << endl;
            cout << "Number: " << A[i] << endl << endl;
        }
    }
}

void question4(){
    int i, N[20], M, P;

    cout << "1* Number : ";
    cin >> N[0];
    M = N[0];
    P = 0;

    for (i = 1; i < 20; i++){
        cout << i+1 << "* Number : ";
        cin >> N[i];

        if (N[i] < M){
            M = N[i];
            P = i;
        }
    }

    cout << "The minor number is: " << M << endl;
    cout << "The position of the minor number is: " << P;
}

void question5(){
    int i, D[20], A[20];

    for (i = 0; i < 20; i++){
        cout << "Num " << i+1 << " : ";
        cin >> D[i];
    }

    for (i = 0; i < 10; i++){
        A[i] = D[i+10];
    }

    for (i = 10; i < 20; i++){
        A[i] = D[i-10];
    }

    for (i = 0; i < 20; i++){
        cout << A[i] << " | ";
    }
}

void question6(){
    int i, A[5], odd = 0, even = 0;

    for (i = 0; i < 5; i++){
        cout << "Num " << i+1 << " : ";
        cin >> A[i];
        if (A[i] % 2 == 0){
            even += A[i];
        }
        else{
            odd += A[i];
        }
    }

    cout << "Even sum: " << even << endl;
    cout << "Odd sum: " << odd << endl;
}

void question7(){
    float X, vector1[25];
    int i, count = 0, position;

    for (i = 0; i < 25; i++){
        cout << "Vector number " << i+1 << ": ";
        cin >> vector1[i];
    }

    cout << endl << "Type the X valor: ";
    cin >> X;

    for (i = 0; i < 25; i++){
        if (vector1[i] == X){
            if (count == 0){
                position = i;
            }
            count += 1;
        }
    }

    if (count == 0){
        cout << "The valor wasnt found";
    }
    else{
        cout << "The first valor was found at position: " << position << endl;
        cout << "The count valor is: " << count;
    }

}

void question8(){
    string G[5], R[5][15], N[15];
    int i, j, rightAnswer;

    for (i = 0; i < 5; i++){
        cout << "Question " << i+1 << " right answer: ";
        cin >> G[i];
    }

    for (i = 0; i < 15; i++){
        cout << "Name: ";
        cin >> N[i];
        for (j = 0; j < 5; j++){
            cout << "Answer number " << j+1 << ": ";
            cin >> R[j][i];
        }
    }

    for (i = 0; i < 15; i++){
        rightAnswer = 0;
        cout << "Name: " << N[i] << endl;
        for (j = 0; j < 5; j++){
            if (G[j] == R[j][i]){
                rightAnswer += 1;
            }
        }
        cout << "Right answers count: " << rightAnswer << endl;
        cout << "Score: " << rightAnswer*2 << endl << endl;
    }

}

void question9(){
    int i, j, count, idNumber[10], G[13], R[13][10];

    for (i = 0; i < 13; i++){
        cout << "Answer number " << i+1 << " : ";
        cin >> G[i];
    }
    
    for (i = 0; i < 10; i++){
        cout << "Put the punter's card number: ";
        cin >> idNumber[i];
        for (j = 0; j < 13; j++){
            cout << "Put the punter's answer " << j+1 << " : ";
            cin >> R[j][i];
        }
    }

    for (i = 0; i < 10; i++){
        cout << "Punter's card number: " << idNumber[i] << endl;
        count = 0;
        for (j = 0; j < 13; j++){
            if (R[j][i] == G[j]){
                count += 1;
            }
        }
        cout << "Punter's right answers count: " << count << endl;
    }
}

void question10(){
    int i, j, count, idNumber[2], G[13], R[13][2];
    float percentMajor = 0, percentMinor = 0;

    for (i = 0; i < 13; i++){
        cout << "Answer number " << i+1 << " : ";
        cin >> G[i];
    }
    
    for (i = 0; i < 2; i++){
        cout << "Put the punter's card number: ";
        cin >> idNumber[i];
        for (j = 0; j < 13; j++){
            cout << "Put the punter's answer " << j+1 << " : ";
            cin >> R[j][i];
        }
    }

    for (i = 0; i < 2; i++){
        cout << "Punter's card number: " << idNumber[i] << endl;
        count = 0;
        for (j = 0; j < 13; j++){
            if (R[j][i] == G[j]){
                count += 1;
            }
        }

        if (count >=10){
            percentMajor += 1;
        }
        else{
            percentMinor += 1;
        }
    }

    cout << "The percentage of punters that got between 10 and 13 right answers is: " << percentMajor/i*100 << endl;
    cout << "The percentage of punters that got less than 10 right answers is: " << percentMinor/i*100 << endl;
}

void question11(){
    int i, j, number, countP = 0, countI = 0, P[10], I[10];

    for (i = 0; i < 30; i++){
        cout << "Put the "<< i+1 <<"* number here: ";
        cin >> number;

        if (number % 2 == 0){
            P[countP] = number;
            countP += 1;
            if (countP % 10 == 0){
                for (j = 0; j < 10; j++){
                    cout << P[j] << " ";
                }
                cout << endl;
                countP = 0;
            }
        }
        else{
            I[countI] = number;
            countI +=1;
            if (countI % 10 == 0){
                for (j = 0; j < 10; j++){
                    cout << I[j] << " ";
                }
                cout << endl;
                countI = 0;
            }
        }
    }

    for (countP = countP - 1; countP >= 0; countP--){
        cout << P[countP] << " | ";
    }

    cout << endl;

    for (countI = countI - 1; countI >= 0; countI--){
        cout << I[countI] << " | ";
    }
}

void question12(){
    int i, j, pass, V[10], X[10], Y[20];

    for (i = 0; i < 10; i++){
        cout << "V) Valor number " << i+1 << " : ";
        cin >> V[i];
        Y[i] = V[i];
    }

    cout << endl;

    for (i = 0; i < 10; i++){
        cout << "X) Valor number " << i+1 << " : ";
        cin >> X[i];
        Y[i+10] = X[i];
    }

    cout << endl;

    for (i = 0; i < 20; i++){
        for (j = 0; j < 20 - i; j++){
            if (Y[j] > Y[j + 1]){
                pass = Y[j];
                Y[j] = Y[j + 1];
                Y[j + 1] = pass;
            }
        }
    }

    for (i = 0; i < 20; i++){
        cout << Y[i] << " | ";
    }
}

void question13(){
    int i, j, num[10], pass;

    for (i = 0; i < 10; i++){
        cout << "Put the " << i+1 << " number: ";
        cin >> num[i];
    }

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10 - i; j++){
            if (num[j] < num[j + 1]){
                pass = num[j];
                num[j] = num[j + 1];
                num[j + 1] = pass;
            }
        }
    }

    for (i = 0; i < 10; i ++){
        cout << num[i] << " | ";
    }
}

int main(){
    int op;

    cout << "Choose a question number: ";
    cin >> op;

    if (op >= 1 && op <= 13){
        if (op == 1) question1();
        if (op == 2) question2();
        if (op == 3) question3();
        if (op == 4) question4();
        if (op == 5) question5();
        if (op == 6) question6();
        if (op == 7) question7();
        if (op == 8) question8();
        if (op == 9) question9();
        if (op == 10) question10();
        if (op == 11) question11();
        if (op == 12) question12();
        if (op == 13) question13();
    }
    else{
        cout << "The number isnt valid!" << endl;
    }
}