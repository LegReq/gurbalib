inherit "/std/room";

#include "../../domain.h"

void setup(void) {
   add_area("2.4.5");

   set_short("A dimly lit forest");
   set_long("You are in part of a dimly lit forest.  " +
      "Trails lead north, east and west.");

   add_exit("north",DIR + "/rooms/south/sforst39.c");
   add_exit("east", DIR + "/rooms/south/sforst42.c");
   add_exit("west", DIR + "/rooms/south/sforst44.c");
}
