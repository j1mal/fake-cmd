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
    printf("HACKING INTO NASA......\n");
    wait_ms(1000);
    printf("HACK SUCCESSFUL. NASA ACCESS GRANTED.\n");

}

void help() {
    printf("Commands : help, hack, exit\n");
}

void execute_command(char *input){
    
}





// cmd sys
typedef void (*command_fn)();
typedef struct {
    char *name;
    command_fn func;
} command;

command commands[] = {
    {"help",help},
    {"hack",hack_nasa}
};

int main() {
    printf(">>>>>>>>>>   FakeCMD succesfully loaded. Run 'help' to see commands.\n");
    printf(">>>>>>>>>>   Original source @ https://github.com/j1mal/fake-cmd\n\n");
    char input[100];
    while(1){
        
        printf("j1mal@FakeCMD DevKit ~ $ ");
        scanf("%99s",input);
        if (strcmp(input,"exit") == 0){
            break;
        }
        

    }





    return 0;
}