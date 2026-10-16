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

// Function: sub_00254470
// Address: 0x254470 - 0x2544b8
void sub_00254470_0x254470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254470_0x254470");
#endif

    switch (ctx->pc) {
        case 0x254498u: goto label_254498;
        default: break;
    }

    ctx->pc = 0x254470u;

    // 0x254470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254474: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x254474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x254478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25447c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25447cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254480: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x254480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x254484: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x254484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x254488: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x254488u;
    {
        const bool branch_taken_0x254488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254488) {
            ctx->pc = 0x25448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254488u;
            // 0x25448c: 0x92030003  lbu         $v1, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25449Cu;
            goto label_25449c;
        }
    }
    ctx->pc = 0x254490u;
    // 0x254490: 0xc0952e0  jal         func_254B80
    ctx->pc = 0x254490u;
    SET_GPR_U32(ctx, 31, 0x254498u);
    ctx->pc = 0x254B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254B80u, 0x254490u, 0x254498u)) {
        return;
    }
    ctx->pc = 0x254498u;
label_254498:
    // 0x254498: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x254498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_25449c:
    // 0x25449c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25449cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2544a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2544a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2544a4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2544a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2544a8: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2544a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2544ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2544acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2544b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2544B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2544B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544B0u;
        // 0x2544b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2544B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2544B8u;
}
