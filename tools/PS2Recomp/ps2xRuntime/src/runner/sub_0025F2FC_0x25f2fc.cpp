#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025F2FC
// Address: 0x25f2fc - 0x25f300
void sub_0025F2FC_0x25f2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F2FC_0x25f2fc");
#endif

    ctx->pc = 0x25f2fcu;

    // 0x25f2fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25f2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x25f300u;
}
