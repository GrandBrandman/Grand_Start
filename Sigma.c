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
    int duration = 3;               // Duration in seconds

    do {
    printf("\n           🔥 💥  ⚡        💥        🔥💥     💥");
    printf("\n\n                  🔥 💥  ⚡        💥        \n🔥💥          💥");
    printf("\n   🔥 💥  ⚡       \n 💥      🔥   💥\n       💥");
    printf("\n\n\n            🔥\n 💥  ⚡        💥        🔥  💥     \n\n💥");
    printf("\n\n\n    🔥  💥      🔥 \n💥  ⚡        💥        🔥\n  💥         💥");
    clearScreen();
    usleep(10000);
    printf("\n     🔥        💥⚡   💥 🔥     💥     💥");
    printf("\n             🔥      💥   \n ⚡   💥       🔥 \n  💥   💥");
    printf("\n\n      🔥\n💥          🔥 💥  ⚡        \n💥        🔥💥       💥");
    printf("\n\n\n             🔥 💥  ⚡        💥        🔥\n\n💥       💥");
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
    printf("\n           🔥 \n 💥  ✨        💥        ✨💥     💥");
    printf("\n\n                  🔥 💥  ✨        💥        \n✨💥          ✨");
    printf("\n             \n ✨      🔥   ✨       ✨");
    printf("\n\n\n            ✨\n 💥  ✨      💥        🔥  💥     💥");
    printf("\n\n\n    🔥  ✨      🔥 \n💥  ⚡        💥\n        ✨    ✨        💥\n");
    clearScreen();
    usleep(30000);
    printf("\n           🔥        💥  \n✨        💥        ✨\n");
    printf("\n\n                🔥     💥       ✨       ✨💥  ✨");
    printf("\n           ✨    ✨  ⚡       \n ✨        🔥          ✨");
    printf("\n\n\n              ✨\n 💥  ✨        💥        🔥");
    printf("\n\n\n         🔥 ✨      🔥    💥  ⚡        💥 \n  ✨\n");
    clearScreen();
    usleep(30000);
        if (time(NULL) - time_start >= wait)
        {
            break; 
        }    
    } while(1);
    
    time_t start = time(NULL);  // Record the start time
    int wait_t = 1;
    
    do {
    printf("\n             💥 ✨\n     💥      ✨        💥\n");
    printf("\n\n      ✨        💥     ✨        💥\n");
    printf("\n            🔥      ⚡       ✨🔥\n");
    printf("\n\n\n                 ✨       💥       🔥✨   \n");
    printf("\n\n\n            🔥 ✨      🔥    💥  \n⚡    \n");
    clearScreen();
    usleep(30000);
    printf("\n                  ✨       💥       💥  ✨  💥 ✨✨\n");
    printf("\n\n                    \n  ✨             💥  \n");
    printf("\n              ✨         ⚡       ✨  🔥\n");
    printf("\n\n\n                💥            ✨           \n💥      \n");
    printf("\n\n\n                  ✨🔥        ✨\n");
    clearScreen();
    usleep(30000);
    if (time(NULL) - start >= wait_t)
        {
            break; 
        }    
    } while(1);
    
    time_t start_ = time(NULL);  // Record the start time
    int wait_ = 2;
    
    do {
    printf("\n                   ✨       💥     ✨\n");
    printf("\n\n        ✨             🔥            ✨");
    printf("\n               ✨         ⚡       ✨  🔥\n");
    printf("\n\n\n                  ✨    💥      \n");
    printf("\n\n\n       ✨🔥        ✨          🔥       ✨\n");
    clearScreen();
    usleep(50000);
    printf("\n               ✨              ✨\n");
    printf("\n\n                      ✨");
    printf("\n          ✨                 ✨        \n");
    printf("\n\n\n                ✨\n");
    printf("\n\n\n           ✨        ✨        ✨\n");
    clearScreen();
    usleep(50000);
    if (time(NULL) - start_ >= wait_)
        {
            break; 
        }    
    } while(1);
    
    time_t _start_ = time(NULL);  // Record the start time
    int _wait_ = 2;
    
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
    int _wait__ = 2.5;
    
    do {
    printf("\n                     ✨\n");
    printf("\n\n            ✨\n");
    printf("\n\n\n                         ✨\n");
    printf("\n\n\n\n              💥 ✨\n");
    clearScreen();
    usleep(80000);
    printf("\n                           💥               ✨\n");
    printf("\n\n      ✨\n");
    printf("\n\n\n                           ✨\n");
    printf("\n\n\n\n          🔥  ✨\n");
    clearScreen();
    usleep(80000);
    printf("\n         ✨\n");
    printf("\n\n                    ⚡     ✨\n");
    printf("\n\n\n            🔥     ✨\n");
    printf("\n\n\n\n                    💥            ✨\n");
    clearScreen();
    usleep(80000);
    
    if (time(NULL) - _start__ >= _wait__)
        {
            break; 
        }    
    } while(1);
    printf("︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻\n");
    printf("【 𝐌𝐈𝐒𝐒𝐈𝐎𝐍  𖤍  𝙎𝙐𝘾𝘾𝙀𝙎𝙎𝙁𝙐𝙇𝙇   】\n");
    printf("︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼\n");
    
    return 0;
}
