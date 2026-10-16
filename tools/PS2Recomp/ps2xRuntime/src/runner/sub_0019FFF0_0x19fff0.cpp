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

// Function: sub_0019FFF0
// Address: 0x19fff0 - 0x1a00b8
void sub_0019FFF0_0x19fff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FFF0_0x19fff0");
#endif

    switch (ctx->pc) {
        case 0x1a0028u: goto label_1a0028;
        case 0x1a0048u: goto label_1a0048;
        case 0x1a0060u: goto label_1a0060;
        case 0x1a0070u: goto label_1a0070;
        default: break;
    }

    ctx->pc = 0x19fff0u;

    // 0x19fff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19fff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19fff4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19fff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x19fff8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19fffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19fffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0000: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a0000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a0004: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a0004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0008: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a0008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a000c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a0010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0014: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1a0014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a0018: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A0018u;
    {
        const bool branch_taken_0x1a0018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0018) {
            ctx->pc = 0x1A0094u;
            goto label_1a0094;
        }
    }
    ctx->pc = 0x1A0020u;
    // 0x1a0020: 0xc068064  jal         func_1A0190
    ctx->pc = 0x1A0020u;
    SET_GPR_U32(ctx, 31, 0x1A0028u);
    ctx->pc = 0x1A0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0020u;
    // 0x1a0024: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0190u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0190u, 0x1A0020u, 0x1A0028u)) {
        return;
    }
    ctx->pc = 0x1A0028u;
label_1a0028:
    // 0x1a0028: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A0028u;
    {
        const bool branch_taken_0x1a0028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0028) {
            ctx->pc = 0x1A002Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0028u;
            // 0x1a002c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0094u;
            goto label_1a0094;
        }
    }
    ctx->pc = 0x1A0030u;
    // 0x1a0030: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1a0030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0034: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1a0034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a0038: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1a0038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a003c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a003cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0040: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x1a0040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1a0044: 0x0  nop
    ctx->pc = 0x1a0044u;
    // NOP
label_1a0048:
    // 0x1a0048: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a0048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a004c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A004Cu;
    {
        const bool branch_taken_0x1a004c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A004Cu;
        // 0x1a0050: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a004c) {
            ctx->pc = 0x1A007Cu;
            goto label_1a007c;
        }
    }
    ctx->pc = 0x1A0054u;
    // 0x1a0054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0058: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x1A0058u;
    SET_GPR_U32(ctx, 31, 0x1A0060u);
    ctx->pc = 0x1A005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0058u;
    // 0x1a005c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x1A0058u, 0x1A0060u)) {
        return;
    }
    ctx->pc = 0x1A0060u;
label_1a0060:
    // 0x1a0060: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x1a0060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x1a0064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0068: 0xc065c40  jal         func_197100
    ctx->pc = 0x1A0068u;
    SET_GPR_U32(ctx, 31, 0x1A0070u);
    ctx->pc = 0x1A006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0068u;
    // 0x1a006c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1A0068u, 0x1A0070u)) {
        return;
    }
    ctx->pc = 0x1A0070u;
label_1a0070:
    // 0x1a0070: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1a0070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1a0074: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0074u;
    {
        const bool branch_taken_0x1a0074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0074u;
        // 0x1a0078: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0074) {
            ctx->pc = 0x1A0090u;
            goto label_1a0090;
        }
    }
    ctx->pc = 0x1A007Cu;
label_1a007c:
    // 0x1a007c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1a007cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1a0080: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x1a0080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a0084: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A0084u;
    {
        const bool branch_taken_0x1a0084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0084u;
        // 0x1a0088: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0084) {
            ctx->pc = 0x1A0048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0048;
        }
    }
    ctx->pc = 0x1A008Cu;
    // 0x1a008c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a008cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0090:
    // 0x1a0090: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a0090u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1a0094:
    // 0x1a0094: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x1a0094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x1a0098: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a0098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a009c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a009cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a00a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a00a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a00a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a00a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a00a8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a00a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a00ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a00acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a00b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A00B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00B0u;
        // 0x1a00b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A00B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A00B8u;
}
