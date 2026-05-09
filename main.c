#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void wait_ms(int ms) {
    #ifdef _WIN32
        Sleep(ms);
    #else
        usleep(ms * 1000);
    #endif
}







void hack_nasa() {
    printf("HACKING INTO NASA......");
    wait_ms(1000);
    printf("HACK SUCCESSFUL. NASA ACCESS GRANTED.");

}






int main() {
    printf("---   Welcome to Fake CMD. Run 'help' to see commands.   ---\n");
    printf("---   https://github.com/j1mal/fake-cmd   ---\n");





    printf("j1mal@FakeCMD DevKit ~\n$ ");
    getchar();
    return 0;
}