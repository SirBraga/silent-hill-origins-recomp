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

// Function: sub_0021E088
// Address: 0x21e088 - 0x21e150
void sub_0021E088_0x21e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E088_0x21e088");
#endif

    switch (ctx->pc) {
        case 0x21e088u: goto label_21e088;
        case 0x21e08cu: goto label_21e08c;
        case 0x21e090u: goto label_21e090;
        case 0x21e094u: goto label_21e094;
        case 0x21e098u: goto label_21e098;
        case 0x21e09cu: goto label_21e09c;
        case 0x21e0a0u: goto label_21e0a0;
        case 0x21e0a4u: goto label_21e0a4;
        case 0x21e0a8u: goto label_21e0a8;
        case 0x21e0acu: goto label_21e0ac;
        case 0x21e0b0u: goto label_21e0b0;
        case 0x21e0b4u: goto label_21e0b4;
        case 0x21e0b8u: goto label_21e0b8;
        case 0x21e0bcu: goto label_21e0bc;
        case 0x21e0c0u: goto label_21e0c0;
        case 0x21e0c4u: goto label_21e0c4;
        case 0x21e0c8u: goto label_21e0c8;
        case 0x21e0ccu: goto label_21e0cc;
        case 0x21e0d0u: goto label_21e0d0;
        case 0x21e0d4u: goto label_21e0d4;
        case 0x21e0d8u: goto label_21e0d8;
        case 0x21e0dcu: goto label_21e0dc;
        case 0x21e0e0u: goto label_21e0e0;
        case 0x21e0e4u: goto label_21e0e4;
        case 0x21e0e8u: goto label_21e0e8;
        case 0x21e0ecu: goto label_21e0ec;
        case 0x21e0f0u: goto label_21e0f0;
        case 0x21e0f4u: goto label_21e0f4;
        case 0x21e0f8u: goto label_21e0f8;
        case 0x21e0fcu: goto label_21e0fc;
        case 0x21e100u: goto label_21e100;
        case 0x21e104u: goto label_21e104;
        case 0x21e108u: goto label_21e108;
        case 0x21e10cu: goto label_21e10c;
        case 0x21e110u: goto label_21e110;
        case 0x21e114u: goto label_21e114;
        case 0x21e118u: goto label_21e118;
        case 0x21e11cu: goto label_21e11c;
        case 0x21e120u: goto label_21e120;
        case 0x21e124u: goto label_21e124;
        case 0x21e128u: goto label_21e128;
        case 0x21e12cu: goto label_21e12c;
        case 0x21e130u: goto label_21e130;
        case 0x21e134u: goto label_21e134;
        case 0x21e138u: goto label_21e138;
        case 0x21e13cu: goto label_21e13c;
        case 0x21e140u: goto label_21e140;
        case 0x21e144u: goto label_21e144;
        case 0x21e148u: goto label_21e148;
        case 0x21e14cu: goto label_21e14c;
        default: break;
    }

    ctx->pc = 0x21e088u;

label_21e088:
    // 0x21e088: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21e088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_21e08c:
    // 0x21e08c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e090:
    // 0x21e090: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x21e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_21e094:
    // 0x21e094: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x21e094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_21e098:
    // 0x21e098: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_21e09c:
    // 0x21e09c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e0a0:
    // 0x21e0a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x21e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_21e0a4:
    // 0x21e0a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x21e0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_21e0a8:
    // 0x21e0a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x21e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_21e0ac:
    // 0x21e0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21e0b0:
    // 0x21e0b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21e0b4:
    // 0x21e0b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21e0b8:
    // 0x21e0b8: 0x40f809  jalr        $v0
label_21e0bc:
    if (ctx->pc == 0x21E0BCu) {
        ctx->pc = 0x21E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0B8u;
        // 0x21e0bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0C0u;
        goto label_21e0c0;
    }
    ctx->pc = 0x21E0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E0C0u);
        ctx->pc = 0x21E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0B8u;
        // 0x21e0bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E0B8u, 0x21E0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E0C0u;
label_21e0c0:
    // 0x21e0c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21e0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e0c4:
    // 0x21e0c4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21e0c8:
    // 0x21e0c8: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x21e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
label_21e0cc:
    // 0x21e0cc: 0x2442dce8  addiu       $v0, $v0, -0x2318
    ctx->pc = 0x21e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958312));
label_21e0d0:
    // 0x21e0d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_21e0d4:
    // 0x21e0d4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x21e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21e0d8:
    // 0x21e0d8: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
label_21e0dc:
    if (ctx->pc == 0x21E0DCu) {
        ctx->pc = 0x21E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0D8u;
        // 0x21e0dc: 0x8e1200d8  lw          $s2, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E0E0u;
        goto label_21e0e0;
    }
    ctx->pc = 0x21E0D8u;
    {
        const bool branch_taken_0x21e0d8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x21E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0D8u;
        // 0x21e0dc: 0x8e1200d8  lw          $s2, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0d8) {
            ctx->pc = 0x21E130u;
            goto label_21e130;
        }
    }
    ctx->pc = 0x21E0E0u;
label_21e0e0:
    // 0x21e0e0: 0x2491002c  addiu       $s1, $a0, 0x2C
    ctx->pc = 0x21e0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_21e0e4:
    // 0x21e0e4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x21e0e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21e0e8:
    // 0x21e0e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21e0ec:
    // 0x21e0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e0f0:
    // 0x21e0f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21e0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e0f4:
    // 0x21e0f4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x21e0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_21e0f8:
    // 0x21e0f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21e0fc:
    // 0x21e0fc: 0x40f809  jalr        $v0
label_21e100:
    if (ctx->pc == 0x21E100u) {
        ctx->pc = 0x21E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0FCu;
        // 0x21e100: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E104u;
        goto label_21e104;
    }
    ctx->pc = 0x21E0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E104u);
        ctx->pc = 0x21E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0FCu;
        // 0x21e100: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E0FCu, 0x21E104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E104u;
label_21e104:
    // 0x21e104: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x21e104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_21e108:
    // 0x21e108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e10c:
    // 0x21e10c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21e10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e110:
    // 0x21e110: 0xc0c493d  jal         func_3124F4
label_21e114:
    if (ctx->pc == 0x21E114u) {
        ctx->pc = 0x21E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E110u;
        // 0x21e114: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E118u;
        goto label_21e118;
    }
    ctx->pc = 0x21E110u;
    SET_GPR_U32(ctx, 31, 0x21E118u);
    ctx->pc = 0x21E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E110u;
    // 0x21e114: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x21E110u, 0x21E118u)) {
        return;
    }
    ctx->pc = 0x21E118u;
label_21e118:
    // 0x21e118: 0x26520054  addiu       $s2, $s2, 0x54
    ctx->pc = 0x21e118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_21e11c:
    // 0x21e11c: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x21e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_21e120:
    // 0x21e120: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x21e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_21e124:
    // 0x21e124: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x21e124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21e128:
    // 0x21e128: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_21e12c:
    if (ctx->pc == 0x21E12Cu) {
        ctx->pc = 0x21E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E128u;
        // 0x21e12c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E130u;
        goto label_21e130;
    }
    ctx->pc = 0x21E128u;
    {
        const bool branch_taken_0x21e128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E128u;
        // 0x21e12c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e128) {
            ctx->pc = 0x21E0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e0e8;
        }
    }
    ctx->pc = 0x21E130u;
label_21e130:
    // 0x21e130: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x21e130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21e134:
    // 0x21e134: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x21e134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21e138:
    // 0x21e138: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21e138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21e13c:
    // 0x21e13c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x21e13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21e140:
    // 0x21e140: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x21e140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21e144:
    // 0x21e144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21e148:
    // 0x21e148: 0x3e00008  jr          $ra
label_21e14c:
    if (ctx->pc == 0x21E14Cu) {
        ctx->pc = 0x21E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E148u;
        // 0x21e14c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E150u;
        goto label_fallthrough_0x21e148;
    }
    ctx->pc = 0x21E148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E148u;
        // 0x21e14c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21e148:
    ctx->pc = 0x21E150u;
}
