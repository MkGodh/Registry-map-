#include <iostream>
#include <string>
#include <map>


int main()
{
    std::multimap<std::string, int> registry;    // Карта для хранения телефонов
    std::string surName;
    int count = 1;
    while (surName != "q") {

        std::cout << "Please input your Surname: " << std::endl;
        std::cin >> surName;
        std::cout << std::endl;
        if (surName != "Next" && surName != "q") {
            registry.insert(std::make_pair(surName, count));
            count++;
        }
        else if (surName == "Next") {
            if (!registry.empty()) {
                std::cout << "Get over here!!! " << registry.begin()->first << std::endl;
                registry.erase(registry.begin());
            }
            else {
                std::cout << "No one is waiting" << std::endl;
            }
        }
        for (const auto& entry : registry) {
            std::cout << entry.first << std::endl;
        }
    }


    return 0;
}

