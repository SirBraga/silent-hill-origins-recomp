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

// Function: sub_0016B3B0
// Address: 0x16b3b0 - 0x16b478
void sub_0016B3B0_0x16b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B3B0_0x16b3b0");
#endif

    switch (ctx->pc) {
        case 0x16b404u: goto label_16b404;
        case 0x16b40cu: goto label_16b40c;
        case 0x16b414u: goto label_16b414;
        case 0x16b424u: goto label_16b424;
        case 0x16b434u: goto label_16b434;
        case 0x16b440u: goto label_16b440;
        case 0x16b44cu: goto label_16b44c;
        case 0x16b458u: goto label_16b458;
        default: break;
    }

    ctx->pc = 0x16b3b0u;

    // 0x16b3b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16b3b4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16b3b8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16b3bc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16b3c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x16b3c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16b3cc: 0x24424760  addiu       $v0, $v0, 0x4760
    ctx->pc = 0x16b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18272));
    // 0x16b3d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x16b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x16b3d4: 0x24634718  addiu       $v1, $v1, 0x4718
    ctx->pc = 0x16b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18200));
    // 0x16b3d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16b3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x16b3dc: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x16b3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16b3e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b3e4: 0x26320044  addiu       $s2, $s1, 0x44
    ctx->pc = 0x16b3e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16b3e8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16b3e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3ec: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x16b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x16b3f0: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x16b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x16b3f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3fc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16B3FCu;
    SET_GPR_U32(ctx, 31, 0x16B404u);
    ctx->pc = 0x16B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3FCu;
    // 0x16b400: 0x2633004c  addiu       $s3, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16B3FCu, 0x16B404u)) {
        return;
    }
    ctx->pc = 0x16B404u;
label_16b404:
    // 0x16b404: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16B404u;
    SET_GPR_U32(ctx, 31, 0x16B40Cu);
    ctx->pc = 0x16B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B404u;
    // 0x16b408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16B404u, 0x16B40Cu)) {
        return;
    }
    ctx->pc = 0x16B40Cu;
label_16b40c:
    // 0x16b40c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16B40Cu;
    SET_GPR_U32(ctx, 31, 0x16B414u);
    ctx->pc = 0x16B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B40Cu;
    // 0x16b410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16B40Cu, 0x16B414u)) {
        return;
    }
    ctx->pc = 0x16B414u;
label_16b414:
    // 0x16b414: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16b414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16b418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b41c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16B41Cu;
    SET_GPR_U32(ctx, 31, 0x16B424u);
    ctx->pc = 0x16B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B41Cu;
    // 0x16b420: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16B41Cu, 0x16B424u)) {
        return;
    }
    ctx->pc = 0x16B424u;
label_16b424:
    // 0x16b424: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16b424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16b428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b42c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16B42Cu;
    SET_GPR_U32(ctx, 31, 0x16B434u);
    ctx->pc = 0x16B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B42Cu;
    // 0x16b430: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16B42Cu, 0x16B434u)) {
        return;
    }
    ctx->pc = 0x16B434u;
label_16b434:
    // 0x16b434: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16b434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b438: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16B438u;
    SET_GPR_U32(ctx, 31, 0x16B440u);
    ctx->pc = 0x16B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B438u;
    // 0x16b43c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16B438u, 0x16B440u)) {
        return;
    }
    ctx->pc = 0x16B440u;
label_16b440:
    // 0x16b440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b444: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16B444u;
    SET_GPR_U32(ctx, 31, 0x16B44Cu);
    ctx->pc = 0x16B448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B444u;
    // 0x16b448: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16B444u, 0x16B44Cu)) {
        return;
    }
    ctx->pc = 0x16B44Cu;
label_16b44c:
    // 0x16b44c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b450: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16B450u;
    SET_GPR_U32(ctx, 31, 0x16B458u);
    ctx->pc = 0x16B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B450u;
    // 0x16b454: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16B450u, 0x16B458u)) {
        return;
    }
    ctx->pc = 0x16B458u;
label_16b458:
    // 0x16b458: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16b458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b45c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16b45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b460: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16b460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b464: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x16b464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b468: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x16b468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b470: 0x3e00008  jr          $ra
    ctx->pc = 0x16B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B470u;
        // 0x16b474: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B478u;
}
