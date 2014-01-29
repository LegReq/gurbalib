inherit "/std/object";

#include "../domain.h"

void setup(void) {
   set_id("bouquet", "flowers");
   set_adj("rose", "red");
   set_short("Someone has left a bouquet of roses here.");
   set_long("A beautiful bouquet of red roses.");
   set_gettable(1);
   set_value(10);
   set_weight(1);
}

string query_short(void) {
   if (this_object()->query_environment()->is_living()) {
      return "A bouquet of roses.";
   }
   return "Someone has left a bouquet of roses here.";
} 

