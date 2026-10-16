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

// Function: sub_00176278
// Address: 0x176278 - 0x176388
void sub_00176278_0x176278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176278_0x176278");
#endif

    switch (ctx->pc) {
        case 0x17629cu: goto label_17629c;
        case 0x1762b0u: goto label_1762b0;
        case 0x1762d0u: goto label_1762d0;
        case 0x176304u: goto label_176304;
        case 0x176314u: goto label_176314;
        case 0x176324u: goto label_176324;
        case 0x176338u: goto label_176338;
        case 0x176358u: goto label_176358;
        default: break;
    }

    ctx->pc = 0x176278u;

    // 0x176278: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x176278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17627c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x176280: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x176280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x176284: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x176284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176288: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x176288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17628c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17628cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x176290: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x176294: 0xc05d79a  jal         func_175E68
    ctx->pc = 0x176294u;
    SET_GPR_U32(ctx, 31, 0x17629Cu);
    ctx->pc = 0x176298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176294u;
    // 0x176298: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175E68u, 0x176294u, 0x17629Cu)) {
        return;
    }
    ctx->pc = 0x17629Cu;
label_17629c:
    // 0x17629c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17629cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1762a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1762a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762a4: 0x8c46f840  lw          $a2, -0x7C0($v0)
    ctx->pc = 0x1762a4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF840u));
    // 0x1762a8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1762A8u;
    SET_GPR_U32(ctx, 31, 0x1762B0u);
    ctx->pc = 0x1762ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762A8u;
    // 0x1762ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1762A8u, 0x1762B0u)) {
        return;
    }
    ctx->pc = 0x1762B0u;
label_1762b0:
    // 0x1762b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1762b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1762b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1762b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1762b8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1762B8u;
    {
        const bool branch_taken_0x1762b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762B8u;
        // 0x1762bc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762b8) {
            ctx->pc = 0x176368u;
            goto label_176368;
        }
    }
    ctx->pc = 0x1762C0u;
    // 0x1762c0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1762c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1762c4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1762c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1762c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1762cc: 0x0  nop
    ctx->pc = 0x1762ccu;
    // NOP
label_1762d0:
    // 0x1762d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1762d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1762d4: 0x5053000d  beql        $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1762D4u;
    {
        const bool branch_taken_0x1762d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1762d4) {
            ctx->pc = 0x1762D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1762D4u;
            // 0x1762d8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17630Cu;
            goto label_17630c;
        }
    }
    ctx->pc = 0x1762DCu;
    // 0x1762dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1762DCu;
    {
        const bool branch_taken_0x1762dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1762dc) {
            ctx->pc = 0x1762E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1762DCu;
            // 0x1762e0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1762FCu;
            goto label_1762fc;
        }
    }
    ctx->pc = 0x1762E4u;
    // 0x1762e4: 0x5052000d  beql        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1762E4u;
    {
        const bool branch_taken_0x1762e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1762e4) {
            ctx->pc = 0x1762E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1762E4u;
            // 0x1762e8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17631Cu;
            goto label_17631c;
        }
    }
    ctx->pc = 0x1762ECu;
    // 0x1762ec: 0x1050000f  beq         $v0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1762ECu;
    {
        const bool branch_taken_0x1762ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1762F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762ECu;
        // 0x1762f0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762ec) {
            ctx->pc = 0x17632Cu;
            goto label_17632c;
        }
    }
    ctx->pc = 0x1762F4u;
    // 0x1762f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1762F4u;
    {
        const bool branch_taken_0x1762f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762F4u;
        // 0x1762f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762f4) {
            ctx->pc = 0x176344u;
            goto label_176344;
        }
    }
    ctx->pc = 0x1762FCu;
label_1762fc:
    // 0x1762fc: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1762FCu;
    SET_GPR_U32(ctx, 31, 0x176304u);
    ctx->pc = 0x176300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1762FCu;
    // 0x176300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1762FCu, 0x176304u)) {
        return;
    }
    ctx->pc = 0x176304u;
label_176304:
    // 0x176304: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x176304u;
    {
        const bool branch_taken_0x176304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176304u;
        // 0x176308: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176304) {
            ctx->pc = 0x17633Cu;
            goto label_17633c;
        }
    }
    ctx->pc = 0x17630Cu;
label_17630c:
    // 0x17630c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17630Cu;
    SET_GPR_U32(ctx, 31, 0x176314u);
    ctx->pc = 0x176310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17630Cu;
    // 0x176310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17630Cu, 0x176314u)) {
        return;
    }
    ctx->pc = 0x176314u;
label_176314:
    // 0x176314: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x176314u;
    {
        const bool branch_taken_0x176314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176314u;
        // 0x176318: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176314) {
            ctx->pc = 0x17633Cu;
            goto label_17633c;
        }
    }
    ctx->pc = 0x17631Cu;
label_17631c:
    // 0x17631c: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17631Cu;
    SET_GPR_U32(ctx, 31, 0x176324u);
    ctx->pc = 0x176320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17631Cu;
    // 0x176320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17631Cu, 0x176324u)) {
        return;
    }
    ctx->pc = 0x176324u;
label_176324:
    // 0x176324: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x176324u;
    {
        const bool branch_taken_0x176324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176324u;
        // 0x176328: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176324) {
            ctx->pc = 0x17633Cu;
            goto label_17633c;
        }
    }
    ctx->pc = 0x17632Cu;
label_17632c:
    // 0x17632c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x17632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x176330: 0xc081b56  jal         func_206D58
    ctx->pc = 0x176330u;
    SET_GPR_U32(ctx, 31, 0x176338u);
    ctx->pc = 0x176334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176330u;
    // 0x176334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x176330u, 0x176338u)) {
        return;
    }
    ctx->pc = 0x176338u;
label_176338:
    // 0x176338: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x176338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_17633c:
    // 0x17633c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176340: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x176340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_176344:
    // 0x176344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x176344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17634c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17634cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176350: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x176350u;
    SET_GPR_U32(ctx, 31, 0x176358u);
    ctx->pc = 0x176354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176350u;
    // 0x176354: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x176350u, 0x176358u)) {
        return;
    }
    ctx->pc = 0x176358u;
label_176358:
    // 0x176358: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17635c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17635cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176360: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x176360u;
    {
        const bool branch_taken_0x176360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176360u;
        // 0x176364: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176360) {
            ctx->pc = 0x1762D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1762d0;
        }
    }
    ctx->pc = 0x176368u;
label_176368:
    // 0x176368: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x176368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17636c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17636cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176370: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x176370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176374: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x176374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17637c: 0x3e00008  jr          $ra
    ctx->pc = 0x17637Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17637Cu;
        // 0x176380: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17637Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176384u;
    // 0x176384: 0x0  nop
    ctx->pc = 0x176384u;
    // NOP
    ctx->pc = 0x176388u;
}
