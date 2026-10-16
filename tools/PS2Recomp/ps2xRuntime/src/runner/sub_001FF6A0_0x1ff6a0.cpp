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

// Function: sub_001FF6A0
// Address: 0x1ff6a0 - 0x1ff700
void sub_001FF6A0_0x1ff6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF6A0_0x1ff6a0");
#endif

    switch (ctx->pc) {
        case 0x1ff6a0u: goto label_1ff6a0;
        case 0x1ff6a4u: goto label_1ff6a4;
        case 0x1ff6a8u: goto label_1ff6a8;
        case 0x1ff6acu: goto label_1ff6ac;
        case 0x1ff6b0u: goto label_1ff6b0;
        case 0x1ff6b4u: goto label_1ff6b4;
        case 0x1ff6b8u: goto label_1ff6b8;
        case 0x1ff6bcu: goto label_1ff6bc;
        case 0x1ff6c0u: goto label_1ff6c0;
        case 0x1ff6c4u: goto label_1ff6c4;
        case 0x1ff6c8u: goto label_1ff6c8;
        case 0x1ff6ccu: goto label_1ff6cc;
        case 0x1ff6d0u: goto label_1ff6d0;
        case 0x1ff6d4u: goto label_1ff6d4;
        case 0x1ff6d8u: goto label_1ff6d8;
        case 0x1ff6dcu: goto label_1ff6dc;
        case 0x1ff6e0u: goto label_1ff6e0;
        case 0x1ff6e4u: goto label_1ff6e4;
        case 0x1ff6e8u: goto label_1ff6e8;
        case 0x1ff6ecu: goto label_1ff6ec;
        case 0x1ff6f0u: goto label_1ff6f0;
        case 0x1ff6f4u: goto label_1ff6f4;
        case 0x1ff6f8u: goto label_1ff6f8;
        case 0x1ff6fcu: goto label_1ff6fc;
        default: break;
    }

    ctx->pc = 0x1ff6a0u;

label_1ff6a0:
    // 0x1ff6a0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1ff6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_1ff6a4:
    // 0x1ff6a4: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x1ff6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
label_1ff6a8:
    // 0x1ff6a8: 0x8c620138  lw          $v0, 0x138($v1)
    ctx->pc = 0x1ff6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
label_1ff6ac:
    // 0x1ff6ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff6acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ff6b0:
    // 0x1ff6b0: 0x8ca4013c  lw          $a0, 0x13C($a1)
    ctx->pc = 0x1ff6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 316)));
label_1ff6b4:
    // 0x1ff6b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ff6b8:
    // 0x1ff6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ff6bc:
    // 0x1ff6bc: 0xac620138  sw          $v0, 0x138($v1)
    ctx->pc = 0x1ff6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 2));
label_1ff6c0:
    // 0x1ff6c0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ff6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ff6c4:
    // 0x1ff6c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ff6c8:
    if (ctx->pc == 0x1FF6C8u) {
        ctx->pc = 0x1FF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6C4u;
        // 0x1ff6c8: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF6CCu;
        goto label_1ff6cc;
    }
    ctx->pc = 0x1FF6C4u;
    {
        const bool branch_taken_0x1ff6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6C4u;
        // 0x1ff6c8: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff6c4) {
            ctx->pc = 0x1FF6D0u;
            goto label_1ff6d0;
        }
    }
    ctx->pc = 0x1FF6CCu;
label_1ff6cc:
    // 0x1ff6cc: 0xaca2013c  sw          $v0, 0x13C($a1)
    ctx->pc = 0x1ff6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 2));
label_1ff6d0:
    // 0x1ff6d0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1ff6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1ff6d4:
    // 0x1ff6d4: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x1ff6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_1ff6d8:
    // 0x1ff6d8: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x1ff6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_1ff6dc:
    // 0x1ff6dc: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x1ff6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_1ff6e0:
    // 0x1ff6e0: 0x40f809  jalr        $v0
label_1ff6e4:
    if (ctx->pc == 0x1FF6E4u) {
        ctx->pc = 0x1FF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6E0u;
        // 0x1ff6e4: 0x8cc40140  lw          $a0, 0x140($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF6E8u;
        goto label_1ff6e8;
    }
    ctx->pc = 0x1FF6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF6E8u);
        ctx->pc = 0x1FF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6E0u;
        // 0x1ff6e4: 0x8cc40140  lw          $a0, 0x140($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF6E0u, 0x1FF6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF6E8u;
label_1ff6e8:
    // 0x1ff6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff6ec:
    // 0x1ff6ec: 0x3e00008  jr          $ra
label_1ff6f0:
    if (ctx->pc == 0x1FF6F0u) {
        ctx->pc = 0x1FF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6ECu;
        // 0x1ff6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF6F4u;
        goto label_1ff6f4;
    }
    ctx->pc = 0x1FF6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6ECu;
        // 0x1ff6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF6F4u;
label_1ff6f4:
    // 0x1ff6f4: 0x0  nop
    ctx->pc = 0x1ff6f4u;
    // NOP
label_1ff6f8:
    // 0x1ff6f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ff6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ff6fc:
    // 0x1ff6fc: 0x0  nop
    ctx->pc = 0x1ff6fcu;
    // NOP
    ctx->pc = 0x1ff700u;
}
