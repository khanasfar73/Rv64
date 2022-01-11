#include "verilated.h"
#include "Decode.h"
#include "tb_Decode.hpp"

int main(int argc, char **argv, char **env)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    Decode *tb = new Decode;

    tb->eval();

    for (auto test : all)
    {
    }

    delete tb;
    exit(0);
}