#######
# Shell script: File count
# Date created: 24/01/23
# Author: Sam Catcheside
#
############
# How it works
#
# 1. We first use find . -type f to find files in current directory and subdirectories
# 2. We then use a pipeline to wc -l which counts the number of words given to it by the find command. Using argument -l to count the number of lines given to it.
#
############
#
# Two methods
# find . | wc -l | sed 's/ //g'
#
#
# Doesn't use wc or include base '.' directory
# ls -l | grep total | cut -c7-
#
############
find . | wc -l | sed 's/ //g'
