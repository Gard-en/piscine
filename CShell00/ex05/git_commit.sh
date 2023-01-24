# Shell script: git_commit.sh
# Date created: 23/01/23
# Description: Returns hashes from last 5 commits
# Author: Sam Catcheside
#
#################
# Commands / Arguments
# git           | the terminal program being used
# log           | the function within git being used
# --format='%H' | the argument being used with %H representing HASH. 
# -n5           | Limits to last 5 files in log
################
git log --format='%H' -n5
