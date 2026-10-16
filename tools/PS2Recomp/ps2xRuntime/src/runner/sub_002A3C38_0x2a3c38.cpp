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

// Function: sub_002A3C38
// Address: 0x2a3c38 - 0x2a3c90
void sub_002A3C38_0x2a3c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3C38_0x2a3c38");
#endif

    switch (ctx->pc) {
        case 0x2a3c60u: goto label_2a3c60;
        case 0x2a3c7cu: goto label_2a3c7c;
        default: break;
    }

    ctx->pc = 0x2a3c38u;

    // 0x2a3c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3c40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3c44: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a3c44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a3c48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a3c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a3c4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a3c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a3c50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3C50u;
    {
        const bool branch_taken_0x2a3c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3c50) {
            ctx->pc = 0x2A3C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3C50u;
            // 0x2a3c54: 0x8c870058  lw          $a3, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3C68u;
            goto label_2a3c68;
        }
    }
    ctx->pc = 0x2A3C58u;
    // 0x2a3c58: 0xc0a6d48  jal         func_29B520
    ctx->pc = 0x2A3C58u;
    SET_GPR_U32(ctx, 31, 0x2A3C60u);
    ctx->pc = 0x29B520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B520u, 0x2A3C58u, 0x2A3C60u)) {
        return;
    }
    ctx->pc = 0x2A3C60u;
label_2a3c60:
    // 0x2a3c60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A3C60u;
    {
        const bool branch_taken_0x2a3c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C60u;
        // 0x2a3c64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3c60) {
            ctx->pc = 0x2A3C88u;
            goto label_2a3c88;
        }
    }
    ctx->pc = 0x2A3C68u;
label_2a3c68:
    // 0x2a3c68: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a3c68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a3c6c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2a3c6cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2a3c70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a3c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c74: 0xc0c4eb4  jal         func_313AD0
    ctx->pc = 0x2A3C74u;
    SET_GPR_U32(ctx, 31, 0x2A3C7Cu);
    ctx->pc = 0x2A3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C74u;
    // 0x2a3c78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313AD0u, 0x2A3C74u, 0x2A3C7Cu)) {
        return;
    }
    ctx->pc = 0x2A3C7Cu;
label_2a3c7c:
    // 0x2a3c7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a3c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3c80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a3c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a3c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3c88:
    // 0x2a3c88: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3C88u;
        // 0x2a3c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3C90u;
}
