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

// Function: sub_002A3AD8
// Address: 0x2a3ad8 - 0x2a3b38
void sub_002A3AD8_0x2a3ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3AD8_0x2a3ad8");
#endif

    switch (ctx->pc) {
        case 0x2a3b08u: goto label_2a3b08;
        default: break;
    }

    ctx->pc = 0x2a3ad8u;

    // 0x2a3ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a3adc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a3adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a3ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3ae4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a3ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3af0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a3af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3af4: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x2a3af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2a3af8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2a3af8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2a3afc: 0x8e070058  lw          $a3, 0x58($s0)
    ctx->pc = 0x2a3afcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2a3b00: 0xc0c4eb4  jal         func_313AD0
    ctx->pc = 0x2A3B00u;
    SET_GPR_U32(ctx, 31, 0x2A3B08u);
    ctx->pc = 0x2A3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3B00u;
    // 0x2a3b04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313AD0u, 0x2A3B00u, 0x2A3B08u)) {
        return;
    }
    ctx->pc = 0x2A3B08u;
label_2a3b08:
    // 0x2a3b08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a3b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3b0c: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x2a3b0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a3b10: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3B10u;
    {
        const bool branch_taken_0x2a3b10 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2A3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B10u;
        // 0x2a3b14: 0x2203e  dsrl32      $a0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b10) {
            ctx->pc = 0x2A3B20u;
            goto label_2a3b20;
        }
    }
    ctx->pc = 0x2A3B18u;
    // 0x2a3b18: 0x71102d  daddu       $v0, $v1, $s1
    ctx->pc = 0x2a3b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 17));
    // 0x2a3b1c: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x2a3b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_2a3b20:
    // 0x2a3b20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a3b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b28: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a3b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3b30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B30u;
        // 0x2a3b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3B38u;
}
