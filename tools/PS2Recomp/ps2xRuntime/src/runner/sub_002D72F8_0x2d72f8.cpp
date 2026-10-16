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

// Function: sub_002D72F8
// Address: 0x2d72f8 - 0x2d7338
void sub_002D72F8_0x2d72f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D72F8_0x2d72f8");
#endif

    switch (ctx->pc) {
        case 0x2d730cu: goto label_2d730c;
        case 0x2d7320u: goto label_2d7320;
        default: break;
    }

    ctx->pc = 0x2d72f8u;

    // 0x2d72f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d72f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d72fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d72fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d7300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7304: 0xc0b5b14  jal         func_2D6C50
    ctx->pc = 0x2D7304u;
    SET_GPR_U32(ctx, 31, 0x2D730Cu);
    ctx->pc = 0x2D7308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7304u;
    // 0x2d7308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6C50u, 0x2D7304u, 0x2D730Cu)) {
        return;
    }
    ctx->pc = 0x2D730Cu;
label_2d730c:
    // 0x2d730c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2d730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2d7310: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7310u;
    {
        const bool branch_taken_0x2d7310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7310) {
            ctx->pc = 0x2D7314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7310u;
            // 0x2d7314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7324u;
            goto label_2d7324;
        }
    }
    ctx->pc = 0x2D7318u;
    // 0x2d7318: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x2D7318u;
    SET_GPR_U32(ctx, 31, 0x2D7320u);
    ctx->pc = 0x2D731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7318u;
    // 0x2d731c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x2D7318u, 0x2D7320u)) {
        return;
    }
    ctx->pc = 0x2D7320u;
label_2d7320:
    // 0x2d7320: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d7320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d7324:
    // 0x2d7324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7328: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d7328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d732c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D732Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D732Cu;
        // 0x2d7330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D732Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7334u;
    // 0x2d7334: 0x0  nop
    ctx->pc = 0x2d7334u;
    // NOP
    ctx->pc = 0x2d7338u;
}
