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

// Function: sub_001FAC88
// Address: 0x1fac88 - 0x1fad20
void sub_001FAC88_0x1fac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAC88_0x1fac88");
#endif

    switch (ctx->pc) {
        case 0x1fac88u: goto label_1fac88;
        case 0x1fac8cu: goto label_1fac8c;
        case 0x1fac90u: goto label_1fac90;
        case 0x1fac94u: goto label_1fac94;
        case 0x1fac98u: goto label_1fac98;
        case 0x1fac9cu: goto label_1fac9c;
        case 0x1faca0u: goto label_1faca0;
        case 0x1faca4u: goto label_1faca4;
        case 0x1faca8u: goto label_1faca8;
        case 0x1facacu: goto label_1facac;
        case 0x1facb0u: goto label_1facb0;
        case 0x1facb4u: goto label_1facb4;
        case 0x1facb8u: goto label_1facb8;
        case 0x1facbcu: goto label_1facbc;
        case 0x1facc0u: goto label_1facc0;
        case 0x1facc4u: goto label_1facc4;
        case 0x1facc8u: goto label_1facc8;
        case 0x1facccu: goto label_1faccc;
        case 0x1facd0u: goto label_1facd0;
        case 0x1facd4u: goto label_1facd4;
        case 0x1facd8u: goto label_1facd8;
        case 0x1facdcu: goto label_1facdc;
        case 0x1face0u: goto label_1face0;
        case 0x1face4u: goto label_1face4;
        case 0x1face8u: goto label_1face8;
        case 0x1facecu: goto label_1facec;
        case 0x1facf0u: goto label_1facf0;
        case 0x1facf4u: goto label_1facf4;
        case 0x1facf8u: goto label_1facf8;
        case 0x1facfcu: goto label_1facfc;
        case 0x1fad00u: goto label_1fad00;
        case 0x1fad04u: goto label_1fad04;
        case 0x1fad08u: goto label_1fad08;
        case 0x1fad0cu: goto label_1fad0c;
        case 0x1fad10u: goto label_1fad10;
        case 0x1fad14u: goto label_1fad14;
        case 0x1fad18u: goto label_1fad18;
        case 0x1fad1cu: goto label_1fad1c;
        default: break;
    }

    ctx->pc = 0x1fac88u;

label_1fac88:
    // 0x1fac88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fac88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1fac8c:
    // 0x1fac8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1fac90:
    // 0x1fac90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fac94:
    // 0x1fac94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fac94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fac98:
    // 0x1fac98: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1fac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1fac9c:
    // 0x1fac9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fac9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1faca0:
    // 0x1faca0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1faca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1faca4:
    // 0x1faca4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1faca4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1faca8:
    // 0x1faca8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1faca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1facac:
    // 0x1facac: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1facacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1facb0:
    // 0x1facb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1facb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1facb4:
    // 0x1facb4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1facb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1facb8:
    // 0x1facb8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1facb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1facbc:
    // 0x1facbc: 0xc07eaec  jal         func_1FABB0
label_1facc0:
    if (ctx->pc == 0x1FACC0u) {
        ctx->pc = 0x1FACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACBCu;
        // 0x1facc0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACC4u;
        goto label_1facc4;
    }
    ctx->pc = 0x1FACBCu;
    SET_GPR_U32(ctx, 31, 0x1FACC4u);
    ctx->pc = 0x1FACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACBCu;
    // 0x1facc0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABB0u, 0x1FACBCu, 0x1FACC4u)) {
        return;
    }
    ctx->pc = 0x1FACC4u;
label_1facc4:
    // 0x1facc4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1facc8:
    if (ctx->pc == 0x1FACC8u) {
        ctx->pc = 0x1FACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACC4u;
        // 0x1facc8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACCCu;
        goto label_1faccc;
    }
    ctx->pc = 0x1FACC4u;
    {
        const bool branch_taken_0x1facc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACC4u;
        // 0x1facc8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facc4) {
            ctx->pc = 0x1FACF8u;
            goto label_1facf8;
        }
    }
    ctx->pc = 0x1FACCCu;
label_1faccc:
    // 0x1faccc: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x1facccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1facd0:
    // 0x1facd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1facd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1facd4:
    // 0x1facd4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1facd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1facd8:
    // 0x1facd8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1facd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1facdc:
    // 0x1facdc: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x1facdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_1face0:
    // 0x1face0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1face0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1face4:
    // 0x1face4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1face4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1face8:
    // 0x1face8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1face8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1facec:
    // 0x1facec: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1facecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1facf0:
    // 0x1facf0: 0x40f809  jalr        $v0
label_1facf4:
    if (ctx->pc == 0x1FACF4u) {
        ctx->pc = 0x1FACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACF0u;
        // 0x1facf4: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FACF8u;
        goto label_1facf8;
    }
    ctx->pc = 0x1FACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FACF8u);
        ctx->pc = 0x1FACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACF0u;
        // 0x1facf4: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FACF0u, 0x1FACF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FACF8u;
label_1facf8:
    // 0x1facf8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1facf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1facfc:
    // 0x1facfc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1facfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fad00:
    // 0x1fad00: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1fad00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fad04:
    // 0x1fad04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1fad04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fad08:
    // 0x1fad08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fad08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fad0c:
    // 0x1fad0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fad0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fad10:
    // 0x1fad10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fad10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fad14:
    // 0x1fad14: 0x3e00008  jr          $ra
label_1fad18:
    if (ctx->pc == 0x1FAD18u) {
        ctx->pc = 0x1FAD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD14u;
        // 0x1fad18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAD1Cu;
        goto label_1fad1c;
    }
    ctx->pc = 0x1FAD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD14u;
        // 0x1fad18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD1Cu;
label_1fad1c:
    // 0x1fad1c: 0x0  nop
    ctx->pc = 0x1fad1cu;
    // NOP
    ctx->pc = 0x1fad20u;
}
