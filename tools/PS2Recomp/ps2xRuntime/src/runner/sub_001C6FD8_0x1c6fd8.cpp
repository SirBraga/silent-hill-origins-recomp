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

// Function: sub_001C6FD8
// Address: 0x1c6fd8 - 0x1c7030
void sub_001C6FD8_0x1c6fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6FD8_0x1c6fd8");
#endif

    switch (ctx->pc) {
        case 0x1c7024u: goto label_1c7024;
        default: break;
    }

    ctx->pc = 0x1c6fd8u;

    // 0x1c6fd8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1c6fd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fdc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c6fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fe0: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x1c6fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1c6fe4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6fec: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x1c6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1c6ff0: 0xac40029c  sw          $zero, 0x29C($v0)
    ctx->pc = 0x1c6ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 668), GPR_U32(ctx, 0));
    // 0x1c6ff4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ffc: 0xaca602a8  sw          $a2, 0x2A8($a1)
    ctx->pc = 0x1c6ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 680), GPR_U32(ctx, 6));
    // 0x1c7000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c7000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7004: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1c7004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1c7008: 0xac6402a4  sw          $a0, 0x2A4($v1)
    ctx->pc = 0x1c7008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 676), GPR_U32(ctx, 4));
    // 0x1c700c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1c700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1c7010: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7010u;
    {
        const bool branch_taken_0x1c7010 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7010u;
        // 0x1c7014: 0xac460278  sw          $a2, 0x278($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 632), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7010) {
            ctx->pc = 0x1C7024u;
            goto label_1c7024;
        }
    }
    ctx->pc = 0x1C7018u;
    // 0x1c7018: 0x8ce40264  lw          $a0, 0x264($a3)
    ctx->pc = 0x1c7018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 612)));
    // 0x1c701c: 0xc05cd44  jal         func_173510
    ctx->pc = 0x1C701Cu;
    SET_GPR_U32(ctx, 31, 0x1C7024u);
    ctx->pc = 0x1C7020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C701Cu;
    // 0x1c7020: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x173510u, 0x1C701Cu, 0x1C7024u)) {
        return;
    }
    ctx->pc = 0x1C7024u;
label_1c7024:
    // 0x1c7024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7028: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7028u;
        // 0x1c702c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7030u;
}
