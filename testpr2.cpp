#include <iostream>
#include <map>
#include <string>

void task1() {

    int usersAmount = 2;
    int maxTries = 3;
    int currentTries = 0;

    bool logged = false;
    
    std::map<std::string, std::string> users[2] {};

    for (int i = 0; i < usersAmount; i++) {
        users[i]["Name"] = (std::string)"Test" + std::to_string(i+1);
        users[i]["Password"] = std::to_string(i+1);
    }

    while ( (currentTries < maxTries) && (!logged) )
    {

        currentTries++;

        std::cout << "Попытка " + std::to_string(currentTries) << std::endl;

        std::string name;
        std::string password;

        std::cout << "Введите имя:" << std::endl;
        std::cin >> name;

        std::cout << "Введите пароль:" << std::endl;
        std::cin >> password;

        int passes = 0;

        for (int i = 0; i < usersAmount; i++) {
            passes = 0;
            
            std::cout << users[i]["Name"] << " " << name << std::endl;
            std::cout << users[i]["Password"] << " " << name << std::endl;

            if (users[i]["Name"] == name) passes++;
            if (users[i]["Password"] == password) passes++;

            if (passes >= 2) break;
        }

        if (passes < 2) continue;

        logged = true;

    }

    if (logged) { 
        std::cout << "Вы вошли" << std::endl;
    }
    else {
        std::cout << "Неудачно" << std::endl;
    };

}

void task2() {
    
    int n;
    int maxN;
    int current;

    std::cout << "Введите кол-во чисел:" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++) {

        std::cout << "Введите число:" << std::endl;
        std::cin >> current;
        maxN = current > maxN ? current : maxN;

    }

    std::cout << "Максимальное число:" << std::endl;
    std::cout << maxN << std::endl;
}

void task3() {
    
    int current;
    int maxN;

    while (current)
    {
        std::cout << "Введите число:" << std::endl;
        std::cin >> current;
        maxN = current > maxN ? current : maxN;
    }

    std::cout << "Максимальное число:" << std::endl;
    std::cout << maxN << std::endl;

}

int main() {
    setlocale(LC_ALL, "");

    task3();

    return 0;
}