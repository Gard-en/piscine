# Shell script: git_ignore.sh
# Author: Sam Catcheside
# Date created: 23/01/22
#
################
#
# Arguments used
# git          | the program we want to use 
# check-ignore | the argument that checks the gitignore file
# *            | * for all 
##################################
git ls-files -o -i --exclude-standard | cat -e
