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

// Function: sub_001CA2D8
// Address: 0x1ca2d8 - 0x1ca3c8
void sub_001CA2D8_0x1ca2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA2D8_0x1ca2d8");
#endif

    switch (ctx->pc) {
        case 0x1ca308u: goto label_1ca308;
        case 0x1ca360u: goto label_1ca360;
        case 0x1ca37cu: goto label_1ca37c;
        case 0x1ca390u: goto label_1ca390;
        case 0x1ca3a0u: goto label_1ca3a0;
        default: break;
    }

    ctx->pc = 0x1ca2d8u;

    // 0x1ca2d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ca2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ca2dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ca2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ca2e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1ca2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ca2e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ca2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ca2f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ca2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ca2f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ca2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2f8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ca2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ca2fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca300: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CA300u;
    SET_GPR_U32(ctx, 31, 0x1CA308u);
    ctx->pc = 0x1CA304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA300u;
    // 0x1ca304: 0x3c130034  lui         $s3, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CA300u, 0x1CA308u)) {
        return;
    }
    ctx->pc = 0x1CA308u;
label_1ca308:
    // 0x1ca308: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1ca30c: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1ca30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x1ca310: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1ca310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1ca314: 0x2463a9d8  addiu       $v1, $v1, -0x5628
    ctx->pc = 0x1ca314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945240));
    // 0x1ca318: 0x2484aab8  addiu       $a0, $a0, -0x5548
    ctx->pc = 0x1ca318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945464));
    // 0x1ca31c: 0x2442aa60  addiu       $v0, $v0, -0x55A0
    ctx->pc = 0x1ca31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945376));
    // 0x1ca320: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1ca320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1ca324: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1ca324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1ca328: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x1ca328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x1ca32c: 0xafb1001c  sw          $s1, 0x1C($sp)
    ctx->pc = 0x1ca32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 17));
    // 0x1ca330: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ca330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ca334: 0x8e220268  lw          $v0, 0x268($s1)
    ctx->pc = 0x1ca334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
    // 0x1ca338: 0x8cb28668  lw          $s2, -0x7998($a1)
    ctx->pc = 0x1ca338u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x338668u));
    // 0x1ca33c: 0x8c4500e8  lw          $a1, 0xE8($v0)
    ctx->pc = 0x1ca33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x1ca340: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CA340u;
    {
        const bool branch_taken_0x1ca340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA340u;
        // 0x1ca344: 0x8e62870c  lw          $v0, -0x78F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca340) {
            ctx->pc = 0x1CA3A8u;
            goto label_1ca3a8;
        }
    }
    ctx->pc = 0x1CA348u;
    // 0x1ca348: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1ca348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ca34c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca350: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ca350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca358: 0xc0596ae  jal         func_165AB8
    ctx->pc = 0x1CA358u;
    SET_GPR_U32(ctx, 31, 0x1CA360u);
    ctx->pc = 0x1CA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA358u;
    // 0x1ca35c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x1CA358u, 0x1CA360u)) {
        return;
    }
    ctx->pc = 0x1CA360u;
label_1ca360:
    // 0x1ca360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ca360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca364: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ca364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ca368: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA368u;
    {
        const bool branch_taken_0x1ca368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA368u;
        // 0x1ca36c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca368) {
            ctx->pc = 0x1CA37Cu;
            goto label_1ca37c;
        }
    }
    ctx->pc = 0x1CA370u;
    // 0x1ca370: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ca370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca374: 0xc0595c6  jal         func_165718
    ctx->pc = 0x1CA374u;
    SET_GPR_U32(ctx, 31, 0x1CA37Cu);
    ctx->pc = 0x1CA378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA374u;
    // 0x1ca378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165718u, 0x1CA374u, 0x1CA37Cu)) {
        return;
    }
    ctx->pc = 0x1CA37Cu;
label_1ca37c:
    // 0x1ca37c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca380: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x1ca380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
    // 0x1ca384: 0x8e64870c  lw          $a0, -0x78F4($s3)
    ctx->pc = 0x1ca384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936332)));
    // 0x1ca388: 0xc05ee9a  jal         func_17BA68
    ctx->pc = 0x1CA388u;
    SET_GPR_U32(ctx, 31, 0x1CA390u);
    ctx->pc = 0x1CA38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA388u;
    // 0x1ca38c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x1CA388u, 0x1CA390u)) {
        return;
    }
    ctx->pc = 0x1CA390u;
label_1ca390:
    // 0x1ca390: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x1ca390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1ca394: 0x8e2402a0  lw          $a0, 0x2A0($s1)
    ctx->pc = 0x1ca394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    // 0x1ca398: 0xc09795e  jal         func_25E578
    ctx->pc = 0x1CA398u;
    SET_GPR_U32(ctx, 31, 0x1CA3A0u);
    ctx->pc = 0x1CA39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA398u;
    // 0x1ca39c: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E578u, 0x1CA398u, 0x1CA3A0u)) {
        return;
    }
    ctx->pc = 0x1CA3A0u;
label_1ca3a0:
    // 0x1ca3a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA3A0u;
    {
        const bool branch_taken_0x1ca3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3A0u;
        // 0x1ca3a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3a0) {
            ctx->pc = 0x1CA3B0u;
            goto label_1ca3b0;
        }
    }
    ctx->pc = 0x1CA3A8u;
label_1ca3a8:
    // 0x1ca3a8: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1ca3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x1ca3ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ca3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ca3b0:
    // 0x1ca3b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ca3b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca3b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ca3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca3b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ca3b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca3bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3C0u;
        // 0x1ca3c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA3C8u;
}
