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

// Function: sub_001617B8
// Address: 0x1617b8 - 0x1618a0
void sub_001617B8_0x1617b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001617B8_0x1617b8");
#endif

    switch (ctx->pc) {
        case 0x16180cu: goto label_16180c;
        case 0x161814u: goto label_161814;
        case 0x161820u: goto label_161820;
        case 0x161828u: goto label_161828;
        case 0x161840u: goto label_161840;
        case 0x161868u: goto label_161868;
        case 0x161874u: goto label_161874;
        case 0x161880u: goto label_161880;
        default: break;
    }

    ctx->pc = 0x1617b8u;

    // 0x1617b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1617b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1617bc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1617bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1617c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1617c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1617c4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1617c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1617c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1617c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1617cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1617ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1617d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1617d4: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x1617d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x1617d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1617d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1617dc: 0x24633680  addiu       $v1, $v1, 0x3680
    ctx->pc = 0x1617dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13952));
    // 0x1617e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1617e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1617e4: 0x26720038  addiu       $s2, $s3, 0x38
    ctx->pc = 0x1617e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x1617e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1617e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1617ec: 0x26710048  addiu       $s1, $s3, 0x48
    ctx->pc = 0x1617ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x1617f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1617f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617f4: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x1617f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x1617f8: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x1617f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x1617fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1617fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x161800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161804: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x161804u;
    SET_GPR_U32(ctx, 31, 0x16180Cu);
    ctx->pc = 0x161808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161804u;
    // 0x161808: 0x26700050  addiu       $s0, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x161804u, 0x16180Cu)) {
        return;
    }
    ctx->pc = 0x16180Cu;
label_16180c:
    // 0x16180c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16180Cu;
    SET_GPR_U32(ctx, 31, 0x161814u);
    ctx->pc = 0x161810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16180Cu;
    // 0x161810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16180Cu, 0x161814u)) {
        return;
    }
    ctx->pc = 0x161814u;
label_161814:
    // 0x161814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x161814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161818: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x161818u;
    SET_GPR_U32(ctx, 31, 0x161820u);
    ctx->pc = 0x16181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161818u;
    // 0x16181c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x161818u, 0x161820u)) {
        return;
    }
    ctx->pc = 0x161820u;
label_161820:
    // 0x161820: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x161820u;
    SET_GPR_U32(ctx, 31, 0x161828u);
    ctx->pc = 0x161824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161820u;
    // 0x161824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x161820u, 0x161828u)) {
        return;
    }
    ctx->pc = 0x161828u;
label_161828:
    // 0x161828: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x161828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x16182c: 0x8c448650  lw          $a0, -0x79B0($v0)
    ctx->pc = 0x16182cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338650u));
    // 0x161830: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x161830u;
    {
        const bool branch_taken_0x161830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x161834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161830u;
        // 0x161834: 0xac408650  sw          $zero, -0x79B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161830) {
            ctx->pc = 0x16185Cu;
            goto label_16185c;
        }
    }
    ctx->pc = 0x161838u;
    // 0x161838: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x161838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16183c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16183cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161840:
    // 0x161840: 0x10730004  beq         $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x161840u;
    {
        const bool branch_taken_0x161840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x161844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161840u;
        // 0x161844: 0x8c84006c  lw          $a0, 0x6C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161840) {
            ctx->pc = 0x161854u;
            goto label_161854;
        }
    }
    ctx->pc = 0x161848u;
    // 0x161848: 0x8ca28650  lw          $v0, -0x79B0($a1)
    ctx->pc = 0x161848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936144)));
    // 0x16184c: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x16184cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
    // 0x161850: 0xaca38650  sw          $v1, -0x79B0($a1)
    ctx->pc = 0x161850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294936144), GPR_U32(ctx, 3));
label_161854:
    // 0x161854: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x161854u;
    {
        const bool branch_taken_0x161854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161854u;
        // 0x161858: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161854) {
            ctx->pc = 0x161840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161840;
        }
    }
    ctx->pc = 0x16185Cu;
label_16185c:
    // 0x16185c: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x16185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x161860: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x161860u;
    SET_GPR_U32(ctx, 31, 0x161868u);
    ctx->pc = 0x161864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161860u;
    // 0x161864: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x161860u, 0x161868u)) {
        return;
    }
    ctx->pc = 0x161868u;
label_161868:
    // 0x161868: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x161868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x16186c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16186Cu;
    SET_GPR_U32(ctx, 31, 0x161874u);
    ctx->pc = 0x161870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16186Cu;
    // 0x161870: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16186Cu, 0x161874u)) {
        return;
    }
    ctx->pc = 0x161874u;
label_161874:
    // 0x161874: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x161874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161878: 0xc04f084  jal         func_13C210
    ctx->pc = 0x161878u;
    SET_GPR_U32(ctx, 31, 0x161880u);
    ctx->pc = 0x16187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161878u;
    // 0x16187c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x161878u, 0x161880u)) {
        return;
    }
    ctx->pc = 0x161880u;
label_161880:
    // 0x161880: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x161880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161884: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x161884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161888: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x161888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16188c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x16188cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161890: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x161890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161898: 0x3e00008  jr          $ra
    ctx->pc = 0x161898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161898u;
        // 0x16189c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1618A0u;
}
