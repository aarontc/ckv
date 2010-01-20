
#include "ugen.h"

/* LIBRARY REGISTRATION */

int
open_ugen_step(lua_State *L)
{
	(void) luaL_dostring(L,
	"Step = {"
	"  new = function(class)"
	"    return {"
	"      next = 0.0,"
	"      tick = function(self)"
	"        self.last = self.next;"
	"      end"
	"    }"
	"  end"
	"}"
	);
	
	return 0;
}