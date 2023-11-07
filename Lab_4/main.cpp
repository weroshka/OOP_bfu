#include "WorkFlow.h"

int main() {
    setlocale(LC_ALL,"Rus");

    WorkFlow workFlow;

    //Демонстрация работы клавиатуры
    workFlow.PressKey("A");
    workFlow.PrintActions();

    workFlow.PressKey("Ctrl+Shift+L");
    workFlow.PrintActions();

    workFlow.PressKey("S");
    workFlow.PrintActions();

    //Переназначение клавиши "S"
    workFlow.RemapKey("S", "'Summer'");
    workFlow.PrintActions();

    //демонстрации нажатий клавиш с задержкой, откат действия назад
    for (int i = 0; i < 3; ++i) {
        workFlow.UndoLastAction();
        workFlow.PressKeyLong("Ctrl+X",3);
        workFlow.PrintActions();
    }

    return 0;
}
