#ifndef LIBRECOMP_BOOT_LOG_HPP
#define LIBRECOMP_BOOT_LOG_HPP

#include <cstdint>

#ifdef __cplusplus
extern "C" {
#endif

// Thread-safe boot trace: stderr + append lib/Zelda64Recomp/aero_boot_direct.txt (engine cwd).
void recomp_boot_log(const char* msg);
void recomp_boot_logf(const char* fmt, ...);

#ifdef __cplusplus
}
#endif

#endif
