#include <iostream>
#include <vector>
#include <string>

int main()
{
    // ----------------------------------------------------
    // 1차원 벡터 (std::vector<std::string>)
    // ----------------------------------------------------
    std::cout << "## 1D Vector Example ##\n";
    std::vector<std::string> fruits = {"apple", "banana", "cherry"};
    fruits.push_back("orange");

    for (const std::string &fruit : fruits)
    {
        std::cout << fruit << " ";
    }
    std::cout << "\n\n";

    // ----------------------------------------------------
    // 2차원 벡터 (std::vector<std::vector<std::string>>)
    // ----------------------------------------------------
    std::cout << "## 2D Vector Example ##\n";
    std::vector<std::vector<std::string>> groups;

    groups.push_back({"HTML", "CSS", "JavaScript"});
    groups.push_back({"C++", "Java", "Python", "Go"});
    groups.emplace_back(std::initializer_list<std::string>{"SQL", "MongoDB"}); // emplace_back도 동일하게 사용 가능

    for (int i = 0; i < groups.size(); ++i)
    {
        std::cout << "Group " << i + 1 << ": ";
        for (int j = 0; j < groups[i].size(); ++j)
        {
            std::cout << groups[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}