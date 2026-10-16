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

// Function: sub_001DA868
// Address: 0x1da868 - 0x1da8a0
void sub_001DA868_0x1da868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA868_0x1da868");
#endif

    ctx->pc = 0x1da868u;

    // 0x1da868: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA868u;
    {
        const bool branch_taken_0x1da868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA868u;
        // 0x1da86c: 0x90830002  lbu         $v1, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da868) {
            ctx->pc = 0x1DA878u;
            goto label_1da878;
        }
    }
    ctx->pc = 0x1DA870u;
    // 0x1da870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA870u;
    {
        const bool branch_taken_0x1da870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA870u;
        // 0x1da874: 0x34630004  ori         $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da870) {
            ctx->pc = 0x1DA884u;
            goto label_1da884;
        }
    }
    ctx->pc = 0x1DA878u;
label_1da878:
    // 0x1da878: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1da878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1da87c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x1da87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x1da880: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1da880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1da884:
    // 0x1da884: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA884u;
        // 0x1da888: 0xa0830002  sb          $v1, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA88Cu;
    // 0x1da88c: 0x0  nop
    ctx->pc = 0x1da88cu;
    // NOP
    // 0x1da890: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1da890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1da894: 0x0  nop
    ctx->pc = 0x1da894u;
    // NOP
    // 0x1da898: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1da898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1da89c: 0x0  nop
    ctx->pc = 0x1da89cu;
    // NOP
    ctx->pc = 0x1da8a0u;
}
