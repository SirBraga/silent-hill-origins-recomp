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

// Function: sub_002531B0
// Address: 0x2531b0 - 0x253210
void sub_002531B0_0x2531b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002531B0_0x2531b0");
#endif

    switch (ctx->pc) {
        case 0x2531b0u: goto label_2531b0;
        case 0x2531b4u: goto label_2531b4;
        case 0x2531b8u: goto label_2531b8;
        case 0x2531bcu: goto label_2531bc;
        case 0x2531c0u: goto label_2531c0;
        case 0x2531c4u: goto label_2531c4;
        case 0x2531c8u: goto label_2531c8;
        case 0x2531ccu: goto label_2531cc;
        case 0x2531d0u: goto label_2531d0;
        case 0x2531d4u: goto label_2531d4;
        case 0x2531d8u: goto label_2531d8;
        case 0x2531dcu: goto label_2531dc;
        case 0x2531e0u: goto label_2531e0;
        case 0x2531e4u: goto label_2531e4;
        case 0x2531e8u: goto label_2531e8;
        case 0x2531ecu: goto label_2531ec;
        case 0x2531f0u: goto label_2531f0;
        case 0x2531f4u: goto label_2531f4;
        case 0x2531f8u: goto label_2531f8;
        case 0x2531fcu: goto label_2531fc;
        case 0x253200u: goto label_253200;
        case 0x253204u: goto label_253204;
        case 0x253208u: goto label_253208;
        case 0x25320cu: goto label_25320c;
        default: break;
    }

    ctx->pc = 0x2531b0u;

label_2531b0:
    // 0x2531b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2531b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2531b4:
    // 0x2531b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2531b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2531b8:
    // 0x2531b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2531b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2531bc:
    // 0x2531bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2531bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2531c0:
    // 0x2531c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2531c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2531c4:
    // 0x2531c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2531c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2531c8:
    // 0x2531c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2531cc:
    if (ctx->pc == 0x2531CCu) {
        ctx->pc = 0x2531CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531C8u;
        // 0x2531cc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531D0u;
        goto label_2531d0;
    }
    ctx->pc = 0x2531C8u;
    {
        const bool branch_taken_0x2531c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531C8u;
        // 0x2531cc: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531c8) {
            ctx->pc = 0x2531F8u;
            goto label_2531f8;
        }
    }
    ctx->pc = 0x2531D0u;
label_2531d0:
    // 0x2531d0: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x2531d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_2531d4:
    // 0x2531d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2531d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2531d8:
    // 0x2531d8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2531d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2531dc:
    // 0x2531dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2531dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2531e0:
    // 0x2531e0: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2531e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2531e4:
    // 0x2531e4: 0x40f809  jalr        $v0
label_2531e8:
    if (ctx->pc == 0x2531E8u) {
        ctx->pc = 0x2531ECu;
        goto label_2531ec;
    }
    ctx->pc = 0x2531E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2531ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531E4u, 0x2531ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2531ECu;
label_2531ec:
    // 0x2531ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2531ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2531f0:
    // 0x2531f0: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_2531f4:
    if (ctx->pc == 0x2531F4u) {
        ctx->pc = 0x2531F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531F0u;
        // 0x2531f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531F8u;
        goto label_2531f8;
    }
    ctx->pc = 0x2531F0u;
    {
        const bool branch_taken_0x2531f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2531f0) {
            ctx->pc = 0x2531F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2531F0u;
            // 0x2531f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2531D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2531d8;
        }
    }
    ctx->pc = 0x2531F8u;
label_2531f8:
    // 0x2531f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2531f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2531fc:
    // 0x2531fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2531fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_253200:
    // 0x253200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253204:
    // 0x253204: 0x3e00008  jr          $ra
label_253208:
    if (ctx->pc == 0x253208u) {
        ctx->pc = 0x253208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253204u;
        // 0x253208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25320Cu;
        goto label_25320c;
    }
    ctx->pc = 0x253204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253204u;
        // 0x253208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25320Cu;
label_25320c:
    // 0x25320c: 0x0  nop
    ctx->pc = 0x25320cu;
    // NOP
    ctx->pc = 0x253210u;
}
