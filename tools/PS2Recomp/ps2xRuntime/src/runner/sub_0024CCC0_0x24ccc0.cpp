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

// Function: sub_0024CCC0
// Address: 0x24ccc0 - 0x24cd58
void sub_0024CCC0_0x24ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CCC0_0x24ccc0");
#endif

    switch (ctx->pc) {
        case 0x24ccc0u: goto label_24ccc0;
        case 0x24ccc4u: goto label_24ccc4;
        case 0x24ccc8u: goto label_24ccc8;
        case 0x24ccccu: goto label_24cccc;
        case 0x24ccd0u: goto label_24ccd0;
        case 0x24ccd4u: goto label_24ccd4;
        case 0x24ccd8u: goto label_24ccd8;
        case 0x24ccdcu: goto label_24ccdc;
        case 0x24cce0u: goto label_24cce0;
        case 0x24cce4u: goto label_24cce4;
        case 0x24cce8u: goto label_24cce8;
        case 0x24ccecu: goto label_24ccec;
        case 0x24ccf0u: goto label_24ccf0;
        case 0x24ccf4u: goto label_24ccf4;
        case 0x24ccf8u: goto label_24ccf8;
        case 0x24ccfcu: goto label_24ccfc;
        case 0x24cd00u: goto label_24cd00;
        case 0x24cd04u: goto label_24cd04;
        case 0x24cd08u: goto label_24cd08;
        case 0x24cd0cu: goto label_24cd0c;
        case 0x24cd10u: goto label_24cd10;
        case 0x24cd14u: goto label_24cd14;
        case 0x24cd18u: goto label_24cd18;
        case 0x24cd1cu: goto label_24cd1c;
        case 0x24cd20u: goto label_24cd20;
        case 0x24cd24u: goto label_24cd24;
        case 0x24cd28u: goto label_24cd28;
        case 0x24cd2cu: goto label_24cd2c;
        case 0x24cd30u: goto label_24cd30;
        case 0x24cd34u: goto label_24cd34;
        case 0x24cd38u: goto label_24cd38;
        case 0x24cd3cu: goto label_24cd3c;
        case 0x24cd40u: goto label_24cd40;
        case 0x24cd44u: goto label_24cd44;
        case 0x24cd48u: goto label_24cd48;
        case 0x24cd4cu: goto label_24cd4c;
        case 0x24cd50u: goto label_24cd50;
        case 0x24cd54u: goto label_24cd54;
        default: break;
    }

    ctx->pc = 0x24ccc0u;

label_24ccc0:
    // 0x24ccc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_24ccc4:
    // 0x24ccc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24ccc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24ccc8:
    // 0x24ccc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_24cccc:
    // 0x24cccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ccccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24ccd0:
    // 0x24ccd0: 0xc09340e  jal         func_24D038
label_24ccd4:
    if (ctx->pc == 0x24CCD4u) {
        ctx->pc = 0x24CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCD0u;
        // 0x24ccd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CCD8u;
        goto label_24ccd8;
    }
    ctx->pc = 0x24CCD0u;
    SET_GPR_U32(ctx, 31, 0x24CCD8u);
    ctx->pc = 0x24CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCD0u;
    // 0x24ccd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D038u, 0x24CCD0u, 0x24CCD8u)) {
        return;
    }
    ctx->pc = 0x24CCD8u;
label_24ccd8:
    // 0x24ccd8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24ccdc:
    // 0x24ccdc: 0x8c634198  lw          $v1, 0x4198($v1)
    ctx->pc = 0x24ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
label_24cce0:
    // 0x24cce0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_24cce4:
    // 0x24cce4: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x24cce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_24cce8:
    // 0x24cce8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x24cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_24ccec:
    // 0x24ccec: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x24ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_24ccf0:
    // 0x24ccf0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_24ccf4:
    if (ctx->pc == 0x24CCF4u) {
        ctx->pc = 0x24CCF8u;
        goto label_24ccf8;
    }
    ctx->pc = 0x24CCF0u;
    {
        const bool branch_taken_0x24ccf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ccf0) {
            ctx->pc = 0x24CD28u;
            goto label_24cd28;
        }
    }
    ctx->pc = 0x24CCF8u;
label_24ccf8:
    // 0x24ccf8: 0xc093b80  jal         func_24EE00
label_24ccfc:
    if (ctx->pc == 0x24CCFCu) {
        ctx->pc = 0x24CD00u;
        goto label_24cd00;
    }
    ctx->pc = 0x24CCF8u;
    SET_GPR_U32(ctx, 31, 0x24CD00u);
    ctx->pc = 0x24EE00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EE00u, 0x24CCF8u, 0x24CD00u)) {
        return;
    }
    ctx->pc = 0x24CD00u;
label_24cd00:
    // 0x24cd00: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24cd04:
    // 0x24cd04: 0x8c634198  lw          $v1, 0x4198($v1)
    ctx->pc = 0x24cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
label_24cd08:
    // 0x24cd08: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x24cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_24cd0c:
    // 0x24cd0c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x24cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_24cd10:
    // 0x24cd10: 0xa0f809  jalr        $a1
label_24cd14:
    if (ctx->pc == 0x24CD14u) {
        ctx->pc = 0x24CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD10u;
        // 0x24cd14: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD18u;
        goto label_24cd18;
    }
    ctx->pc = 0x24CD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x24CD18u);
        ctx->pc = 0x24CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD10u;
        // 0x24cd14: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CD10u, 0x24CD18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24CD18u;
label_24cd18:
    // 0x24cd18: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_24cd1c:
    // 0x24cd1c: 0x8c424198  lw          $v0, 0x4198($v0)
    ctx->pc = 0x24cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16792)));
label_24cd20:
    // 0x24cd20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_24cd24:
    // 0x24cd24: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x24cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_24cd28:
    // 0x24cd28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_24cd2c:
    // 0x24cd2c: 0x8c63419c  lw          $v1, 0x419C($v1)
    ctx->pc = 0x24cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16796)));
label_24cd30:
    // 0x24cd30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24cd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24cd34:
    // 0x24cd34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24cd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24cd38:
    // 0x24cd38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24cd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_24cd3c:
    // 0x24cd3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24cd3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24cd40:
    // 0x24cd40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24cd44:
    // 0x24cd44: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24cd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_24cd48:
    // 0x24cd48: 0xac23419c  sw          $v1, 0x419C($at)
    ctx->pc = 0x24cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16796), GPR_U32(ctx, 3));
label_24cd4c:
    // 0x24cd4c: 0x3e00008  jr          $ra
label_24cd50:
    if (ctx->pc == 0x24CD50u) {
        ctx->pc = 0x24CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD4Cu;
        // 0x24cd50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CD54u;
        goto label_24cd54;
    }
    ctx->pc = 0x24CD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD4Cu;
        // 0x24cd50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CD54u;
label_24cd54:
    // 0x24cd54: 0x0  nop
    ctx->pc = 0x24cd54u;
    // NOP
    ctx->pc = 0x24cd58u;
}
