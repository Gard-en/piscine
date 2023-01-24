########
# File: print_groups.sh
# Date created: 24/01/23
# Author: Sam Catcheside
# Description:
#########
# Syntax
# groups $FT_USER - gets groups for environment variable $FT_USER
# | - pipeline/sends it forward for next command to use
# tr ' ' ', ' - translate/change space to comma
# | - pipeline again for next command to use
# tr -d '\n' - Delete \newline string.
#
#########
groups $FT_USER | tr ' ' ',' | tr -d '\n' && echo
