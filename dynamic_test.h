#pragma once

using func = void (*)();

#define LOOP_COUNT 1000000000

void static_func();
void static_func_loop();
void static_func_func();
void static_func_pfunc();
void static_func_dfunc();
void dynamic_func();
void dynamic_func_loop();
void dynamic_func_func();
void dynamic_func_pfunc();
extern func sf;
extern func df;
