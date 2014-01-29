inherit "/std/room";

#include "../domain.h"

void setup(void) {
   add_area("2.4.5");

   set_short("Deep forest");
   set_long("You are in the deep forest.");

   add_exit("north", DIR + "/rooms/forest8.c");
   add_exit("east", DIR + "/rooms/forest10.c");
   add_exit("west", DIR + "/rooms/forest11.c");
}
