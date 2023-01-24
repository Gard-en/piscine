########################
# Shell script: MAC.sh
# Date created: 24/1/23
# Author: Sam Catcheside
########################
# How it works
#
# ifconfig - We call the ifconfig command/function
# | - we send the ifconfig results forward
# grep ether - we add a word filter for lines containing the string 'ether'
# | - we pipeline these grep results/lines onward
# cut -c8- The lines containing ether are cut starting from position 8 
#
################

ifconfig | grep ether | cut -c8-
