#include <iostream>
#include <ctime>
using namespace std;
 /*создать одномерный массив с рандомными числами*/


int main()
{    
    cout << "Enter the count number: ";
    int n;
    cin >> n;
    int arr[n];
    srand (time(NULL));                                 // делаем чтобы рандром постоянно обновлялся

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;                          // заносим рандомом числа
    }

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";                          // выводим несортированный массив
    }

    cout << endl;

    int min_elem = arr[0];                              // ищем минимальный элемент в массиве
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min_elem)                          // если индекс i меньше чем минимальный элемент arr[0] 
        {
            min_elem = arr[i];                          // то мы меняем местами индекс i с min_elem
        }
        
    }
    cout << "Min_elem = " << min_elem << endl;           // выводим минимальный элемент в массиве

    for (int i = 0; i < n - 1; i++)                      // перебираем инициализированный массив
    {
     
        for (int j = 0; j < n - i - 1; j++)             // вторая переменная которая будет сравнивать числа с соседними, (SIZE = константа массива, i = массив, i - 1 от массива отнимаем последнее значение, потому что последнее значение считается большим)
        {
            if (arr[j + 1] < arr[j])                    // проверяем индекс j меньше чем j с шагом + 1?
            {
                int temp = arr[j];                      // создаём переменную для храниния и присваваем j с шагом + 1
                arr[j] = arr[j + 1];                    // присваиваем j с шагом + 1 к arr[j]
                arr[j + 1] = temp;                      // и теперь arr[j] присваиваем к изначальной переменной temp, которая была arr[j + 1]         
            }
        }
    }
    cout << endl;
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i ++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

