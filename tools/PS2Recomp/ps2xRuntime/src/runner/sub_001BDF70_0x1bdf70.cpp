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

// Function: sub_001BDF70
// Address: 0x1bdf70 - 0x1be038
void sub_001BDF70_0x1bdf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDF70_0x1bdf70");
#endif

    switch (ctx->pc) {
        case 0x1bdf9cu: goto label_1bdf9c;
        case 0x1bdfc8u: goto label_1bdfc8;
        case 0x1bdfe8u: goto label_1bdfe8;
        case 0x1be018u: goto label_1be018;
        case 0x1be020u: goto label_1be020;
        default: break;
    }

    ctx->pc = 0x1bdf70u;

    // 0x1bdf70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bdf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bdf74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bdf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bdf78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bdf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bdf7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bdf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bdf80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdf80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bdf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bdf88: 0x8e0302ac  lw          $v1, 0x2AC($s0)
    ctx->pc = 0x1bdf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1bdf8c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDF8Cu;
    {
        const bool branch_taken_0x1bdf8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF8Cu;
        // 0x1bdf90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf8c) {
            ctx->pc = 0x1BDF9Cu;
            goto label_1bdf9c;
        }
    }
    ctx->pc = 0x1BDF94u;
    // 0x1bdf94: 0xc06f874  jal         func_1BE1D0
    ctx->pc = 0x1BDF94u;
    SET_GPR_U32(ctx, 31, 0x1BDF9Cu);
    ctx->pc = 0x1BE1D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE1D0u, 0x1BDF94u, 0x1BDF9Cu)) {
        return;
    }
    ctx->pc = 0x1BDF9Cu;
label_1bdf9c:
    // 0x1bdf9c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bdf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bdfa0: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDFA0u;
    {
        const bool branch_taken_0x1bdfa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFA0u;
        // 0x1bdfa4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfa0) {
            ctx->pc = 0x1BDFD0u;
            goto label_1bdfd0;
        }
    }
    ctx->pc = 0x1BDFA8u;
    // 0x1bdfa8: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BDFA8u;
    {
        const bool branch_taken_0x1bdfa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFA8u;
        // 0x1bdfac: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfa8) {
            ctx->pc = 0x1BDFECu;
            goto label_1bdfec;
        }
    }
    ctx->pc = 0x1BDFB0u;
    // 0x1bdfb0: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x1bdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1bdfb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdfbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bdfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bdfc0: 0xc06f81e  jal         func_1BE078
    ctx->pc = 0x1BDFC0u;
    SET_GPR_U32(ctx, 31, 0x1BDFC8u);
    ctx->pc = 0x1BDFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFC0u;
    // 0x1bdfc4: 0xae0202ac  sw          $v0, 0x2AC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE078u, 0x1BDFC0u, 0x1BDFC8u)) {
        return;
    }
    ctx->pc = 0x1BDFC8u;
label_1bdfc8:
    // 0x1bdfc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDFC8u;
    {
        const bool branch_taken_0x1bdfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFC8u;
        // 0x1bdfcc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfc8) {
            ctx->pc = 0x1BDFECu;
            goto label_1bdfec;
        }
    }
    ctx->pc = 0x1BDFD0u;
label_1bdfd0:
    // 0x1bdfd0: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x1bdfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1bdfd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bdfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bdfe0: 0xc06f81e  jal         func_1BE078
    ctx->pc = 0x1BDFE0u;
    SET_GPR_U32(ctx, 31, 0x1BDFE8u);
    ctx->pc = 0x1BDFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFE0u;
    // 0x1bdfe4: 0xae0202ac  sw          $v0, 0x2AC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE078u, 0x1BDFE0u, 0x1BDFE8u)) {
        return;
    }
    ctx->pc = 0x1BDFE8u;
label_1bdfe8:
    // 0x1bdfe8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1bdfec:
    // 0x1bdfec: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bdfecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bdff0: 0x8c454400  lw          $a1, 0x4400($v0)
    ctx->pc = 0x1bdff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17408)));
    // 0x1bdff4: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bdff4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bdff8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDFF8u;
    {
        const bool branch_taken_0x1bdff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bdff8) {
            ctx->pc = 0x1BE018u;
            goto label_1be018;
        }
    }
    ctx->pc = 0x1BE000u;
    // 0x1be000: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1be000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be004: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE004u;
    {
        const bool branch_taken_0x1be004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE004u;
        // 0x1be008: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be004) {
            ctx->pc = 0x1BE018u;
            goto label_1be018;
        }
    }
    ctx->pc = 0x1BE00Cu;
    // 0x1be00c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1be00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1be010: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BE010u;
    SET_GPR_U32(ctx, 31, 0x1BE018u);
    ctx->pc = 0x1BE014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE010u;
    // 0x1be014: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BE010u, 0x1BE018u)) {
        return;
    }
    ctx->pc = 0x1BE018u;
label_1be018:
    // 0x1be018: 0xc06f80e  jal         func_1BE038
    ctx->pc = 0x1BE018u;
    SET_GPR_U32(ctx, 31, 0x1BE020u);
    ctx->pc = 0x1BE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE018u;
    // 0x1be01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE038u, 0x1BE018u, 0x1BE020u)) {
        return;
    }
    ctx->pc = 0x1BE020u;
label_1be020:
    // 0x1be020: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1be020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be024: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1be024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be02c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE02Cu;
        // 0x1be030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE034u;
    // 0x1be034: 0x0  nop
    ctx->pc = 0x1be034u;
    // NOP
    ctx->pc = 0x1be038u;
}
