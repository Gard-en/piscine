#############
# Shell script: skip.sh
# Date created: 24/01/23
# Author: Sam Catcheside
#
##############
# How it works
#
# ls -l - list items in long format
# | - pipeline to further command/function
# sed -n 'p;n' - stream edits output from: 'p' - the current line without moving to the next line ; to 'n' - moves to the next line without printing anything.
#
##############

ls -l | sed -n 'p;n'
