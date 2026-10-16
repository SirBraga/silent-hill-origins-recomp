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

// Function: sub_001CFBD0
// Address: 0x1cfbd0 - 0x1cfcd8
void sub_001CFBD0_0x1cfbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFBD0_0x1cfbd0");
#endif

    switch (ctx->pc) {
        case 0x1cfc14u: goto label_1cfc14;
        case 0x1cfc24u: goto label_1cfc24;
        case 0x1cfc3cu: goto label_1cfc3c;
        case 0x1cfc68u: goto label_1cfc68;
        case 0x1cfc70u: goto label_1cfc70;
        case 0x1cfc80u: goto label_1cfc80;
        case 0x1cfc9cu: goto label_1cfc9c;
        case 0x1cfcbcu: goto label_1cfcbc;
        case 0x1cfcc8u: goto label_1cfcc8;
        default: break;
    }

    ctx->pc = 0x1cfbd0u;

    // 0x1cfbd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1cfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1cfbd4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cfbd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cfbd8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1cfbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1cfbdc: 0x8c454358  lw          $a1, 0x4358($v0)
    ctx->pc = 0x1cfbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4358u));
    // 0x1cfbe0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cfbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cfbe4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cfbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cfbe8: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1cfbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1cfbec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfbf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfbf4: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFBF4u;
    {
        const bool branch_taken_0x1cfbf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBF4u;
        // 0x1cfbf8: 0xac409a08  sw          $zero, -0x65F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294941192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbf4) {
            ctx->pc = 0x1CFC14u;
            goto label_1cfc14;
        }
    }
    ctx->pc = 0x1CFBFCu;
    // 0x1cfbfc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cfbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cfc00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFC00u;
    {
        const bool branch_taken_0x1cfc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC00u;
        // 0x1cfc04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc00) {
            ctx->pc = 0x1CFC14u;
            goto label_1cfc14;
        }
    }
    ctx->pc = 0x1CFC08u;
    // 0x1cfc08: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1cfc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1cfc0c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1CFC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFC14u);
    ctx->pc = 0x1CFC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC0Cu;
    // 0x1cfc10: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1CFC0Cu, 0x1CFC14u)) {
        return;
    }
    ctx->pc = 0x1CFC14u;
label_1cfc14:
    // 0x1cfc14: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cfc18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cfc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfc1c: 0xc05ec94  jal         func_17B250
    ctx->pc = 0x1CFC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CFC24u);
    ctx->pc = 0x1CFC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC1Cu;
    // 0x1cfc20: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B250u, 0x1CFC1Cu, 0x1CFC24u)) {
        return;
    }
    ctx->pc = 0x1CFC24u;
label_1cfc24:
    // 0x1cfc24: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cfc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cfc28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc2c: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x1cfc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x1cfc30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cfc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfc34: 0xc043642  jal         func_10D908
    ctx->pc = 0x1CFC34u;
    SET_GPR_U32(ctx, 31, 0x1CFC3Cu);
    ctx->pc = 0x1CFC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC34u;
    // 0x1cfc38: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x1CFC34u, 0x1CFC3Cu)) {
        return;
    }
    ctx->pc = 0x1CFC3Cu;
label_1cfc3c:
    // 0x1cfc3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1cfc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1cfc40: 0x8e021a70  lw          $v0, 0x1A70($s0)
    ctx->pc = 0x1cfc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
    // 0x1cfc44: 0x8c634330  lw          $v1, 0x4330($v1)
    ctx->pc = 0x1cfc44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4330u));
    // 0x1cfc48: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFC48u;
    {
        const bool branch_taken_0x1cfc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cfc48) {
            ctx->pc = 0x1CFC68u;
            goto label_1cfc68;
        }
    }
    ctx->pc = 0x1CFC50u;
    // 0x1cfc50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cfc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cfc54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFC54u;
    {
        const bool branch_taken_0x1cfc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC54u;
        // 0x1cfc58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc54) {
            ctx->pc = 0x1CFC68u;
            goto label_1cfc68;
        }
    }
    ctx->pc = 0x1CFC5Cu;
    // 0x1cfc5c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1cfc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1cfc60: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1CFC60u;
    SET_GPR_U32(ctx, 31, 0x1CFC68u);
    ctx->pc = 0x1CFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC60u;
    // 0x1cfc64: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1CFC60u, 0x1CFC68u)) {
        return;
    }
    ctx->pc = 0x1CFC68u;
label_1cfc68:
    // 0x1cfc68: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x1CFC68u;
    SET_GPR_U32(ctx, 31, 0x1CFC70u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1CFC68u, 0x1CFC70u)) {
        return;
    }
    ctx->pc = 0x1CFC70u;
label_1cfc70:
    // 0x1cfc70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFC70u;
    {
        const bool branch_taken_0x1cfc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC70u;
        // 0x1cfc74: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc70) {
            ctx->pc = 0x1CFC84u;
            goto label_1cfc84;
        }
    }
    ctx->pc = 0x1CFC78u;
    // 0x1cfc78: 0xc0603ce  jal         func_180F38
    ctx->pc = 0x1CFC78u;
    SET_GPR_U32(ctx, 31, 0x1CFC80u);
    ctx->pc = 0x180F38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F38u, 0x1CFC78u, 0x1CFC80u)) {
        return;
    }
    ctx->pc = 0x1CFC80u;
label_1cfc80:
    // 0x1cfc80: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cfc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1cfc84:
    // 0x1cfc84: 0x8c509168  lw          $s0, -0x6E98($v0)
    ctx->pc = 0x1cfc84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x1cfc88: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CFC88u;
    {
        const bool branch_taken_0x1cfc88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC88u;
        // 0x1cfc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc88) {
            ctx->pc = 0x1CFCBCu;
            goto label_1cfcbc;
        }
    }
    ctx->pc = 0x1CFC90u;
    // 0x1cfc90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc94: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1CFC94u;
    SET_GPR_U32(ctx, 31, 0x1CFC9Cu);
    ctx->pc = 0x1CFC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC94u;
    // 0x1cfc98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1CFC94u, 0x1CFC9Cu)) {
        return;
    }
    ctx->pc = 0x1CFC9Cu;
label_1cfc9c:
    // 0x1cfc9c: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1cfc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1cfca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfca4: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1cfca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1cfca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfcac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cfcacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfcb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cfcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfcb4: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x1CFCB4u;
    SET_GPR_U32(ctx, 31, 0x1CFCBCu);
    ctx->pc = 0x1CFCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCB4u;
    // 0x1cfcb8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x1CFCB4u, 0x1CFCBCu)) {
        return;
    }
    ctx->pc = 0x1CFCBCu;
label_1cfcbc:
    // 0x1cfcbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfcc0: 0xc076068  jal         func_1D81A0
    ctx->pc = 0x1CFCC0u;
    SET_GPR_U32(ctx, 31, 0x1CFCC8u);
    ctx->pc = 0x1CFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCC0u;
    // 0x1cfcc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x1CFCC0u, 0x1CFCC8u)) {
        return;
    }
    ctx->pc = 0x1CFCC8u;
label_1cfcc8:
    // 0x1cfcc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cfcc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCD0u;
        // 0x1cfcd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFCD8u;
}
