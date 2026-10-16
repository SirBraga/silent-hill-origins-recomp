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

// Function: sub_0010B3B0
// Address: 0x10b3b0 - 0x10b450
void sub_0010B3B0_0x10b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B3B0_0x10b3b0");
#endif

    switch (ctx->pc) {
        case 0x10b3d0u: goto label_10b3d0;
        case 0x10b3f4u: goto label_10b3f4;
        case 0x10b3fcu: goto label_10b3fc;
        case 0x10b408u: goto label_10b408;
        case 0x10b414u: goto label_10b414;
        case 0x10b424u: goto label_10b424;
        case 0x10b430u: goto label_10b430;
        default: break;
    }

    ctx->pc = 0x10b3b0u;

    // 0x10b3b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10b3b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10b3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10b3b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10b3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10b3c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10b3c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b3c8: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x10B3C8u;
    SET_GPR_U32(ctx, 31, 0x10B3D0u);
    ctx->pc = 0x10B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3C8u;
    // 0x10b3cc: 0x26110044  addiu       $s1, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x10B3C8u, 0x10B3D0u)) {
        return;
    }
    ctx->pc = 0x10B3D0u;
label_10b3d0:
    // 0x10b3d0: 0x2612004c  addiu       $s2, $s0, 0x4C
    ctx->pc = 0x10b3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x10b3d4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10b3d8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x10b3dc: 0x24639ce8  addiu       $v1, $v1, -0x6318
    ctx->pc = 0x10b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941928));
    // 0x10b3e0: 0x24429cc8  addiu       $v0, $v0, -0x6338
    ctx->pc = 0x10b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941896));
    // 0x10b3e4: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x10b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x10b3e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3ec: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10B3ECu;
    SET_GPR_U32(ctx, 31, 0x10B3F4u);
    ctx->pc = 0x10B3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3ECu;
    // 0x10b3f0: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10B3ECu, 0x10B3F4u)) {
        return;
    }
    ctx->pc = 0x10B3F4u;
label_10b3f4:
    // 0x10b3f4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10B3F4u;
    SET_GPR_U32(ctx, 31, 0x10B3FCu);
    ctx->pc = 0x10B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3F4u;
    // 0x10b3f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10B3F4u, 0x10B3FCu)) {
        return;
    }
    ctx->pc = 0x10B3FCu;
label_10b3fc:
    // 0x10b3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b400: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x10B400u;
    SET_GPR_U32(ctx, 31, 0x10B408u);
    ctx->pc = 0x10B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B400u;
    // 0x10b404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x10B400u, 0x10B408u)) {
        return;
    }
    ctx->pc = 0x10B408u;
label_10b408:
    // 0x10b408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b40c: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x10B40Cu;
    SET_GPR_U32(ctx, 31, 0x10B414u);
    ctx->pc = 0x10B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B40Cu;
    // 0x10b410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x10B40Cu, 0x10B414u)) {
        return;
    }
    ctx->pc = 0x10B414u;
label_10b414:
    // 0x10b414: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x10b414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x10b418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b41c: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x10B41Cu;
    SET_GPR_U32(ctx, 31, 0x10B424u);
    ctx->pc = 0x10B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B41Cu;
    // 0x10b420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x10B41Cu, 0x10B424u)) {
        return;
    }
    ctx->pc = 0x10B424u;
label_10b424:
    // 0x10b424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b428: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x10B428u;
    SET_GPR_U32(ctx, 31, 0x10B430u);
    ctx->pc = 0x10B42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B428u;
    // 0x10b42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFE0u, 0x10B428u, 0x10B430u)) {
        return;
    }
    ctx->pc = 0x10B430u;
label_10b430:
    // 0x10b430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10b430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b434: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x10b434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x10b438: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10b438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b43c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10b43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b440: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10b440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b448: 0x3e00008  jr          $ra
    ctx->pc = 0x10B448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B448u;
        // 0x10b44c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B450u;
}
