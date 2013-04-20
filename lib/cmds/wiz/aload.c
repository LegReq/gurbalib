void usage() {
   string *lines;

   lines = ({ "Usage: aload [-h] [save]" });
   lines += ({ " " });
   lines += ({ "If no arguments are given, load your current autoload " +
      "objects." });
   lines += ({ "If save is specified, create an autoload string from your " +
      "inventory." });
   lines += ({ " " });
   lines += ({ "Options:" });
   lines += ({ "\t-h\tHelp, this usage message." });
   lines += ({ "Examples:" });
   lines += ({ "\taload save" });
   lines += ({ "\taload" });
   lines += ({ "See also:" });
   lines += ({ "\tcompose" });

   this_player()->more(lines);
}

void main(string str) {
   string file, action, rest;
   object ob;
   object *inv;
   int i, max;

   if (!query_wizard(this_player())) {
      write("You must be a wizard to do that.\n");
      return;
   }

   if (str && str != "") {
      if (str == "save") {
         this_player()->compose_autoload_string();
         str = this_player()->query_autoload_string();
         write("Autoload string set to: " + str + "\n");
      } else {
         usage();
         return;
      }
   }

   this_player()->clone_autoload_objects();
}
