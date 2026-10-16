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

// Function: sub_001FBFD0
// Address: 0x1fbfd0 - 0x1fc060
void sub_001FBFD0_0x1fbfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBFD0_0x1fbfd0");
#endif

    switch (ctx->pc) {
        case 0x1fbfd0u: goto label_1fbfd0;
        case 0x1fbfd4u: goto label_1fbfd4;
        case 0x1fbfd8u: goto label_1fbfd8;
        case 0x1fbfdcu: goto label_1fbfdc;
        case 0x1fbfe0u: goto label_1fbfe0;
        case 0x1fbfe4u: goto label_1fbfe4;
        case 0x1fbfe8u: goto label_1fbfe8;
        case 0x1fbfecu: goto label_1fbfec;
        case 0x1fbff0u: goto label_1fbff0;
        case 0x1fbff4u: goto label_1fbff4;
        case 0x1fbff8u: goto label_1fbff8;
        case 0x1fbffcu: goto label_1fbffc;
        case 0x1fc000u: goto label_1fc000;
        case 0x1fc004u: goto label_1fc004;
        case 0x1fc008u: goto label_1fc008;
        case 0x1fc00cu: goto label_1fc00c;
        case 0x1fc010u: goto label_1fc010;
        case 0x1fc014u: goto label_1fc014;
        case 0x1fc018u: goto label_1fc018;
        case 0x1fc01cu: goto label_1fc01c;
        case 0x1fc020u: goto label_1fc020;
        case 0x1fc024u: goto label_1fc024;
        case 0x1fc028u: goto label_1fc028;
        case 0x1fc02cu: goto label_1fc02c;
        case 0x1fc030u: goto label_1fc030;
        case 0x1fc034u: goto label_1fc034;
        case 0x1fc038u: goto label_1fc038;
        case 0x1fc03cu: goto label_1fc03c;
        case 0x1fc040u: goto label_1fc040;
        case 0x1fc044u: goto label_1fc044;
        case 0x1fc048u: goto label_1fc048;
        case 0x1fc04cu: goto label_1fc04c;
        case 0x1fc050u: goto label_1fc050;
        case 0x1fc054u: goto label_1fc054;
        case 0x1fc058u: goto label_1fc058;
        case 0x1fc05cu: goto label_1fc05c;
        default: break;
    }

    ctx->pc = 0x1fbfd0u;

label_1fbfd0:
    // 0x1fbfd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fbfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fbfd4:
    // 0x1fbfd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fbfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1fbfd8:
    // 0x1fbfd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fbfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1fbfdc:
    // 0x1fbfdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbfdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbfe0:
    // 0x1fbfe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fbfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fbfe4:
    // 0x1fbfe4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fbfe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbfe8:
    // 0x1fbfe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fbfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fbfec:
    // 0x1fbfec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fbfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fbff0:
    // 0x1fbff0: 0xc0808f0  jal         func_2023C0
label_1fbff4:
    if (ctx->pc == 0x1FBFF4u) {
        ctx->pc = 0x1FBFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFF0u;
        // 0x1fbff4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBFF8u;
        goto label_1fbff8;
    }
    ctx->pc = 0x1FBFF0u;
    SET_GPR_U32(ctx, 31, 0x1FBFF8u);
    ctx->pc = 0x1FBFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBFF0u;
    // 0x1fbff4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1FBFF0u, 0x1FBFF8u)) {
        return;
    }
    ctx->pc = 0x1FBFF8u;
label_1fbff8:
    // 0x1fbff8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1fbff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fbffc:
    // 0x1fbffc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fbffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc000:
    // 0x1fc000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc004:
    // 0x1fc004: 0xc093546  jal         func_24D518
label_1fc008:
    if (ctx->pc == 0x1FC008u) {
        ctx->pc = 0x1FC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC004u;
        // 0x1fc008: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC00Cu;
        goto label_1fc00c;
    }
    ctx->pc = 0x1FC004u;
    SET_GPR_U32(ctx, 31, 0x1FC00Cu);
    ctx->pc = 0x1FC008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC004u;
    // 0x1fc008: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x1FC004u, 0x1FC00Cu)) {
        return;
    }
    ctx->pc = 0x1FC00Cu;
label_1fc00c:
    // 0x1fc00c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fc010:
    // 0x1fc010: 0xc07f190  jal         func_1FC640
label_1fc014:
    if (ctx->pc == 0x1FC014u) {
        ctx->pc = 0x1FC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC010u;
        // 0x1fc014: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC018u;
        goto label_1fc018;
    }
    ctx->pc = 0x1FC010u;
    SET_GPR_U32(ctx, 31, 0x1FC018u);
    ctx->pc = 0x1FC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC010u;
    // 0x1fc014: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC640u, 0x1FC010u, 0x1FC018u)) {
        return;
    }
    ctx->pc = 0x1FC018u;
label_1fc018:
    // 0x1fc018: 0xc081340  jal         func_204D00
label_1fc01c:
    if (ctx->pc == 0x1FC01Cu) {
        ctx->pc = 0x1FC01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC018u;
        // 0x1fc01c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC020u;
        goto label_1fc020;
    }
    ctx->pc = 0x1FC018u;
    SET_GPR_U32(ctx, 31, 0x1FC020u);
    ctx->pc = 0x1FC01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC018u;
    // 0x1fc01c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204D00u, 0x1FC018u, 0x1FC020u)) {
        return;
    }
    ctx->pc = 0x1FC020u;
label_1fc020:
    // 0x1fc020: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fc020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fc024:
    // 0x1fc024: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1fc028:
    if (ctx->pc == 0x1FC028u) {
        ctx->pc = 0x1FC028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC024u;
        // 0x1fc028: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC02Cu;
        goto label_1fc02c;
    }
    ctx->pc = 0x1FC024u;
    {
        const bool branch_taken_0x1fc024 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC024u;
        // 0x1fc028: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc024) {
            ctx->pc = 0x1FC040u;
            goto label_1fc040;
        }
    }
    ctx->pc = 0x1FC02Cu;
label_1fc02c:
    // 0x1fc02c: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x1fc02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_1fc030:
    // 0x1fc030: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1fc030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1fc034:
    // 0x1fc034: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1fc034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1fc038:
    // 0x1fc038: 0x60f809  jalr        $v1
label_1fc03c:
    if (ctx->pc == 0x1FC03Cu) {
        ctx->pc = 0x1FC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC038u;
        // 0x1fc03c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC040u;
        goto label_1fc040;
    }
    ctx->pc = 0x1FC038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FC040u);
        ctx->pc = 0x1FC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC038u;
        // 0x1fc03c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC038u, 0x1FC040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC040u;
label_1fc040:
    // 0x1fc040: 0xc0808b8  jal         func_2022E0
label_1fc044:
    if (ctx->pc == 0x1FC044u) {
        ctx->pc = 0x1FC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC040u;
        // 0x1fc044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC048u;
        goto label_1fc048;
    }
    ctx->pc = 0x1FC040u;
    SET_GPR_U32(ctx, 31, 0x1FC048u);
    ctx->pc = 0x1FC044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC040u;
    // 0x1fc044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FC040u, 0x1FC048u)) {
        return;
    }
    ctx->pc = 0x1FC048u;
label_1fc048:
    // 0x1fc048: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fc048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fc04c:
    // 0x1fc04c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fc04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc050:
    // 0x1fc050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fc050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc054:
    // 0x1fc054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fc054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc058:
    // 0x1fc058: 0x3e00008  jr          $ra
label_1fc05c:
    if (ctx->pc == 0x1FC05Cu) {
        ctx->pc = 0x1FC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC058u;
        // 0x1fc05c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC060u;
        goto label_fallthrough_0x1fc058;
    }
    ctx->pc = 0x1FC058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC058u;
        // 0x1fc05c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fc058:
    ctx->pc = 0x1FC060u;
}
