inherit "/std/room";

#include "../../domain.h"

void setup(void) {
   add_area("2.4.5");

   set_short("The shore of Crescent Lake");
   set_long("You are standing on the shore of Crescent Lake, a beautiful " +
      "and clear lake.  Out in the center of the lake stands the Isle " +
      "of the Magi.  A trail lead into the forest to the east.  " +
      "The shore of Crescent Lake continues northeast and west.");

   add_exit("east", DIR + "/rooms/south/sforst20.c");
   add_exit("west", DIR + "/rooms/south/sshore10.c");
   add_exit("northeast", DIR + "/rooms/south/sshore8.c");
}
