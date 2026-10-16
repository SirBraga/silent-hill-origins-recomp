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

// Function: sub_001AAFD0
// Address: 0x1aafd0 - 0x1ab098
void sub_001AAFD0_0x1aafd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAFD0_0x1aafd0");
#endif

    switch (ctx->pc) {
        case 0x1ab008u: goto label_1ab008;
        case 0x1ab014u: goto label_1ab014;
        case 0x1ab034u: goto label_1ab034;
        case 0x1ab048u: goto label_1ab048;
        case 0x1ab054u: goto label_1ab054;
        case 0x1ab05cu: goto label_1ab05c;
        case 0x1ab068u: goto label_1ab068;
        default: break;
    }

    ctx->pc = 0x1aafd0u;

    // 0x1aafd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aafd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aafd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1aafd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1aafd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aafd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1aafdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1aafe0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1aafe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1aafe4: 0x26030170  addiu       $v1, $s0, 0x170
    ctx->pc = 0x1aafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1aafe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aafe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aafec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1aafecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1aaff0: 0xac601078  sw          $zero, 0x1078($v1)
    ctx->pc = 0x1aaff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4216), GPR_U32(ctx, 0));
    // 0x1aaff4: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1aaff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1aaff8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAFF8u;
    {
        const bool branch_taken_0x1aaff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFF8u;
        // 0x1aaffc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaff8) {
            ctx->pc = 0x1AB018u;
            goto label_1ab018;
        }
    }
    ctx->pc = 0x1AB000u;
    // 0x1ab000: 0xc06a928  jal         func_1AA4A0
    ctx->pc = 0x1AB000u;
    SET_GPR_U32(ctx, 31, 0x1AB008u);
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1AB000u, 0x1AB008u)) {
        return;
    }
    ctx->pc = 0x1AB008u;
label_1ab008:
    // 0x1ab008: 0x8e050160  lw          $a1, 0x160($s0)
    ctx->pc = 0x1ab008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1ab00c: 0xc06a9a4  jal         func_1AA690
    ctx->pc = 0x1AB00Cu;
    SET_GPR_U32(ctx, 31, 0x1AB014u);
    ctx->pc = 0x1AB010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB00Cu;
    // 0x1ab010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA690u, 0x1AB00Cu, 0x1AB014u)) {
        return;
    }
    ctx->pc = 0x1AB014u;
label_1ab014:
    // 0x1ab014: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ab014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab018:
    // 0x1ab018: 0x8e021200  lw          $v0, 0x1200($s0)
    ctx->pc = 0x1ab018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
    // 0x1ab01c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AB01Cu;
    {
        const bool branch_taken_0x1ab01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab01c) {
            ctx->pc = 0x1AB020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB01Cu;
            // 0x1ab020: 0xae001204  sw          $zero, 0x1204($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4612), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB06Cu;
            goto label_1ab06c;
        }
    }
    ctx->pc = 0x1AB024u;
    // 0x1ab024: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AB024u;
    {
        const bool branch_taken_0x1ab024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB024u;
        // 0x1ab028: 0x261200d0  addiu       $s2, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab024) {
            ctx->pc = 0x1AB054u;
            goto label_1ab054;
        }
    }
    ctx->pc = 0x1AB02Cu;
    // 0x1ab02c: 0xc06a4b4  jal         func_1A92D0
    ctx->pc = 0x1AB02Cu;
    SET_GPR_U32(ctx, 31, 0x1AB034u);
    ctx->pc = 0x1AB030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB02Cu;
    // 0x1ab030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A92D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A92D0u, 0x1AB02Cu, 0x1AB034u)) {
        return;
    }
    ctx->pc = 0x1AB034u;
label_1ab034:
    // 0x1ab034: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ab034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab038: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB038u;
    {
        const bool branch_taken_0x1ab038 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab038) {
            ctx->pc = 0x1AB054u;
            goto label_1ab054;
        }
    }
    ctx->pc = 0x1AB040u;
    // 0x1ab040: 0xc06a928  jal         func_1AA4A0
    ctx->pc = 0x1AB040u;
    SET_GPR_U32(ctx, 31, 0x1AB048u);
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1AB040u, 0x1AB048u)) {
        return;
    }
    ctx->pc = 0x1AB048u;
label_1ab048:
    // 0x1ab048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab04c: 0xc06a9a4  jal         func_1AA690
    ctx->pc = 0x1AB04Cu;
    SET_GPR_U32(ctx, 31, 0x1AB054u);
    ctx->pc = 0x1AB050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB04Cu;
    // 0x1ab050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA690u, 0x1AB04Cu, 0x1AB054u)) {
        return;
    }
    ctx->pc = 0x1AB054u;
label_1ab054:
    // 0x1ab054: 0xc06a7c4  jal         func_1A9F10
    ctx->pc = 0x1AB054u;
    SET_GPR_U32(ctx, 31, 0x1AB05Cu);
    ctx->pc = 0x1A9F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F10u, 0x1AB054u, 0x1AB05Cu)) {
        return;
    }
    ctx->pc = 0x1AB05Cu;
label_1ab05c:
    // 0x1ab05c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab060: 0xc06a858  jal         func_1AA160
    ctx->pc = 0x1AB060u;
    SET_GPR_U32(ctx, 31, 0x1AB068u);
    ctx->pc = 0x1AB064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB060u;
    // 0x1ab064: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA160u, 0x1AB060u, 0x1AB068u)) {
        return;
    }
    ctx->pc = 0x1AB068u;
label_1ab068:
    // 0x1ab068: 0xae001204  sw          $zero, 0x1204($s0)
    ctx->pc = 0x1ab068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4612), GPR_U32(ctx, 0));
label_1ab06c:
    // 0x1ab06c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ab06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ab070: 0xae001200  sw          $zero, 0x1200($s0)
    ctx->pc = 0x1ab070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4608), GPR_U32(ctx, 0));
    // 0x1ab074: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x1ab074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x1ab078: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ab078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab07c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ab07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab080: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ab080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab088: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB088u;
        // 0x1ab08c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB090u;
    // 0x1ab090: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ab090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ab094: 0x0  nop
    ctx->pc = 0x1ab094u;
    // NOP
    ctx->pc = 0x1ab098u;
}
