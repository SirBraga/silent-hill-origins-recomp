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

// Function: sub_002232D8
// Address: 0x2232d8 - 0x2233d0
void sub_002232D8_0x2232d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002232D8_0x2232d8");
#endif

    switch (ctx->pc) {
        case 0x2232f4u: goto label_2232f4;
        case 0x223310u: goto label_223310;
        case 0x223330u: goto label_223330;
        case 0x223370u: goto label_223370;
        case 0x223380u: goto label_223380;
        case 0x223390u: goto label_223390;
        case 0x2233a8u: goto label_2233a8;
        default: break;
    }

    ctx->pc = 0x2232d8u;

    // 0x2232d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2232d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2232dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2232dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2232e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2232e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2232e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2232e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2232e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2232ec: 0xc088c9e  jal         func_223278
    ctx->pc = 0x2232ECu;
    SET_GPR_U32(ctx, 31, 0x2232F4u);
    ctx->pc = 0x2232F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232ECu;
    // 0x2232f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223278u, 0x2232ECu, 0x2232F4u)) {
        return;
    }
    ctx->pc = 0x2232F4u;
label_2232f4:
    // 0x2232f4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x2232f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x2232f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2232f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2232fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223300: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x223300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x223304: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x223304u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x223308: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x223308u;
    SET_GPR_U32(ctx, 31, 0x223310u);
    ctx->pc = 0x22330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223308u;
    // 0x22330c: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x223308u, 0x223310u)) {
        return;
    }
    ctx->pc = 0x223310u;
label_223310:
    // 0x223310: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x223310u;
    {
        const bool branch_taken_0x223310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223310u;
        // 0x223314: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223310) {
            ctx->pc = 0x2233B4u;
            goto label_2233b4;
        }
    }
    ctx->pc = 0x223318u;
    // 0x223318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22331c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22331cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223320: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x223320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x223324: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x223324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x223328: 0xc0926f4  jal         func_249BD0
    ctx->pc = 0x223328u;
    SET_GPR_U32(ctx, 31, 0x223330u);
    ctx->pc = 0x22332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223328u;
    // 0x22332c: 0x24080065  addiu       $t0, $zero, 0x65 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249BD0u, 0x223328u, 0x223330u)) {
        return;
    }
    ctx->pc = 0x223330u;
label_223330:
    // 0x223330: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x223330u;
    {
        const bool branch_taken_0x223330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223330u;
        // 0x223334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223330) {
            ctx->pc = 0x2233B8u;
            goto label_2233b8;
        }
    }
    ctx->pc = 0x223338u;
    // 0x223338: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x223338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22333c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22333Cu;
    {
        const bool branch_taken_0x22333c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22333Cu;
        // 0x223340: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22333c) {
            ctx->pc = 0x223350u;
            goto label_223350;
        }
    }
    ctx->pc = 0x223344u;
    // 0x223344: 0x90420023  lbu         $v0, 0x23($v0)
    ctx->pc = 0x223344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x223348: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x223348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22334c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22334cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_223350:
    // 0x223350: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x223350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x223354: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x223354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x223358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22335c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22335cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223360: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x223360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x223364: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x223364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x223368: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x223368u;
    SET_GPR_U32(ctx, 31, 0x223370u);
    ctx->pc = 0x22336Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223368u;
    // 0x22336c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x223368u, 0x223370u)) {
        return;
    }
    ctx->pc = 0x223370u;
label_223370:
    // 0x223370: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x223370u;
    {
        const bool branch_taken_0x223370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223370u;
        // 0x223374: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223370) {
            ctx->pc = 0x2233B4u;
            goto label_2233b4;
        }
    }
    ctx->pc = 0x223378u;
    // 0x223378: 0xc093cd8  jal         func_24F360
    ctx->pc = 0x223378u;
    SET_GPR_U32(ctx, 31, 0x223380u);
    ctx->pc = 0x22337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223378u;
    // 0x22337c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F360u, 0x223378u, 0x223380u)) {
        return;
    }
    ctx->pc = 0x223380u;
label_223380:
    // 0x223380: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x223380u;
    {
        const bool branch_taken_0x223380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223380u;
        // 0x223384: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223380) {
            ctx->pc = 0x2233B4u;
            goto label_2233b4;
        }
    }
    ctx->pc = 0x223388u;
    // 0x223388: 0xc093cd8  jal         func_24F360
    ctx->pc = 0x223388u;
    SET_GPR_U32(ctx, 31, 0x223390u);
    ctx->pc = 0x22338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223388u;
    // 0x22338c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24F360u, 0x223388u, 0x223390u)) {
        return;
    }
    ctx->pc = 0x223390u;
label_223390:
    // 0x223390: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223390u;
    {
        const bool branch_taken_0x223390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223390u;
        // 0x223394: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223390) {
            ctx->pc = 0x2233B4u;
            goto label_2233b4;
        }
    }
    ctx->pc = 0x223398u;
    // 0x223398: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x223398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22339c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22339cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2233a0: 0xc0937a6  jal         func_24DE98
    ctx->pc = 0x2233A0u;
    SET_GPR_U32(ctx, 31, 0x2233A8u);
    ctx->pc = 0x2233A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2233A0u;
    // 0x2233a4: 0x24840448  addiu       $a0, $a0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DE98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DE98u, 0x2233A0u, 0x2233A8u)) {
        return;
    }
    ctx->pc = 0x2233A8u;
label_2233a8:
    // 0x2233a8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2233a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x2233ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2233ACu;
    {
        const bool branch_taken_0x2233ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2233B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233ACu;
        // 0x2233b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2233ac) {
            ctx->pc = 0x2233B8u;
            goto label_2233b8;
        }
    }
    ctx->pc = 0x2233B4u;
label_2233b4:
    // 0x2233b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2233b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2233b8:
    // 0x2233b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2233b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2233bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2233bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2233c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2233c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2233c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2233C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2233C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2233C4u;
        // 0x2233c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2233C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2233CCu;
    // 0x2233cc: 0x0  nop
    ctx->pc = 0x2233ccu;
    // NOP
    ctx->pc = 0x2233d0u;
}
