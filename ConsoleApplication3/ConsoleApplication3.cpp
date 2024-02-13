#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL,"RUS");
    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    // Создаем двумерный вектор
    vector<vector<double>> matrix(rows, vector<double>(cols));

    // Вводим элементы массива
    for (int i = 0; i < rows; ++i) {
        cout << "Введите элементы строки " << i + 1 << ": ";
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Вычисляем среднее арифметическое элементов строк
    vector<double> averages(rows);
    for (int i = 0; i < rows; ++i) {
        double sum = 0.0;
        for (int j = 0; j < cols; ++j) {
            sum += matrix[i][j];
        }
        averages[i] = sum / cols;
    }

    // Выводим результаты
    cout << "Средние арифметические элементов строк:\n";
    for (int i = 0; i < rows; ++i) {
        cout << "Строка " << i + 1 << ": " << averages[i] << endl;
    }

    return 0;
}

