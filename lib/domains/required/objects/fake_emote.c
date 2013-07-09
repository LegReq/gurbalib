/* This file is used by the admin command emotediff 
   to load an emote_d.o file to compare it to the current one.
*/

mapping emotes;
string myfile;

void set_file(string str) {
   myfile = str;
}

static void restore_me(void) {
   write("Calling restore_object on : " + myfile + "\n");
   unguarded("restore_object", myfile);
}

void create(void) {
   emotes = ([ ]);
}

int is_emote(string name) {
   if (!emotes[name]) {
      return 0;
   } else {
      return 1;
   }
}

string *query_emotes(void) {
   return map_indices(emotes);
}

string query_emote(string name, string rule) {
   return emotes[name][rule];
}

string *query_rules(string name) {
   if (is_emote(emotes[name])) {
      return map_indices(emotes[name]);
   }
   return ({ });
}

string *show_emote(string str, int width) {
   string *rules, *lines;
   int i, tmp;
   string line;

   lines = ({ });

   if (!str || str == "") {
      rules = query_emotes();

      lines = ({ "Emotes:" });

      line = "   ";
      for (i = 0; i < sizeof(rules); i++) {
         tmp = strlen(rules[i]) + 3 + strlen(line);
         if (tmp >= width) {
            lines += ({ line });
            line = "   " + rules[i] + ", ";
         } else {
	    line += rules[i] + ", ";
         }
      }
      lines += ( {line } );
      lines += ( { "Total emotes: " + sizeof(rules) } );

      return lines;
   }
   if (is_emote(str)) {

      rules = query_rules(str);

      while (sizeof(rules) > 0) {
	 lines += 
            ( { rules[0] + " : \"" + query_emote(str, rules[0]) + "\"" } );
	 rules -= ( { rules[0] } );
      }
   } else {
      lines += ( { "No such emote. \n" } );
   }

   return lines;
}
