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

// Function: sub_001FF5C0
// Address: 0x1ff5c0 - 0x1ff620
void sub_001FF5C0_0x1ff5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF5C0_0x1ff5c0");
#endif

    switch (ctx->pc) {
        case 0x1ff5c0u: goto label_1ff5c0;
        case 0x1ff5c4u: goto label_1ff5c4;
        case 0x1ff5c8u: goto label_1ff5c8;
        case 0x1ff5ccu: goto label_1ff5cc;
        case 0x1ff5d0u: goto label_1ff5d0;
        case 0x1ff5d4u: goto label_1ff5d4;
        case 0x1ff5d8u: goto label_1ff5d8;
        case 0x1ff5dcu: goto label_1ff5dc;
        case 0x1ff5e0u: goto label_1ff5e0;
        case 0x1ff5e4u: goto label_1ff5e4;
        case 0x1ff5e8u: goto label_1ff5e8;
        case 0x1ff5ecu: goto label_1ff5ec;
        case 0x1ff5f0u: goto label_1ff5f0;
        case 0x1ff5f4u: goto label_1ff5f4;
        case 0x1ff5f8u: goto label_1ff5f8;
        case 0x1ff5fcu: goto label_1ff5fc;
        case 0x1ff600u: goto label_1ff600;
        case 0x1ff604u: goto label_1ff604;
        case 0x1ff608u: goto label_1ff608;
        case 0x1ff60cu: goto label_1ff60c;
        case 0x1ff610u: goto label_1ff610;
        case 0x1ff614u: goto label_1ff614;
        case 0x1ff618u: goto label_1ff618;
        case 0x1ff61cu: goto label_1ff61c;
        default: break;
    }

    ctx->pc = 0x1ff5c0u;

label_1ff5c0:
    // 0x1ff5c0: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1ff5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_1ff5c4:
    // 0x1ff5c4: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x1ff5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
label_1ff5c8:
    // 0x1ff5c8: 0x8c62012c  lw          $v0, 0x12C($v1)
    ctx->pc = 0x1ff5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_1ff5cc:
    // 0x1ff5cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff5ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ff5d0:
    // 0x1ff5d0: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x1ff5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_1ff5d4:
    // 0x1ff5d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ff5d8:
    // 0x1ff5d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ff5dc:
    // 0x1ff5dc: 0xac62012c  sw          $v0, 0x12C($v1)
    ctx->pc = 0x1ff5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 2));
label_1ff5e0:
    // 0x1ff5e0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1ff5e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ff5e4:
    // 0x1ff5e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ff5e8:
    if (ctx->pc == 0x1FF5E8u) {
        ctx->pc = 0x1FF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5E4u;
        // 0x1ff5e8: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF5ECu;
        goto label_1ff5ec;
    }
    ctx->pc = 0x1FF5E4u;
    {
        const bool branch_taken_0x1ff5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5E4u;
        // 0x1ff5e8: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5e4) {
            ctx->pc = 0x1FF5F0u;
            goto label_1ff5f0;
        }
    }
    ctx->pc = 0x1FF5ECu;
label_1ff5ec:
    // 0x1ff5ec: 0xaca20130  sw          $v0, 0x130($a1)
    ctx->pc = 0x1ff5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 2));
label_1ff5f0:
    // 0x1ff5f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1ff5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1ff5f4:
    // 0x1ff5f4: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x1ff5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_1ff5f8:
    // 0x1ff5f8: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x1ff5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_1ff5fc:
    // 0x1ff5fc: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x1ff5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_1ff600:
    // 0x1ff600: 0x40f809  jalr        $v0
label_1ff604:
    if (ctx->pc == 0x1FF604u) {
        ctx->pc = 0x1FF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF600u;
        // 0x1ff604: 0x8cc40134  lw          $a0, 0x134($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF608u;
        goto label_1ff608;
    }
    ctx->pc = 0x1FF600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF608u);
        ctx->pc = 0x1FF604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF600u;
        // 0x1ff604: 0x8cc40134  lw          $a0, 0x134($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF600u, 0x1FF608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF608u;
label_1ff608:
    // 0x1ff608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff60c:
    // 0x1ff60c: 0x3e00008  jr          $ra
label_1ff610:
    if (ctx->pc == 0x1FF610u) {
        ctx->pc = 0x1FF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF60Cu;
        // 0x1ff610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF614u;
        goto label_1ff614;
    }
    ctx->pc = 0x1FF60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF60Cu;
        // 0x1ff610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF614u;
label_1ff614:
    // 0x1ff614: 0x0  nop
    ctx->pc = 0x1ff614u;
    // NOP
label_1ff618:
    // 0x1ff618: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ff618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ff61c:
    // 0x1ff61c: 0x0  nop
    ctx->pc = 0x1ff61cu;
    // NOP
    ctx->pc = 0x1ff620u;
}
