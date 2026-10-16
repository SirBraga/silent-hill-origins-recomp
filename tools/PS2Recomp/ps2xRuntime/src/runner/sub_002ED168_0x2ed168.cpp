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

// Function: sub_002ED168
// Address: 0x2ed168 - 0x2ed1c0
void sub_002ED168_0x2ed168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED168_0x2ed168");
#endif

    switch (ctx->pc) {
        case 0x2ed180u: goto label_2ed180;
        default: break;
    }

    ctx->pc = 0x2ed168u;

    // 0x2ed168: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ed168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed16c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x2ed16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ed170: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2ed170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2ed174: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED174u;
        // 0x2ed178: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED17Cu;
    // 0x2ed17c: 0x0  nop
    ctx->pc = 0x2ed17cu;
    // NOP
label_2ed180:
    // 0x2ed180: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ed180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ed184: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED184u;
    {
        const bool branch_taken_0x2ed184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED184u;
        // 0x2ed188: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed184) {
            ctx->pc = 0x2ED1A0u;
            goto label_2ed1a0;
        }
    }
    ctx->pc = 0x2ED18Cu;
    // 0x2ed18c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2ed18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2ed190: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2ed190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2ed194: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2ed194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2ed198: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED198u;
    {
        const bool branch_taken_0x2ed198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED198u;
        // 0x2ed19c: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed198) {
            ctx->pc = 0x2ED1B8u;
            goto label_2ed1b8;
        }
    }
    ctx->pc = 0x2ED1A0u;
label_2ed1a0:
    // 0x2ed1a0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2ed1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2ed1a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ed1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ed1a8: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x2ed1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x2ed1ac: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2ed1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2ed1b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ed1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ed1b4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2ed1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_2ed1b8:
    // 0x2ed1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1B8u;
        // 0x2ed1bc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED1C0u;
}
