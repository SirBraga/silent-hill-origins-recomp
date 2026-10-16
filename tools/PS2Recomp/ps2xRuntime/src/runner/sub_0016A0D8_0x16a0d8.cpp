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

// Function: sub_0016A0D8
// Address: 0x16a0d8 - 0x16a1e8
void sub_0016A0D8_0x16a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A0D8_0x16a0d8");
#endif

    switch (ctx->pc) {
        case 0x16a0fcu: goto label_16a0fc;
        case 0x16a110u: goto label_16a110;
        case 0x16a130u: goto label_16a130;
        case 0x16a164u: goto label_16a164;
        case 0x16a188u: goto label_16a188;
        case 0x16a1b8u: goto label_16a1b8;
        default: break;
    }

    ctx->pc = 0x16a0d8u;

    // 0x16a0d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16a0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16a0dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x16a0e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16a0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16a0e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16a0ec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16a0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x16a0f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a0f4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16A0F4u;
    SET_GPR_U32(ctx, 31, 0x16A0FCu);
    ctx->pc = 0x16A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A0F4u;
    // 0x16a0f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16A0F4u, 0x16A0FCu)) {
        return;
    }
    ctx->pc = 0x16A0FCu;
label_16a0fc:
    // 0x16a0fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16a100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a104: 0x8c46f638  lw          $a2, -0x9C8($v0)
    ctx->pc = 0x16a104u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF638u));
    // 0x16a108: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16A108u;
    SET_GPR_U32(ctx, 31, 0x16A110u);
    ctx->pc = 0x16A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A108u;
    // 0x16a10c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16A108u, 0x16A110u)) {
        return;
    }
    ctx->pc = 0x16A110u;
label_16a110:
    // 0x16a110: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16a110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a118: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x16A118u;
    {
        const bool branch_taken_0x16a118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A118u;
        // 0x16a11c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a118) {
            ctx->pc = 0x16A1C8u;
            goto label_16a1c8;
        }
    }
    ctx->pc = 0x16A120u;
    // 0x16a120: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x16a120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a124: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x16a124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a128: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16a128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a12c: 0x0  nop
    ctx->pc = 0x16a12cu;
    // NOP
label_16a130:
    // 0x16a130: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16a134: 0x5053000d  beql        $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x16A134u;
    {
        const bool branch_taken_0x16a134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x16a134) {
            ctx->pc = 0x16A138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A134u;
            // 0x16a138: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A16Cu;
            goto label_16a16c;
        }
    }
    ctx->pc = 0x16A13Cu;
    // 0x16a13c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A13Cu;
    {
        const bool branch_taken_0x16a13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a13c) {
            ctx->pc = 0x16A140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A13Cu;
            // 0x16a140: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A15Cu;
            goto label_16a15c;
        }
    }
    ctx->pc = 0x16A144u;
    // 0x16a144: 0x1052000c  beq         $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x16A144u;
    {
        const bool branch_taken_0x16a144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x16A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A144u;
        // 0x16a148: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a144) {
            ctx->pc = 0x16A178u;
            goto label_16a178;
        }
    }
    ctx->pc = 0x16A14Cu;
    // 0x16a14c: 0x10500010  beq         $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16A14Cu;
    {
        const bool branch_taken_0x16a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x16A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A14Cu;
        // 0x16a150: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a14c) {
            ctx->pc = 0x16A190u;
            goto label_16a190;
        }
    }
    ctx->pc = 0x16A154u;
    // 0x16a154: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16A154u;
    {
        const bool branch_taken_0x16a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A154u;
        // 0x16a158: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a154) {
            ctx->pc = 0x16A1A4u;
            goto label_16a1a4;
        }
    }
    ctx->pc = 0x16A15Cu;
label_16a15c:
    // 0x16a15c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x16A15Cu;
    SET_GPR_U32(ctx, 31, 0x16A164u);
    ctx->pc = 0x16A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A15Cu;
    // 0x16a160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x16A15Cu, 0x16A164u)) {
        return;
    }
    ctx->pc = 0x16A164u;
label_16a164:
    // 0x16a164: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16A164u;
    {
        const bool branch_taken_0x16a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A164u;
        // 0x16a168: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a164) {
            ctx->pc = 0x16A19Cu;
            goto label_16a19c;
        }
    }
    ctx->pc = 0x16A16Cu;
label_16a16c:
    // 0x16a16c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16a16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16a170: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16A170u;
    {
        const bool branch_taken_0x16a170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A170u;
        // 0x16a174: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a170) {
            ctx->pc = 0x16A19Cu;
            goto label_16a19c;
        }
    }
    ctx->pc = 0x16A178u;
label_16a178:
    // 0x16a178: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x16a178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x16a17c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16a180: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16A180u;
    SET_GPR_U32(ctx, 31, 0x16A188u);
    ctx->pc = 0x16A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A180u;
    // 0x16a184: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16A180u, 0x16A188u)) {
        return;
    }
    ctx->pc = 0x16A188u;
label_16a188:
    // 0x16a188: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16A188u;
    {
        const bool branch_taken_0x16a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A188u;
        // 0x16a18c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a188) {
            ctx->pc = 0x16A1A0u;
            goto label_16a1a0;
        }
    }
    ctx->pc = 0x16A190u;
label_16a190:
    // 0x16a190: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16a194: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16a194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16a198: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x16a198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_16a19c:
    // 0x16a19c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16a1a0:
    // 0x16a1a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16a1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16a1a4:
    // 0x16a1a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a1a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a1ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a1b0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16A1B0u;
    SET_GPR_U32(ctx, 31, 0x16A1B8u);
    ctx->pc = 0x16A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1B0u;
    // 0x16a1b4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16A1B0u, 0x16A1B8u)) {
        return;
    }
    ctx->pc = 0x16A1B8u;
label_16a1b8:
    // 0x16a1b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a1bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a1c0: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x16A1C0u;
    {
        const bool branch_taken_0x16a1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1C0u;
        // 0x16a1c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1c0) {
            ctx->pc = 0x16A130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a130;
        }
    }
    ctx->pc = 0x16A1C8u;
label_16a1c8:
    // 0x16a1c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16a1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a1cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16a1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a1d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16a1d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a1d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x16a1d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a1d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x16A1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1DCu;
        // 0x16a1e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A1E4u;
    // 0x16a1e4: 0x0  nop
    ctx->pc = 0x16a1e4u;
    // NOP
    ctx->pc = 0x16a1e8u;
}
