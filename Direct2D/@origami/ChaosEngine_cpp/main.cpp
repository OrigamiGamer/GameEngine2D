#include "public_includes.h"
#include "game_loop.h"

using namespace game;

int thread_window()
{
    cout << "this is a new thread." << endl;
    return (0);
}

int main()
{
    cout << "Engine Start" << endl;

    int *ptr; // 空指针
    // 字符串 是数据地址

    // char *ptrChar;
    // ptrChar = "asdasd";

    // cout << ptrChar << endl;

    game::game_loop();

    // CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)(pf), 0, 0, 0);

    return (0);
}