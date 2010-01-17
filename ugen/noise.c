
#include "../ckv.h"
#include "ugen.h"

/* LIBRARY REGISTRATION */

int
open_ugen_noise(lua_State *L)
{
	(void) luaL_dostring(L,
	"Noise = {"
	"  new = function(class)"
	"    return {"
	"      tick = function(self)"
	"        self.last = math.random() * 2.0 - 1.0;"
	"      end"
	"    }"
	"  end"
	"}"
	);
	
	return 0;
}
