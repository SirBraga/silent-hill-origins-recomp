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

// Function: sub_001ECE68
// Address: 0x1ece68 - 0x1ecfe8
void sub_001ECE68_0x1ece68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECE68_0x1ece68");
#endif

    switch (ctx->pc) {
        case 0x1ece68u: goto label_1ece68;
        case 0x1ece6cu: goto label_1ece6c;
        case 0x1ece70u: goto label_1ece70;
        case 0x1ece74u: goto label_1ece74;
        case 0x1ece78u: goto label_1ece78;
        case 0x1ece7cu: goto label_1ece7c;
        case 0x1ece80u: goto label_1ece80;
        case 0x1ece84u: goto label_1ece84;
        case 0x1ece88u: goto label_1ece88;
        case 0x1ece8cu: goto label_1ece8c;
        case 0x1ece90u: goto label_1ece90;
        case 0x1ece94u: goto label_1ece94;
        case 0x1ece98u: goto label_1ece98;
        case 0x1ece9cu: goto label_1ece9c;
        case 0x1ecea0u: goto label_1ecea0;
        case 0x1ecea4u: goto label_1ecea4;
        case 0x1ecea8u: goto label_1ecea8;
        case 0x1eceacu: goto label_1eceac;
        case 0x1eceb0u: goto label_1eceb0;
        case 0x1eceb4u: goto label_1eceb4;
        case 0x1eceb8u: goto label_1eceb8;
        case 0x1ecebcu: goto label_1ecebc;
        case 0x1ecec0u: goto label_1ecec0;
        case 0x1ecec4u: goto label_1ecec4;
        case 0x1ecec8u: goto label_1ecec8;
        case 0x1ececcu: goto label_1ececc;
        case 0x1eced0u: goto label_1eced0;
        case 0x1eced4u: goto label_1eced4;
        case 0x1eced8u: goto label_1eced8;
        case 0x1ecedcu: goto label_1ecedc;
        case 0x1ecee0u: goto label_1ecee0;
        case 0x1ecee4u: goto label_1ecee4;
        case 0x1ecee8u: goto label_1ecee8;
        case 0x1eceecu: goto label_1eceec;
        case 0x1ecef0u: goto label_1ecef0;
        case 0x1ecef4u: goto label_1ecef4;
        case 0x1ecef8u: goto label_1ecef8;
        case 0x1ecefcu: goto label_1ecefc;
        case 0x1ecf00u: goto label_1ecf00;
        case 0x1ecf04u: goto label_1ecf04;
        case 0x1ecf08u: goto label_1ecf08;
        case 0x1ecf0cu: goto label_1ecf0c;
        case 0x1ecf10u: goto label_1ecf10;
        case 0x1ecf14u: goto label_1ecf14;
        case 0x1ecf18u: goto label_1ecf18;
        case 0x1ecf1cu: goto label_1ecf1c;
        case 0x1ecf20u: goto label_1ecf20;
        case 0x1ecf24u: goto label_1ecf24;
        case 0x1ecf28u: goto label_1ecf28;
        case 0x1ecf2cu: goto label_1ecf2c;
        case 0x1ecf30u: goto label_1ecf30;
        case 0x1ecf34u: goto label_1ecf34;
        case 0x1ecf38u: goto label_1ecf38;
        case 0x1ecf3cu: goto label_1ecf3c;
        case 0x1ecf40u: goto label_1ecf40;
        case 0x1ecf44u: goto label_1ecf44;
        case 0x1ecf48u: goto label_1ecf48;
        case 0x1ecf4cu: goto label_1ecf4c;
        case 0x1ecf50u: goto label_1ecf50;
        case 0x1ecf54u: goto label_1ecf54;
        case 0x1ecf58u: goto label_1ecf58;
        case 0x1ecf5cu: goto label_1ecf5c;
        case 0x1ecf60u: goto label_1ecf60;
        case 0x1ecf64u: goto label_1ecf64;
        case 0x1ecf68u: goto label_1ecf68;
        case 0x1ecf6cu: goto label_1ecf6c;
        case 0x1ecf70u: goto label_1ecf70;
        case 0x1ecf74u: goto label_1ecf74;
        case 0x1ecf78u: goto label_1ecf78;
        case 0x1ecf7cu: goto label_1ecf7c;
        case 0x1ecf80u: goto label_1ecf80;
        case 0x1ecf84u: goto label_1ecf84;
        case 0x1ecf88u: goto label_1ecf88;
        case 0x1ecf8cu: goto label_1ecf8c;
        case 0x1ecf90u: goto label_1ecf90;
        case 0x1ecf94u: goto label_1ecf94;
        case 0x1ecf98u: goto label_1ecf98;
        case 0x1ecf9cu: goto label_1ecf9c;
        case 0x1ecfa0u: goto label_1ecfa0;
        case 0x1ecfa4u: goto label_1ecfa4;
        case 0x1ecfa8u: goto label_1ecfa8;
        case 0x1ecfacu: goto label_1ecfac;
        case 0x1ecfb0u: goto label_1ecfb0;
        case 0x1ecfb4u: goto label_1ecfb4;
        case 0x1ecfb8u: goto label_1ecfb8;
        case 0x1ecfbcu: goto label_1ecfbc;
        case 0x1ecfc0u: goto label_1ecfc0;
        case 0x1ecfc4u: goto label_1ecfc4;
        case 0x1ecfc8u: goto label_1ecfc8;
        case 0x1ecfccu: goto label_1ecfcc;
        case 0x1ecfd0u: goto label_1ecfd0;
        case 0x1ecfd4u: goto label_1ecfd4;
        case 0x1ecfd8u: goto label_1ecfd8;
        case 0x1ecfdcu: goto label_1ecfdc;
        case 0x1ecfe0u: goto label_1ecfe0;
        case 0x1ecfe4u: goto label_1ecfe4;
        default: break;
    }

    ctx->pc = 0x1ece68u;

label_1ece68:
    // 0x1ece68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ece68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ece6c:
    // 0x1ece6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ece6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1ece70:
    // 0x1ece70: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1ece70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1ece74:
    // 0x1ece74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ece74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ece78:
    // 0x1ece78: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1ece78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1ece7c:
    // 0x1ece7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ece7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ece80:
    // 0x1ece80: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ece80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1ece84:
    // 0x1ece84: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ece84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ece88:
    // 0x1ece88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ece88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1ece8c:
    // 0x1ece8c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ece8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1ece90:
    // 0x1ece90: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
label_1ece94:
    if (ctx->pc == 0x1ECE94u) {
        ctx->pc = 0x1ECE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE90u;
        // 0x1ece94: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECE98u;
        goto label_1ece98;
    }
    ctx->pc = 0x1ECE90u;
    {
        const bool branch_taken_0x1ece90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE90u;
        // 0x1ece94: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece90) {
            ctx->pc = 0x1ECEE0u;
            goto label_1ecee0;
        }
    }
    ctx->pc = 0x1ECE98u;
label_1ece98:
    // 0x1ece98: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_1ece9c:
    if (ctx->pc == 0x1ECE9Cu) {
        ctx->pc = 0x1ECE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE98u;
        // 0x1ece9c: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECEA0u;
        goto label_1ecea0;
    }
    ctx->pc = 0x1ECE98u;
    {
        const bool branch_taken_0x1ece98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE98u;
        // 0x1ece9c: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece98) {
            ctx->pc = 0x1ECEE0u;
            goto label_1ecee0;
        }
    }
    ctx->pc = 0x1ECEA0u;
label_1ecea0:
    // 0x1ecea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ecea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ecea4:
    // 0x1ecea4: 0xc0bbac2  jal         func_2EEB08
label_1ecea8:
    if (ctx->pc == 0x1ECEA8u) {
        ctx->pc = 0x1ECEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEA4u;
        // 0x1ecea8: 0x24a51e98  addiu       $a1, $a1, 0x1E98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECEACu;
        goto label_1eceac;
    }
    ctx->pc = 0x1ECEA4u;
    SET_GPR_U32(ctx, 31, 0x1ECEACu);
    ctx->pc = 0x1ECEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECEA4u;
    // 0x1ecea8: 0x24a51e98  addiu       $a1, $a1, 0x1E98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EEB08u, 0x1ECEA4u, 0x1ECEACu)) {
        return;
    }
    ctx->pc = 0x1ECEACu;
label_1eceac:
    // 0x1eceac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eceacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eceb0:
    // 0x1eceb0: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
label_1eceb4:
    if (ctx->pc == 0x1ECEB4u) {
        ctx->pc = 0x1ECEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEB0u;
        // 0x1eceb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECEB8u;
        goto label_1eceb8;
    }
    ctx->pc = 0x1ECEB0u;
    {
        const bool branch_taken_0x1eceb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEB0u;
        // 0x1eceb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eceb0) {
            ctx->pc = 0x1ECFB8u;
            goto label_1ecfb8;
        }
    }
    ctx->pc = 0x1ECEB8u;
label_1eceb8:
    // 0x1eceb8: 0xc0932d4  jal         func_24CB50
label_1ecebc:
    if (ctx->pc == 0x1ECEBCu) {
        ctx->pc = 0x1ECEC0u;
        goto label_1ecec0;
    }
    ctx->pc = 0x1ECEB8u;
    SET_GPR_U32(ctx, 31, 0x1ECEC0u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1ECEB8u, 0x1ECEC0u)) {
        return;
    }
    ctx->pc = 0x1ECEC0u;
label_1ecec0:
    // 0x1ecec0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ecec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ecec4:
    // 0x1ecec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ecec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecec8:
    // 0x1ecec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ecec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ececc:
    // 0x1ececc: 0x40f809  jalr        $v0
label_1eced0:
    if (ctx->pc == 0x1ECED0u) {
        ctx->pc = 0x1ECED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECECCu;
        // 0x1eced0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECED4u;
        goto label_1eced4;
    }
    ctx->pc = 0x1ECECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ECED4u);
        ctx->pc = 0x1ECED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECECCu;
        // 0x1eced0: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECECCu, 0x1ECED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECED4u;
label_1eced4:
    // 0x1eced4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1eced4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eced8:
    // 0x1eced8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_1ecedc:
    if (ctx->pc == 0x1ECEDCu) {
        ctx->pc = 0x1ECEE0u;
        goto label_1ecee0;
    }
    ctx->pc = 0x1ECED8u;
    {
        const bool branch_taken_0x1eced8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eced8) {
            ctx->pc = 0x1ECEE8u;
            goto label_1ecee8;
        }
    }
    ctx->pc = 0x1ECEE0u;
label_1ecee0:
    // 0x1ecee0: 0x10000035  b           . + 4 + (0x35 << 2)
label_1ecee4:
    if (ctx->pc == 0x1ECEE4u) {
        ctx->pc = 0x1ECEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEE0u;
        // 0x1ecee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECEE8u;
        goto label_1ecee8;
    }
    ctx->pc = 0x1ECEE0u;
    {
        const bool branch_taken_0x1ecee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEE0u;
        // 0x1ecee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecee0) {
            ctx->pc = 0x1ECFB8u;
            goto label_1ecfb8;
        }
    }
    ctx->pc = 0x1ECEE8u;
label_1ecee8:
    // 0x1ecee8: 0xc0932d4  jal         func_24CB50
label_1eceec:
    if (ctx->pc == 0x1ECEECu) {
        ctx->pc = 0x1ECEF0u;
        goto label_1ecef0;
    }
    ctx->pc = 0x1ECEE8u;
    SET_GPR_U32(ctx, 31, 0x1ECEF0u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1ECEE8u, 0x1ECEF0u)) {
        return;
    }
    ctx->pc = 0x1ECEF0u;
label_1ecef0:
    // 0x1ecef0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ecef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ecef4:
    // 0x1ecef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ecef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecef8:
    // 0x1ecef8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ecef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ecefc:
    // 0x1ecefc: 0x40f809  jalr        $v0
label_1ecf00:
    if (ctx->pc == 0x1ECF00u) {
        ctx->pc = 0x1ECF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEFCu;
        // 0x1ecf00: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF04u;
        goto label_1ecf04;
    }
    ctx->pc = 0x1ECEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ECF04u);
        ctx->pc = 0x1ECF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECEFCu;
        // 0x1ecf00: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECEFCu, 0x1ECF04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECF04u;
label_1ecf04:
    // 0x1ecf04: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1ecf04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ecf08:
    // 0x1ecf08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ecf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf0c:
    // 0x1ecf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ecf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf10:
    // 0x1ecf10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ecf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf14:
    // 0x1ecf14: 0xc0c493d  jal         func_3124F4
label_1ecf18:
    if (ctx->pc == 0x1ECF18u) {
        ctx->pc = 0x1ECF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF14u;
        // 0x1ecf18: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF1Cu;
        goto label_1ecf1c;
    }
    ctx->pc = 0x1ECF14u;
    SET_GPR_U32(ctx, 31, 0x1ECF1Cu);
    ctx->pc = 0x1ECF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF14u;
    // 0x1ecf18: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1ECF14u, 0x1ECF1Cu)) {
        return;
    }
    ctx->pc = 0x1ECF1Cu;
label_1ecf1c:
    // 0x1ecf1c: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_1ecf20:
    if (ctx->pc == 0x1ECF20u) {
        ctx->pc = 0x1ECF24u;
        goto label_1ecf24;
    }
    ctx->pc = 0x1ECF1Cu;
    {
        const bool branch_taken_0x1ecf1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf1c) {
            ctx->pc = 0x1ECFA0u;
            goto label_1ecfa0;
        }
    }
    ctx->pc = 0x1ECF24u;
label_1ecf24:
    // 0x1ecf24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ecf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ecf28:
    // 0x1ecf28: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1ecf2c:
    if (ctx->pc == 0x1ECF2Cu) {
        ctx->pc = 0x1ECF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF28u;
        // 0x1ecf2c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF30u;
        goto label_1ecf30;
    }
    ctx->pc = 0x1ECF28u;
    {
        const bool branch_taken_0x1ecf28 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1ECF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF28u;
        // 0x1ecf2c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf28) {
            ctx->pc = 0x1ECF48u;
            goto label_1ecf48;
        }
    }
    ctx->pc = 0x1ECF30u;
label_1ecf30:
    // 0x1ecf30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ecf30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1ecf34:
    // 0x1ecf34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ecf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ecf38:
    // 0x1ecf38: 0x0  nop
    ctx->pc = 0x1ecf38u;
    // NOP
label_1ecf3c:
    // 0x1ecf3c: 0x0  nop
    ctx->pc = 0x1ecf3cu;
    // NOP
label_1ecf40:
    // 0x1ecf40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1ecf44:
    if (ctx->pc == 0x1ECF44u) {
        ctx->pc = 0x1ECF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF40u;
        // 0x1ecf44: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF48u;
        goto label_1ecf48;
    }
    ctx->pc = 0x1ECF40u;
    {
        const bool branch_taken_0x1ecf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF40u;
        // 0x1ecf44: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf40) {
            ctx->pc = 0x1ECF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecf30;
        }
    }
    ctx->pc = 0x1ECF48u;
label_1ecf48:
    // 0x1ecf48: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1ecf48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
label_1ecf4c:
    // 0x1ecf4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ecf4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf50:
    // 0x1ecf50: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1ecf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
label_1ecf54:
    // 0x1ecf54: 0x24a5d0f8  addiu       $a1, $a1, -0x2F08
    ctx->pc = 0x1ecf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955256));
label_1ecf58:
    // 0x1ecf58: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1ecf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_1ecf5c:
    // 0x1ecf5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ecf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf60:
    // 0x1ecf60: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1ecf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_1ecf64:
    // 0x1ecf64: 0xc09545a  jal         func_255168
label_1ecf68:
    if (ctx->pc == 0x1ECF68u) {
        ctx->pc = 0x1ECF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF64u;
        // 0x1ecf68: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF6Cu;
        goto label_1ecf6c;
    }
    ctx->pc = 0x1ECF64u;
    SET_GPR_U32(ctx, 31, 0x1ECF6Cu);
    ctx->pc = 0x1ECF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF64u;
    // 0x1ecf68: 0xafb10008  sw          $s1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1ECF64u, 0x1ECF6Cu)) {
        return;
    }
    ctx->pc = 0x1ECF6Cu;
label_1ecf6c:
    // 0x1ecf6c: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1ecf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
label_1ecf70:
    // 0x1ecf70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ecf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf74:
    // 0x1ecf74: 0x24a5d1f8  addiu       $a1, $a1, -0x2E08
    ctx->pc = 0x1ecf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955512));
label_1ecf78:
    // 0x1ecf78: 0xc09545a  jal         func_255168
label_1ecf7c:
    if (ctx->pc == 0x1ECF7Cu) {
        ctx->pc = 0x1ECF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF78u;
        // 0x1ecf7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF80u;
        goto label_1ecf80;
    }
    ctx->pc = 0x1ECF78u;
    SET_GPR_U32(ctx, 31, 0x1ECF80u);
    ctx->pc = 0x1ECF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF78u;
    // 0x1ecf7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1ECF78u, 0x1ECF80u)) {
        return;
    }
    ctx->pc = 0x1ECF80u;
label_1ecf80:
    // 0x1ecf80: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ecf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ecf84:
    // 0x1ecf84: 0xc0808f0  jal         func_2023C0
label_1ecf88:
    if (ctx->pc == 0x1ECF88u) {
        ctx->pc = 0x1ECF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF84u;
        // 0x1ecf88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECF8Cu;
        goto label_1ecf8c;
    }
    ctx->pc = 0x1ECF84u;
    SET_GPR_U32(ctx, 31, 0x1ECF8Cu);
    ctx->pc = 0x1ECF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF84u;
    // 0x1ecf88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1ECF84u, 0x1ECF8Cu)) {
        return;
    }
    ctx->pc = 0x1ECF8Cu;
label_1ecf8c:
    // 0x1ecf8c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1ecf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1ecf90:
    // 0x1ecf90: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ecf90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ecf94:
    // 0x1ecf94: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1ecf94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_1ecf98:
    // 0x1ecf98: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1ecf98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_1ecf9c:
    // 0x1ecf9c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1ecf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1ecfa0:
    // 0x1ecfa0: 0xc0932d4  jal         func_24CB50
label_1ecfa4:
    if (ctx->pc == 0x1ECFA4u) {
        ctx->pc = 0x1ECFA8u;
        goto label_1ecfa8;
    }
    ctx->pc = 0x1ECFA0u;
    SET_GPR_U32(ctx, 31, 0x1ECFA8u);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1ECFA0u, 0x1ECFA8u)) {
        return;
    }
    ctx->pc = 0x1ECFA8u;
label_1ecfa8:
    // 0x1ecfa8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ecfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ecfac:
    // 0x1ecfac: 0x60f809  jalr        $v1
label_1ecfb0:
    if (ctx->pc == 0x1ECFB0u) {
        ctx->pc = 0x1ECFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFACu;
        // 0x1ecfb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECFB4u;
        goto label_1ecfb4;
    }
    ctx->pc = 0x1ECFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ECFB4u);
        ctx->pc = 0x1ECFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFACu;
        // 0x1ecfb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECFACu, 0x1ECFB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECFB4u;
label_1ecfb4:
    // 0x1ecfb4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1ecfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ecfb8:
    // 0x1ecfb8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ecfb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ecfbc:
    // 0x1ecfbc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ecfbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ecfc0:
    // 0x1ecfc0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ecfc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ecfc4:
    // 0x1ecfc4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ecfc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ecfc8:
    // 0x1ecfc8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1ecfc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ecfcc:
    // 0x1ecfcc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1ecfccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ecfd0:
    // 0x1ecfd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ecfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ecfd4:
    // 0x1ecfd4: 0x3e00008  jr          $ra
label_1ecfd8:
    if (ctx->pc == 0x1ECFD8u) {
        ctx->pc = 0x1ECFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFD4u;
        // 0x1ecfd8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECFDCu;
        goto label_1ecfdc;
    }
    ctx->pc = 0x1ECFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFD4u;
        // 0x1ecfd8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECFDCu;
label_1ecfdc:
    // 0x1ecfdc: 0x0  nop
    ctx->pc = 0x1ecfdcu;
    // NOP
label_1ecfe0:
    // 0x1ecfe0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ecfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ecfe4:
    // 0x1ecfe4: 0x0  nop
    ctx->pc = 0x1ecfe4u;
    // NOP
    ctx->pc = 0x1ecfe8u;
}
