/* file      : tests/basic/driver.c
 * copyright : Copyright (c) 2009-2019 Code Synthesis Tools CC
 * license   : Mozilla Public License 2.0; see accompanying LICENSE file
 */
#include <stdio.h>

#include <libca-certificates-curl/path.h>
#include <libca-certificates-curl/version.h>

/* Usage: argv[0]
 *
 * Print the CA certificates file path to stdout.
 */
int
main ()
{
  printf ("%s\n", ca_certificates_file ());
  return 0;
}
