###############
# File: find_sh.sh
# Date created: 24/1/23
# Author: Sam Catcheside
#11111
##############
# How it works
# find . type f -name '*.sh' - exec basename {} \; - find all files in current dir and subdirectories with .sh in the name, using basename to remove directory string.
# | - pipeline find results to next command/function
# rev - we reverse the resulting string so filename.sh becomes hs.emanelif
# | - pipeline to next function
# cut -c4- we cut the string at the 4th position from the left, so hs.emanelif becomes emanelif
# | - pipeline results to next command/function
# rev - we reverse the string again, so emanelif becomes filename
#
##################
find . -type f -name '*.sh' -exec basename {} \; | rev | cut -c4- | rev
