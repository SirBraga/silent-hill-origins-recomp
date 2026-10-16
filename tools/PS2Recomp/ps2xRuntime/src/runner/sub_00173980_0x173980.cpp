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

// Function: sub_00173980
// Address: 0x173980 - 0x173a90
void sub_00173980_0x173980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173980_0x173980");
#endif

    switch (ctx->pc) {
        case 0x1739a4u: goto label_1739a4;
        case 0x1739b8u: goto label_1739b8;
        case 0x1739d8u: goto label_1739d8;
        case 0x173a0cu: goto label_173a0c;
        case 0x173a1cu: goto label_173a1c;
        case 0x173a2cu: goto label_173a2c;
        case 0x173a40u: goto label_173a40;
        case 0x173a60u: goto label_173a60;
        default: break;
    }

    ctx->pc = 0x173980u;

    // 0x173980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x173980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x173984: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x173984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x173988: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x173988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17398c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17398cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173990: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x173990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x173994: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x173994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x173998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17399c: 0xc05d79a  jal         func_175E68
    ctx->pc = 0x17399Cu;
    SET_GPR_U32(ctx, 31, 0x1739A4u);
    ctx->pc = 0x1739A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17399Cu;
    // 0x1739a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175E68u, 0x17399Cu, 0x1739A4u)) {
        return;
    }
    ctx->pc = 0x1739A4u;
label_1739a4:
    // 0x1739a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1739a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1739a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1739a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739ac: 0x8c46f7c0  lw          $a2, -0x840($v0)
    ctx->pc = 0x1739acu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF7C0u));
    // 0x1739b0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1739B0u;
    SET_GPR_U32(ctx, 31, 0x1739B8u);
    ctx->pc = 0x1739B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1739B0u;
    // 0x1739b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1739B0u, 0x1739B8u)) {
        return;
    }
    ctx->pc = 0x1739B8u;
label_1739b8:
    // 0x1739b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1739b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1739bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1739bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1739c0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1739C0u;
    {
        const bool branch_taken_0x1739c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1739C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739C0u;
        // 0x1739c4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739c0) {
            ctx->pc = 0x173A70u;
            goto label_173a70;
        }
    }
    ctx->pc = 0x1739C8u;
    // 0x1739c8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1739c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1739cc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1739ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1739d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1739d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1739d4: 0x0  nop
    ctx->pc = 0x1739d4u;
    // NOP
label_1739d8:
    // 0x1739d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1739d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1739dc: 0x5053000d  beql        $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1739DCu;
    {
        const bool branch_taken_0x1739dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1739dc) {
            ctx->pc = 0x1739E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1739DCu;
            // 0x1739e0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173A14u;
            goto label_173a14;
        }
    }
    ctx->pc = 0x1739E4u;
    // 0x1739e4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1739E4u;
    {
        const bool branch_taken_0x1739e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1739e4) {
            ctx->pc = 0x1739E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1739E4u;
            // 0x1739e8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173A04u;
            goto label_173a04;
        }
    }
    ctx->pc = 0x1739ECu;
    // 0x1739ec: 0x5052000d  beql        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1739ECu;
    {
        const bool branch_taken_0x1739ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1739ec) {
            ctx->pc = 0x1739F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1739ECu;
            // 0x1739f0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173A24u;
            goto label_173a24;
        }
    }
    ctx->pc = 0x1739F4u;
    // 0x1739f4: 0x1050000f  beq         $v0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1739F4u;
    {
        const bool branch_taken_0x1739f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1739F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739F4u;
        // 0x1739f8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739f4) {
            ctx->pc = 0x173A34u;
            goto label_173a34;
        }
    }
    ctx->pc = 0x1739FCu;
    // 0x1739fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1739FCu;
    {
        const bool branch_taken_0x1739fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739FCu;
        // 0x173a00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1739fc) {
            ctx->pc = 0x173A4Cu;
            goto label_173a4c;
        }
    }
    ctx->pc = 0x173A04u;
label_173a04:
    // 0x173a04: 0xc081b56  jal         func_206D58
    ctx->pc = 0x173A04u;
    SET_GPR_U32(ctx, 31, 0x173A0Cu);
    ctx->pc = 0x173A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A04u;
    // 0x173a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173A04u, 0x173A0Cu)) {
        return;
    }
    ctx->pc = 0x173A0Cu;
label_173a0c:
    // 0x173a0c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x173A0Cu;
    {
        const bool branch_taken_0x173a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A0Cu;
        // 0x173a10: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a0c) {
            ctx->pc = 0x173A44u;
            goto label_173a44;
        }
    }
    ctx->pc = 0x173A14u;
label_173a14:
    // 0x173a14: 0xc081b56  jal         func_206D58
    ctx->pc = 0x173A14u;
    SET_GPR_U32(ctx, 31, 0x173A1Cu);
    ctx->pc = 0x173A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A14u;
    // 0x173a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173A14u, 0x173A1Cu)) {
        return;
    }
    ctx->pc = 0x173A1Cu;
label_173a1c:
    // 0x173a1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x173A1Cu;
    {
        const bool branch_taken_0x173a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A1Cu;
        // 0x173a20: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a1c) {
            ctx->pc = 0x173A44u;
            goto label_173a44;
        }
    }
    ctx->pc = 0x173A24u;
label_173a24:
    // 0x173a24: 0xc081b56  jal         func_206D58
    ctx->pc = 0x173A24u;
    SET_GPR_U32(ctx, 31, 0x173A2Cu);
    ctx->pc = 0x173A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A24u;
    // 0x173a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173A24u, 0x173A2Cu)) {
        return;
    }
    ctx->pc = 0x173A2Cu;
label_173a2c:
    // 0x173a2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x173A2Cu;
    {
        const bool branch_taken_0x173a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A2Cu;
        // 0x173a30: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a2c) {
            ctx->pc = 0x173A44u;
            goto label_173a44;
        }
    }
    ctx->pc = 0x173A34u;
label_173a34:
    // 0x173a34: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x173a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x173a38: 0xc081b56  jal         func_206D58
    ctx->pc = 0x173A38u;
    SET_GPR_U32(ctx, 31, 0x173A40u);
    ctx->pc = 0x173A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A38u;
    // 0x173a3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173A38u, 0x173A40u)) {
        return;
    }
    ctx->pc = 0x173A40u;
label_173a40:
    // 0x173a40: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x173a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_173a44:
    // 0x173a44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x173a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_173a4c:
    // 0x173a4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x173a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173a50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173a54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173a58: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x173A58u;
    SET_GPR_U32(ctx, 31, 0x173A60u);
    ctx->pc = 0x173A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A58u;
    // 0x173a5c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x173A58u, 0x173A60u)) {
        return;
    }
    ctx->pc = 0x173A60u;
label_173a60:
    // 0x173a60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x173a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173a68: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x173A68u;
    {
        const bool branch_taken_0x173a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A68u;
        // 0x173a6c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a68) {
            ctx->pc = 0x1739D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1739d8;
        }
    }
    ctx->pc = 0x173A70u;
label_173a70:
    // 0x173a70: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x173a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173a74: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x173a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173a78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x173a78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173a7c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x173a7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173a84: 0x3e00008  jr          $ra
    ctx->pc = 0x173A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A84u;
        // 0x173a88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173A8Cu;
    // 0x173a8c: 0x0  nop
    ctx->pc = 0x173a8cu;
    // NOP
    ctx->pc = 0x173a90u;
}
