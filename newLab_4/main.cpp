#include "inc/Command/GroupCommandText.h"
#include "inc/WorkFlow.h"
#include <iostream>
#include <WorkFlow.h>

//1) Создать виртуальную клавиатуру с переназначаемыми действиями для клавиш и комбинаций клавиш, с возможностью отката действий назад.
//2) Продемонстрировать работу клавиатуры сделал WorkFlow из нажатий различных комбинаций клавиш и откатов назад. Симулировать демонстрацию нажатий клавиш путем вывода значения в консоль и задержкой между нажатиями
//3) Продемонстрировать переназначение клавиши и комбинации клавиш с перезапуcком WorkFlow

int main() {
    setlocale(LC_ALL,"Rus");

    WorkFlow keyboard;

    keyboard.AddOneCommand("Key", InstractionText("Михаил Дмитриевич, "));
    keyboard.AddOneCommand("Key", InstractionText("поставьте автомат "));
    keyboard.AddOneCommand("Key", InstractionText("Пожааалуйста :))))"));

    keyboard.AddCommandGroup("Insert", GroupCommandText({ InstractionText("I"),InstractionText("want"),InstractionText("to have good New Year")}));

    keyboard.PressKey("Key");
    keyboard.PressKeyLong("Insert",2);
    keyboard.UndoCommand("Insert");
    keyboard.PressKeyLong("Insert",1);
    return 0;
}
