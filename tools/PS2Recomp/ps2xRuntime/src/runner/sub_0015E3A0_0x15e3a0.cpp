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

// Function: sub_0015E3A0
// Address: 0x15e3a0 - 0x15e488
void sub_0015E3A0_0x15e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E3A0_0x15e3a0");
#endif

    switch (ctx->pc) {
        case 0x15e3f0u: goto label_15e3f0;
        case 0x15e404u: goto label_15e404;
        case 0x15e418u: goto label_15e418;
        case 0x15e420u: goto label_15e420;
        case 0x15e428u: goto label_15e428;
        case 0x15e440u: goto label_15e440;
        case 0x15e464u: goto label_15e464;
        default: break;
    }

    ctx->pc = 0x15e3a0u;

    // 0x15e3a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15e3a4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x15e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15e3a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x15e3ac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x15e3b0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15e3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x15e3b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15e3b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15e3bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15e3bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15e3c4: 0x246332e0  addiu       $v1, $v1, 0x32E0
    ctx->pc = 0x15e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13024));
    // 0x15e3c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15e3cc: 0x244232c0  addiu       $v0, $v0, 0x32C0
    ctx->pc = 0x15e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12992));
    // 0x15e3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e3d4: 0x26720038  addiu       $s2, $s3, 0x38
    ctx->pc = 0x15e3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x15e3d8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x15e3dc: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x15e3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x15e3e0: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x15e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x15e3e4: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x15e3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x15e3e8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x15E3E8u;
    SET_GPR_U32(ctx, 31, 0x15E3F0u);
    ctx->pc = 0x15E3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3E8u;
    // 0x15e3ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15E3E8u, 0x15E3F0u)) {
        return;
    }
    ctx->pc = 0x15E3F0u;
label_15e3f0:
    // 0x15e3f0: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x15e3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x15e3f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3f8: 0x2631f0c0  addiu       $s1, $s1, -0xF40
    ctx->pc = 0x15e3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963392));
    // 0x15e3fc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x15E3FCu;
    SET_GPR_U32(ctx, 31, 0x15E404u);
    ctx->pc = 0x15E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3FCu;
    // 0x15e400: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15E3FCu, 0x15E404u)) {
        return;
    }
    ctx->pc = 0x15E404u;
label_15e404:
    // 0x15e404: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x15e404u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x15e408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e40c: 0x2610f0c8  addiu       $s0, $s0, -0xF38
    ctx->pc = 0x15e40cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963400));
    // 0x15e410: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x15E410u;
    SET_GPR_U32(ctx, 31, 0x15E418u);
    ctx->pc = 0x15E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E410u;
    // 0x15e414: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15E410u, 0x15E418u)) {
        return;
    }
    ctx->pc = 0x15E418u;
label_15e418:
    // 0x15e418: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x15E418u;
    SET_GPR_U32(ctx, 31, 0x15E420u);
    ctx->pc = 0x15E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E418u;
    // 0x15e41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x15E418u, 0x15E420u)) {
        return;
    }
    ctx->pc = 0x15E420u;
label_15e420:
    // 0x15e420: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x15E420u;
    SET_GPR_U32(ctx, 31, 0x15E428u);
    ctx->pc = 0x15E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E420u;
    // 0x15e424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x15E420u, 0x15E428u)) {
        return;
    }
    ctx->pc = 0x15E428u;
label_15e428:
    // 0x15e428: 0x26630060  addiu       $v1, $s3, 0x60
    ctx->pc = 0x15e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x15e42c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15E42Cu;
    {
        const bool branch_taken_0x15e42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E42Cu;
        // 0x15e430: 0x266207e0  addiu       $v0, $s3, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e42c) {
            ctx->pc = 0x15E458u;
            goto label_15e458;
        }
    }
    ctx->pc = 0x15E434u;
    // 0x15e434: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E434u;
    {
        const bool branch_taken_0x15e434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e434) {
            ctx->pc = 0x15E438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E434u;
            // 0x15e438: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E45Cu;
            goto label_15e45c;
        }
    }
    ctx->pc = 0x15E43Cu;
    // 0x15e43c: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x15e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
label_15e440:
    // 0x15e440: 0x0  nop
    ctx->pc = 0x15e440u;
    // NOP
    // 0x15e444: 0x0  nop
    ctx->pc = 0x15e444u;
    // NOP
    // 0x15e448: 0x0  nop
    ctx->pc = 0x15e448u;
    // NOP
    // 0x15e44c: 0x0  nop
    ctx->pc = 0x15e44cu;
    // NOP
    // 0x15e450: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15E450u;
    {
        const bool branch_taken_0x15e450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E450u;
        // 0x15e454: 0x2442ffa0  addiu       $v0, $v0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e450) {
            ctx->pc = 0x15E440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e440;
        }
    }
    ctx->pc = 0x15E458u;
label_15e458:
    // 0x15e458: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e45c:
    // 0x15e45c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x15E45Cu;
    SET_GPR_U32(ctx, 31, 0x15E464u);
    ctx->pc = 0x15E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E45Cu;
    // 0x15e460: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x15E45Cu, 0x15E464u)) {
        return;
    }
    ctx->pc = 0x15E464u;
label_15e464:
    // 0x15e464: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15e464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e468: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15e468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e46c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15e46cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e470: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15e470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e474: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15e474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e47c: 0x3e00008  jr          $ra
    ctx->pc = 0x15E47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E47Cu;
        // 0x15e480: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E484u;
    // 0x15e484: 0x0  nop
    ctx->pc = 0x15e484u;
    // NOP
    ctx->pc = 0x15e488u;
}
