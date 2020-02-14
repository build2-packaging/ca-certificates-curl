/* file      : libca-certificates-curl/ca-certificates-uninstalled.c -*- C -*-
 * license   : Mozilla Public License 2.0; see accompanying LICENSE file
 */

#include <libca-certificates-curl/path.h>

const char*
ca_certificates_file ()
{
  return CA_CERTIFICATES_BUNDLE_PATH;
}
