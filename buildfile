# file      : buildfile
# license   : Mozilla Public License 2.0; see accompanying LICENSE file

# Glue buildfile that "pulls" all the packages.

import pkgs = */
./: $pkgs
