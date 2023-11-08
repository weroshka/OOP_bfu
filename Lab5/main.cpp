#include "FileUserManager.h"
#include "FileUserRepository.h"

std::pair<std::string, std::string> getLoginPassword() {
    std::string login, password;
    std::cout << "Введите login:" << std::endl;
    std::cin >> login;
    std::cout << "Введите password:" << std::endl;
    std::cin >> password;
    return std::make_pair(login, password);
}

std::vector<std::string> getRegistrationData() {
    std::string name, login, password;
    std::cout << "Как Вас зовут? (Введите только имя):" << std::endl;
    std::cin >> name;
    std::cout << "Введите login:" << std::endl;
    std::cin >> login;
    std::cout << "Введите password:" << std::endl;
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
        std::cout << "\n**********\nОперации:\n-1) Выход из приложения\n0) Выход из аккаунта\n1) Вход\n2) Зарегистрироваться\n3) Поиск пользователя по имени\n4) Просмотреть всех пользователей" << std::endl;
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
                    std::cout << "Пользователь " << currentUser.getName() << " авторизован" << std::endl;
                }
            }
            else {
                std::cout << "Чтобы войти сначала выйдите из аккаунта" << std::endl;
            }

        }
        else if (operation == 2) {
            if (!userManager.IsAuthorized()) {
                auto registrationData = getRegistrationData();
                currentUser = User(amountUser + 1, registrationData[0], registrationData[1], registrationData[2]);
                userManager.SignIn(currentUser);
                if (userManager.IsAuthorized()) {
                    std::cout << "Пользователь " << currentUser.getName() << " зарегистрирован" << std::endl;
                }
            }
            else {
                std::cout << "Чтобы войти сначала выйдите из аккаунта" << std::endl;
            }
        }
        else if (operation == 3) {
            if (userManager.IsAuthorized())
            {
                std::cout << "Введите имя пользователя:\n";
                std::string userName;
                std::cin >> userName;
                auto findUser = userRepository.GetByName(userName);
                std::cout << findUser.getId() << " " << findUser.getName() << " " << findUser.getLogin() << std::endl;
            }
            else {
                std::cout << "Сначала необходимо авторизоваться" << std::endl;
            }
        }
        else if (operation == 4) {
            if (userManager.IsAuthorized()) {
                std::cout << "Список всех пользователей:\n";
                for (auto& user : users) {
                    std::cout << user.getId() << " " << user.getName() << " " << user.getLogin() << std::endl;
                }
            }
            else {
                std::cout << "Сначала необходимо авторизоваться" << std::endl;
            }

        }
    }
    return 0;
}