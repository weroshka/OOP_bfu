#include "FileUserManager.h"
#include "FileUserRepository.h"

std::pair<std::string, std::string> getLoginPassword() {
    std::string login, password;
    std::cout << "������� login:" << std::endl;
    std::cin >> login;
    std::cout << "������� password:" << std::endl;
    std::cin >> password;
    return std::make_pair(login, password);
}

std::vector<std::string> getRegistrationData() {
    std::string name, login, password;
    std::cout << "��� ��� �����? (������� ������ ���):" << std::endl;
    std::cin >> name;
    std::cout << "������� login:" << std::endl;
    std::cin >> login;
    std::cout << "������� password:" << std::endl;
    std::cin >> password;
    return { name, login, password };
}


int main() {
    setlocale(LC_ALL,"Rus");
    auto userManager = FileUserManager();
    auto userRepository = FileUserRepository("data.txt");

    std::vector<User> users = userRepository.Get();
    int operation, amountUser = users.size();
    User currentUser;

    while (true) {
        std::cout << "\n**********\n��������:\n-1) ����� �� ����������\n0) ����� �� ��������\n1) ����\n2) ������������������\n3) ����� ������������ �� �����\n4) ����������� ���� �������������" << std::endl;
        std::cin >> operation;

        if (operation == -1) {
            return 0;
        }
        else if (operation == 0) {
            if (userManager.IsAuthorized())
                userManager.SignOut();
        }
        else if (operation == 1) {
            if (!userManager.IsAuthorized())
            {
                auto loginData = getLoginPassword();
                currentUser = userRepository.GetByLoginPassword(loginData.first, loginData.second);
                userManager.LogIn(currentUser);
                if (userManager.IsAuthorized()) {
                    std::cout << "������������ " << currentUser.getName() << " �����������" << std::endl;
                }
            }
            else {
                std::cout << "����� ����� ������� ������� �� ��������" << std::endl;
            }

        }
        else if (operation == 2) {
            if (!userManager.IsAuthorized()) {
                auto registrationData = getRegistrationData();
                currentUser = User(amountUser + 1, registrationData[0], registrationData[1], registrationData[2]);
                userManager.SignIn(currentUser);
                if (userManager.IsAuthorized()) {
                    std::cout << "������������ " << currentUser.getName() << " ���������������" << std::endl;
                }
            }
            else {
                std::cout << "����� ����� ������� ������� �� ��������" << std::endl;
            }
        }
        else if (operation == 3) {
            if (userManager.IsAuthorized())
            {
                std::cout << "������� ��� ������������:\n";
                std::string userName;
                std::cin >> userName;
                auto findUser = userRepository.GetByName(userName);
                std::cout << findUser.getId() << " " << findUser.getName() << " " << findUser.getLogin() << std::endl;
            }
            else {
                std::cout << "������� ���������� ��������������" << std::endl;
            }
        }
        else if (operation == 4) {
            if (userManager.IsAuthorized()) {
                std::cout << "������ ���� �������������:\n";
                for (auto& user : users) {
                    std::cout << user.getId() << " " << user.getName() << " " << user.getLogin() << std::endl;
                }
            }
            else {
                std::cout << "������� ���������� ��������������" << std::endl;
            }

        }
    }
    return 0;
}