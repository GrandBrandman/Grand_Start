#include <unistd.h> // for usleep
#include <stdio.h>
#include <stdlib.h>

void clearScreen() 
{
system("clear"); 
}

int main() 
{
    usleep(1000000);
    printf("\n            🎯 🔒  [🚀]\n");   //Target locked!
    usleep(1000000);
    clearScreen();
    printf("\n                🧨 💣 🧨\n\n\n\n\n\n\n\n        🚀\n");
    usleep(100000);
    clearScreen();
    printf("\n\n                🧨 💣 🧨\n\n\n\n\n\n          🚀\n");
    usleep(100000);
    clearScreen();
    printf("\n\n\n                🧨 💣 🧨\n\n\n\n            🚀\n");
    usleep(100000);
    clearScreen();
    printf("\n\n\n\n                🧨 💣 🧨\n\n              🚀\n");
    usleep(100000);
    clearScreen();
    printf("\n\n\n\n\n\n                🧨🚀💣 🧨\n");
    usleep(300000);
    clearScreen();
    
    time_t start_time = time(NULL);  // Record the start time
    int duration = 2;               // Duration in seconds

    do {
    printf("\n           🔥 💥  ⚡        💥        🔥💥     💥");
    printf("\n\n                  🔥 💥  ⚡        💥        \n  🔥💥          💥");
    printf("\n   🔥 💥  ⚡       \n  💥      🔥   💥\n       💥");
    printf("\n\n\n            🔥\n  💥  ⚡        💥        🔥  💥     \n 💥");
    printf("\n\n\n    🔥  💥      🔥 \n  💥  ⚡        💥        🔥\n  💥         💥");
    clearScreen();
    usleep(10000);
    printf("\n     🔥        💥⚡   💥 🔥     💥     💥");
    printf("\n             🔥      💥   \n  ⚡   💥       🔥 \n  💥   💥");
    printf("\n\n      🔥\n   💥          🔥 💥  ⚡        \n   💥        🔥💥       💥");
    printf("\n\n\n             🔥 💥  ⚡        💥        🔥\n  💥       💥");
    printf("\n\n\n          🔥        💥 \n     ⚡💥           🔥   💥    💥");
    clearScreen();
    usleep(10000);
    printf("\n           🔥      💥  \n⚡   💥     🔥   💥    💥");
    printf("\n   🔥   💥    ⚡      💥      🔥    \n  💥      💥");
    printf("\n\n                          🔥 💥  ⚡        💥        🔥\n💥       💥");
    printf("\n\n\n     🔥 \n💥  ⚡        💥        🔥💥       💥");
    printf("\n\n\n  🔥\n💥     🔥 💥  ⚡        💥        🔥💥       💥\n");
    clearScreen();
    usleep(10000);
        if (time(NULL) - start_time >= duration) 
        {
            break;  
        }
    } while (1);
    
    time_t time_start = time(NULL);  // Record the start time
    int wait = 1;
    
    do { 
    printf("\n    🔥 ✨        💥     ✨💥     💥");
    printf("\n\n          💥  ✨        💥        \n  ✨💥          ✨");
    printf("\n          ✨      🔥   ✨       ✨");
    printf("\n\n\n         ✨\n   💥  ✨      💥        🔥  💥     💥");
    printf("\n\n\n    🔥  ✨      🔥 \n  💥  ⚡        💥\n        ✨    ✨        💥\n");
    clearScreen();
    usleep(30000);
    printf("\n           🔥        💥  \n  ✨        💥        ✨\n");
    printf("\n\n                🔥     💥       ✨       ✨💥  ✨");
    printf("\n           ✨    ✨  ⚡       \n   ✨        🔥          ✨");
    printf("\n\n\n              ✨\n  💥  ✨        💥        🔥");
    printf("\n\n\n         🔥 ✨      🔥    💥  ⚡        💥 \n  ✨\n");
    clearScreen();
    usleep(30000);
        if (time(NULL) - time_start >= wait)
        {
            break; 
        }    
    } while(1);
    
    time_t start = time(NULL);  // Record the start time
    int wait_t = 0.9;
    
    do {
    printf("\n             💥 ✨\n     💥      ✨        💥\n");
    printf("\n\n      ✨        💥     ✨        💥\n");
    printf("\n            🔥      ⚡       ✨🔥\n");
    printf("\n\n\n                 ✨       💥       🔥✨   \n");
    printf("\n\n\n            🔥 ✨      🔥    💥  \n⚡    \n");
    clearScreen();
    usleep(40000);
    printf("\n                  ✨       💥       💥  ✨  💥 ✨✨\n");
    printf("\n\n                    \n  ✨             💥  \n");
    printf("\n              ✨         ⚡       ✨  🔥\n");
    printf("\n\n\n                💥            ✨           \n💥      \n");
    printf("\n\n\n                  ✨🔥        ✨\n");
    clearScreen();
    usleep(40000);
    if (time(NULL) - start >= wait_t)
        {
            break; 
        }    
    } while(1);
    
    time_t start_ = time(NULL);  // Record the start time
    int wait_ = 0.8;
    
    do {
    printf("\n                   ✨       💥     ✨\n");
    printf("\n\n        ✨             🔥            ✨");
    printf("\n               ✨         ⚡       ✨  🔥\n");
    printf("\n\n\n                  ✨    💥      \n");
    printf("\n\n\n       ✨🔥        ✨          🔥       ✨\n");
    clearScreen();
    usleep(55000);
    printf("\n               ✨              ✨\n");
    printf("\n\n                      ✨");
    printf("\n          ✨                 ✨        \n");
    printf("\n\n\n                ✨\n");
    printf("\n\n\n           ✨        ✨        ✨\n");
    clearScreen();
    usleep(55000);
    if (time(NULL) - start_ >= wait_)
        {
            break; 
        }    
    } while(1);
    
    time_t _start_ = time(NULL);  // Record the start time
    int _wait_ = 1.3;
    
    do {
    printf("\n                 ✨\n");
    printf("\n\n                      ✨");
    printf("\n         💥 ✨                 ✨\n");
    printf("\n\n\n               🔥 ✨\n");
    printf("\n\n\n           ✨        ✨    💥    ✨\n");
    clearScreen();
    usleep(70000);
    printf("\n          ✨                💥 ✨\n");
    printf("\n\n                   ✨");
    printf("\n               🔥✨                 ✨        \n");
    printf("\n\n\n                     💥✨\n");
    printf("\n\n\n      ✨    ⚡      ✨        ✨\n");
    clearScreen();
    usleep(70000);
    if (time(NULL) - _start_ >= _wait_)
        {
            break; 
        }    
    } while(1);
    
    time_t _start__ = time(NULL);  // Record the start time
    int _wait__ = 1.5;
    
    do {
    printf("\n                        ✨\n");
    printf("\n\n            ✨\n");
    printf("\n\n\n                            ✨\n");
    printf("\n\n\n\n              💥 ✨\n");
    clearScreen();
    usleep(150000);
    printf("\n                         💥           ✨\n");
    printf("\n\n                ✨\n");
    printf("\n\n\n                            ✨\n");
    printf("\n\n\n\n         🔥  ✨\n");
    clearScreen();
    usleep(150000);
    printf("\n                        ✨\n");
    printf("\n\n                 ⚡     ✨\n");
    printf("\n\n\n            🔥               ✨\n");
    printf("\n\n\n\n                      💥            ✨\n");
    clearScreen();
    usleep(150000);
    
    if (time(NULL) - _start__ >= _wait__)
        {
            break; 
        }    
    } while(1);
    
    time_t __start__ = time(NULL);  // Record the start time
    int __wait__ = 2;
    
    printf("\033[41;33m");
    printf("︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻\n");
    printf("【 𝙈𝙄𝙎𝙎𝙄𝙊𝙉  𖤍  𝙎𝙐𝘾𝘾𝙀𝙎𝙎𝙁𝙐𝙇𝙇   】\n");
    printf("︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼\n");
    printf("\033[0m");
    return 0;
}
