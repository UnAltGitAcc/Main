#include <iostream>

void task2() {
    int a = 10;
    int* p = &a;
    (*p) += 15;
    std::cout << (*p) << std::endl;;
}

void task3() {
    int a{};
    unsigned b{};
    char c{'t'};

    int* ap = &a;
    unsigned* bp = &b;
    char* cp = &c;

    ap--;
    bp--;
    cp--;

    std::cout << &a << " " << &b << " " << (void*)c << " " << std::endl;

    std::cout << (&a - ap) * sizeof(a) << std::endl;
    std::cout << (&b - bp) * sizeof(b) << std::endl;
    std::cout << sizeof(c) << std::endl;
}

void task1() {

    const int n{ 3 };
    const int p{ 2 };

    int ages[n][p]{ };
    std::string names[n][p]{ };

    for (int i = 0; i < n; i++) {
        int years;
        int months;

        std::string firstname;
        std::string lastname;

        std::cout << "Введите возраст (год): " << std::endl;
        std::cin >> years;

        std::cout << "Введите возраст (месяц): " << std::endl;
        std::cin >> months;

        std::cout << "Введите имя: " << std::endl;
        std::cin >> firstname;

        std::cout << "Введите фамалию: " << std::endl;
        std::cin >> lastname;

        ages[i][0] = years;
        ages[i][1] = months;

        names[i][0] = firstname;
        names[i][1] = lastname;
    }

    //std::cout << "Фамилия" << "\t" << "Имя" << "\t" << "Возраст" << "\n";

    for (int i = 0; i < n; i++) {
        int redactedage = ages[i][0] * 12 + ages[i][1];
        std::cout << names[i][1] << '\t' << names[i][0] << '\t' << redactedage << '\n';
    }
}

int main()
{
    setlocale(LC_ALL, "");

    task3();
}
