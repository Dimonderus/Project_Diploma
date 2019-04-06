#include <iostream>
#include <stdio.h>
using namespace std;

void function(int** array_interrupt, int size){
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size ; ++j) {
            cout << " " << array_interrupt[i][j];
        }
        cout << endl;
    }
}

void function_1 (int **a, int size){

    int d[size];
    int v[size]; // посещенные вершины
    int temp;
    int minindex, min;

    //Инициализация вершин и расстояний
    for (int i = 0; i < size; i++)
    {
        d[i] = 10000;
        v[i] = 1;
    }
    d[0] = 0;
    // Шаг алгоритма
    do {
        minindex = 10000;
        min = 10000;
        for (int i = 0; i<size; i++)
        { // Если вершину ещё не обошли и вес меньше min
            if ((v[i] == 1) && (d[i]<min))
            { // Переприсваиваем значения
                min = d[i];
                minindex = i;
            }
        }
        // Добавляем найденный минимальный вес
        // к текущему весу вершины
        // и сравниваем с текущим минимальным весом вершины
        if (minindex != 10000)
        {
            for (int i = 0; i<size; i++)
            {
                if (a[minindex][i] > 0)
                {
                    temp = min + a[minindex][i];
                    if (temp < d[i])
                    {
                        d[i] = temp;
                    }
                }
            }
            v[minindex] = 0;
        }
    } while (minindex < 10000);
    // Вывод кратчайших расстояний до вершин
    printf("\nMinimal size: \n");
    for (int i = 0; i<size; i++)
        printf("%5d ", d[i]);

    // Восстановление пути
    int ver[size]; // массив посещенных вершин
    int end = 4; // индекс конечной вершины = 5 - 1
    ver[0] = end + 1; // начальный элемент - конечная вершина
    int k = 1; // индекс предыдущей вершины
    int weight = d[end]; // вес конечной вершины

    while (end > 0) // пока не дошли до начальной вершины
    {
        for(int i=0; i<size; i++) // просматриваем все вершины
            if (a[end][i] != 0)   // если связь есть
            {
                int temp = weight - a[end][i]; // определяем вес пути из предыдущей вершины
                if (temp == d[i]) // если вес совпал с рассчитанным
                {                 // значит из этой вершины и был переход
                    weight = temp; // сохраняем новый вес
                    end = i;       // сохраняем предыдущую вершину
                    ver[k] = i + 1; // и записываем ее в массив
                    k++;
                }
            }
    }

    // Вывод пути (начальная вершина оказалась в конце массива из k элементов)
    printf("\nMinimal size link\n");
    for (int i = k-1; i>=0; i--)
        printf("%3d ", ver[i]);
}
int main() {

    int flag = 0;
    int m,n;
    int Number_Node;
    int Speed;
    int T_time_out;
    cout << "Enter to Number_Node : ";
    cin >> Number_Node;
    cout << "Enter to Speed : ";
    cin >> Speed;
    cout << "Enter to T_time_out: ";
    cin >> T_time_out;

    cout << "Enter links :"<< endl << endl;

    int **array_interrupt = new int* [Number_Node];   //Создание строк
    for (int i =0 ;i<Number_Node; i++){
        array_interrupt[i] = new int[Number_Node];  //Создание колонок для каждой строки
    }
    for ( int i = 0; i < Number_Node ; ++i) {
        for ( int j = 0; j < Number_Node ; ++j) {
            array_interrupt[i][j] = 0;
        }
    }
    for ( int i = 0; i < Number_Node ; ++i) {
        cout << "Enter info about " << i << " Node"<<endl;
        cout << "Delay in Node : 1"<< endl; // Заглушка для выставления задержки на узле
        for ( int j = i; j < Number_Node; ++j) {
            if (i==j) {
                array_interrupt[i][j] = 0;
                continue;
            }
           // cout << "Do system have link with this Node and Node "<< j << "?";
           // cin >> flag;
            //if (flag==1){
                cout << "Enter time of link with Node "<< i << " and "<< j << " :";
                cin >> array_interrupt[i][j];
                array_interrupt[j][i]=array_interrupt[i][j];
            //} else
            //array_interrupt[i][j] = 0;
            cout << endl;
        }
    }

    cout << "Array:" << endl;
    /*int k,l;
    for ( k = 0; k < Number_Node; ++k) {
        for (l = 0; l < Number_Node ; ++l) {
                cout << " " << array_interrupt[k][l];
        }
        cout << endl;
    }*/

    function(array_interrupt, Number_Node);
    function_1(array_interrupt, Number_Node);
}

