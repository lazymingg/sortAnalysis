#include "../include/mode.h"
using namespace std;
int main()
{
    // if (argc < 1)
    // {
    //     cout << "plz enter your parameters\n";
    //     cout << "use ./main -h for help\n";
    //     cout << "use ./main -p for prototypes\n";
    //     return 1;
    // }
    char argc = 4;
    char *argv[] = {"main.exe", "-ming", "radix-sort", "size here", "-both"};
// Evaluate the algorithms on datasets of varying sizes: 10,000, 30,000, 50,000,
// 100,000, 300,000, and 500,000 elements.
    argv[3] = "10000";
    algorithmMode(argc, argv);
    argv[3] = "30000";
    algorithmMode(argc, argv);
    argv[3] = "50000";
    algorithmMode(argc, argv);
    argv[3] = "100000";
    algorithmMode(argc, argv);
    argv[3] = "300000";
    algorithmMode(argc, argv);
    argv[3] = "500000";
    algorithmMode(argc, argv);
    return 0;
}