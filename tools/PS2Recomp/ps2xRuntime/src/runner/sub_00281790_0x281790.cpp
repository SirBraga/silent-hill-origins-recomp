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

// Function: sub_00281790
// Address: 0x281790 - 0x2817a4
void sub_00281790_0x281790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281790_0x281790");
#endif

    ctx->pc = 0x281790u;

    // 0x281790: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x281790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x281794: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x281794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x281798: 0x34420068  ori         $v0, $v0, 0x68
    ctx->pc = 0x281798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    // 0x28179c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x28179Cu;
    {
        const bool branch_taken_0x28179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2817A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28179Cu;
        // 0x2817a0: 0xfca00038  sd          $zero, 0x38($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28179c) {
            ctx->pc = 0x281784u;
            return;
        }
    }
    ctx->pc = 0x2817A4u;
}
