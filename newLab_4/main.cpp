#include "inc/Command/GroupCommandText.h"
#include "inc/WorkFlow.h"
#include <iostream>
#include <WorkFlow.h>

//1) ������� ����������� ���������� � ���������������� ���������� ��� ������ � ���������� ������, � ������������ ������ �������� �����.
//2) ������������������ ������ ���������� ������ WorkFlow �� ������� ��������� ���������� ������ � ������� �����. ������������ ������������ ������� ������ ����� ������ �������� � ������� � ��������� ����� ���������
//3) ������������������ �������������� ������� � ���������� ������ � ��������c��� WorkFlow

int main() {
    setlocale(LC_ALL,"Rus");

    WorkFlow keyboard;

    keyboard.AddOneCommand("Key", InstractionText("������ ����������, "));
    keyboard.AddOneCommand("Key", InstractionText("��������� ������� "));
    keyboard.AddOneCommand("Key", InstractionText("������������ :))))"));

    keyboard.AddCommandGroup("Insert", GroupCommandText({ InstractionText("I"),InstractionText("want"),InstractionText("to have good New Year")}));

    keyboard.PressKey("Key");
    keyboard.PressKeyLong("Insert",2);
    keyboard.UndoCommand("Insert");
    keyboard.PressKeyLong("Insert",1);
    return 0;
}
