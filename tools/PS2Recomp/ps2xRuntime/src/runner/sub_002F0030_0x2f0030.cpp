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

// Function: sub_002F0030
// Address: 0x2f0030 - 0x2f0120
void sub_002F0030_0x2f0030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0030_0x2f0030");
#endif

    switch (ctx->pc) {
        case 0x2f006cu: goto label_2f006c;
        case 0x2f0080u: goto label_2f0080;
        case 0x2f0088u: goto label_2f0088;
        case 0x2f00a8u: goto label_2f00a8;
        case 0x2f00b8u: goto label_2f00b8;
        case 0x2f00dcu: goto label_2f00dc;
        default: break;
    }

    ctx->pc = 0x2f0030u;

    // 0x2f0030: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f0030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f0034: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f0034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f0038: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2f0038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2f003c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2f003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2f0040: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f0040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0044: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f0044u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0048: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2f0048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2f004c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2f004cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2f0050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f0050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0054: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2f0054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2f0058: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f0058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f005c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f0060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f0064: 0xc092782  jal         func_249E08
    ctx->pc = 0x2F0064u;
    SET_GPR_U32(ctx, 31, 0x2F006Cu);
    ctx->pc = 0x2F0068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0064u;
    // 0x2f0068: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2F0064u, 0x2F006Cu)) {
        return;
    }
    ctx->pc = 0x2F006Cu;
label_2f006c:
    // 0x2f006c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F006Cu;
    {
        const bool branch_taken_0x2f006c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F006Cu;
        // 0x2f0070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f006c) {
            ctx->pc = 0x2F00FCu;
            goto label_2f00fc;
        }
    }
    ctx->pc = 0x2F0074u;
    // 0x2f0074: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x2f0074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x2f0078: 0xc0bbd1e  jal         func_2EF478
    ctx->pc = 0x2F0078u;
    SET_GPR_U32(ctx, 31, 0x2F0080u);
    ctx->pc = 0x2F007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0078u;
    // 0x2f007c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF478u, 0x2F0078u, 0x2F0080u)) {
        return;
    }
    ctx->pc = 0x2F0080u;
label_2f0080:
    // 0x2f0080: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0080u;
    {
        const bool branch_taken_0x2f0080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0080) {
            ctx->pc = 0x2F0084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0080u;
            // 0x2f0084: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0090u;
            goto label_2f0090;
        }
    }
    ctx->pc = 0x2F0088u;
label_2f0088:
    // 0x2f0088: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F0088u;
    {
        const bool branch_taken_0x2f0088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0088u;
        // 0x2f008c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0088) {
            ctx->pc = 0x2F00FCu;
            goto label_2f00fc;
        }
    }
    ctx->pc = 0x2F0090u;
label_2f0090:
    // 0x2f0090: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f0090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0094: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F0094u;
    {
        const bool branch_taken_0x2f0094 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2F0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0094u;
        // 0x2f0098: 0x8eb30010  lw          $s3, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0094) {
            ctx->pc = 0x2F00F8u;
            goto label_2f00f8;
        }
    }
    ctx->pc = 0x2F009Cu;
    // 0x2f009c: 0x26710004  addiu       $s1, $s3, 0x4
    ctx->pc = 0x2f009cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2f00a0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2f00a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f00a4: 0x0  nop
    ctx->pc = 0x2f00a4u;
    // NOP
label_2f00a8:
    // 0x2f00a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f00a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f00ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f00acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f00b0: 0xc09275c  jal         func_249D70
    ctx->pc = 0x2F00B0u;
    SET_GPR_U32(ctx, 31, 0x2F00B8u);
    ctx->pc = 0x2F00B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F00B0u;
    // 0x2f00b4: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x2F00B0u, 0x2F00B8u)) {
        return;
    }
    ctx->pc = 0x2F00B8u;
label_2f00b8:
    // 0x2f00b8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F00B8u;
    {
        const bool branch_taken_0x2f00b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F00B8u;
        // 0x2f00bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00b8) {
            ctx->pc = 0x2F0088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0088;
        }
    }
    ctx->pc = 0x2F00C0u;
    // 0x2f00c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f00c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f00c4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2f00c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2f00c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f00c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f00cc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2f00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2f00d0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2f00d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2f00d4: 0xc092782  jal         func_249E08
    ctx->pc = 0x2F00D4u;
    SET_GPR_U32(ctx, 31, 0x2F00DCu);
    ctx->pc = 0x2F00D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F00D4u;
    // 0x2f00d8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2F00D4u, 0x2F00DCu)) {
        return;
    }
    ctx->pc = 0x2F00DCu;
label_2f00dc:
    // 0x2f00dc: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2F00DCu;
    {
        const bool branch_taken_0x2f00dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F00DCu;
        // 0x2f00e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00dc) {
            ctx->pc = 0x2F0088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0088;
        }
    }
    ctx->pc = 0x2F00E4u;
    // 0x2f00e4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2f00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2f00e8: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2f00e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2f00ec: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2f00ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f00f0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F00F0u;
    {
        const bool branch_taken_0x2f00f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F00F0u;
        // 0x2f00f4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00f0) {
            ctx->pc = 0x2F00A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f00a8;
        }
    }
    ctx->pc = 0x2F00F8u;
label_2f00f8:
    // 0x2f00f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f00fc:
    // 0x2f00fc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2f00fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f0100: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2f0100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f0104: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2f0104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f0108: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f0108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f010c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2f010cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0110: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2f0110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0118: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0118u;
        // 0x2f011c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0120u;
}
