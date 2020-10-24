// lab 03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <tasks.hpp>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Task 1.
void multi_2(vector<int>& input) {
    for (unsigned int i = 0; i < input.size(); i++)
    {
        input[i] *= 2;
    }
}

void reduce_a(vector<int>& input, int a) {
    for (unsigned int i = 0; i < input.size(); i++) {
        input[i] -= a;
    }

}

void div_on_first(vector<int>& input) {
    int first = input[0];
    for (unsigned int i = 0; i < input.size(); --i)
    {
        input[i] /= first;
    }

}
// Task 2.
int sum(const vector<int>& input) {
    int sum = 0;
    for (unsigned int i = 0; i < input.size(); i++)
    {
        sum += input[i];
    }
    return sum;
}
int square_sum(const vector<int>& input) {
    int square_sum = 0;
    for (unsigned int i = 0; i < input.size(); i++)
    {
        square_sum += ((input[i]) * (input[i]));
    }
    return square_sum;
}
int sum_six(const vector<int>& input) {
    int sum_six = 0;
    for (int i = 0; i < 7; i++)
    {
        sum_six += input[i];
    }
    return sum_six;
}
int sum_k(const vector<int>& input, int k1, int k2) {
    int sum_k = 0;
    cin >> k1 >> k2;
    if (k2 >= k1) {
        for (int i = k1; i < k2; i++) {
            sum_k += input[i];
        }
    }
    return sum_k;

}
int mean(const vector<int>& input) {
    double mean = 0;
    unsigned k = input.size();
    for (unsigned int i = 0; i < input.size(); i++)
    {
        mean += input[i];

    }
    mean /= k;
    return mean;
}
int mean_k(const vector<int>& input, int s1, int s2) {
    cin >> s1 >> s2;
    double mean_k = 0;
    if (s2 > s1)
    {
        for (int i = s1; i < s2 + 1; i++)
        {
            mean_k += input[i];
        }
        mean_k /= (s2 - s1 + 1);
    }
    return mean_k;
}
// Task 3.
void swap_el(vector<int>& input) {
    swap(input[0], input[17]);
    swap(input[1], input[18]);
    swap(input[2], input[19]);
}
// Task 4.
void remove_negative(vector<int>& input) {
    int udal = 0;
    for (unsigned int i = 0; i < input.size(); i++) {
        if (input[i] < 0) {
            udal++;
        }
        if (udal == 1) {
            unsigned int  j = i;
            input.erase(input.begin() + j);
        }
    }
}
void remove_last_even(vector<int>& input) {
    int udal = 0;
    for (unsigned int i = input.size(); i > 0; i--) {
        if (input[i] % 2 == 0) {
            udal++;
        }
        if (udal == 1) {
            unsigned int j = i;
            input.erase(input.begin() + j);
        }
    }
}
// Task 5.
bool name_is_even(const string& name) {
    if (name.length() % 2 == 0) {
        return true;
    }
    else
    {
        return false;
    }
}

// Task 6.
bool first_is_longer(const string& name_one, const string& name_two) {
    if (name_one.length() > name_two.length()) {
        return true;
    }
    else
    {
        return false;
    }
}

// Task 7.
void longest_shortest(const string& name_one, const string& name_two,
    const string& name_three, string& the_longest,
    string& the_shortest) {
    if (name_one.length() > name_two.length()) {
        the_longest = name_one;
        the_shortest = name_two;
    }
    else {
        the_longest = name_two;
        the_shortest = name_one;
    }
    if (name_three.length() > the_longest.length()) {
        the_longest = name_three;
    }
    if (name_three.length() < the_shortest.length()) {
        the_shortest = name_three;
    }
}

// Task 8.
string sub_str(const string& word, int m, int n) {
    return word.substr(word[m], word[n - m]);
}

// Task 9.
void add_stars(string& word) {
    for (unsigned int i = 0; i < word.length(); i++) {
        word.insert(0, string("*"));
    }
    for (unsigned int i = 0; i < word.length(); i++) {
        word.insert(word.length(), string("*"));
    }


}

// Task 10.
int percent_of_a(const string& word) {
    int col = 0;
    int percent_of_a;
    for (unsigned int i = 0; i < word.length(); i++) {
        if (word[i] == 'a') {
            col++;
        }
        percent_of_a = (col / word.length()) * 100;
    }
    return percent_of_a;
}

// Task 11.
string replace_can(const string& new_word) {
    string str = new_word;
    for (unsigned int i = 0; i < new_word.length() - 3; i++) {
        if (new_word[i] == 'c' && new_word[i + 1] == 'a' && new_word[i + 2] == 'n' && new_word[i + 3] == ' ') {
            str.erase(i, 3);
            str.insert(i, string("new_word"));
        }
    }
    return str;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
