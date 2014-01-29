inherit "/std/room";

#include "../domain.h"

void setup(void) {
   add_area("2.4.5");

   set_short("A large open plain");
   set_long("A large open plain.  There is a river to the east and " +
      "some kind of building to the west.");

   add_exit("west", DIR + "/rooms/ruin.c");

   set_objects (([
      DIR + "/monsters/frog.c": 1,
      DIR + "/obj/stethoscope.c": 1,
   ]));
}
