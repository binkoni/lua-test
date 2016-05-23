#include <stdio.h>
#include <stdlib.h>
#include <lauxlib.h>
#include <lua.h>
#include <lualib.h>

// print "Hello World" using lua's print() function
int main(void)
{
    lua_State* L;
    L = luaL_newstate();
    luaL_openlibs(L);
    lua_getglobal(L, "print");
    lua_pushliteral(L, "Hello World");
    lua_pcall(L, 1, 1, 0);
    lua_close(L);
    return 0;
}
