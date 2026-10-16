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

// Function: sub_001FF3D0
// Address: 0x1ff3d0 - 0x1ff460
void sub_001FF3D0_0x1ff3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF3D0_0x1ff3d0");
#endif

    switch (ctx->pc) {
        case 0x1ff3fcu: goto label_1ff3fc;
        case 0x1ff404u: goto label_1ff404;
        case 0x1ff414u: goto label_1ff414;
        case 0x1ff438u: goto label_1ff438;
        default: break;
    }

    ctx->pc = 0x1ff3d0u;

    // 0x1ff3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ff3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ff3d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ff3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ff3d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ff3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ff3dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ff3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ff3e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ff3e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ff3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ff3ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ff3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff3f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff3f4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1FF3F4u;
    SET_GPR_U32(ctx, 31, 0x1FF3FCu);
    ctx->pc = 0x1FF3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3F4u;
    // 0x1ff3f8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1FF3F4u, 0x1FF3FCu)) {
        return;
    }
    ctx->pc = 0x1FF3FCu;
label_1ff3fc:
    // 0x1ff3fc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1FF3FCu;
    SET_GPR_U32(ctx, 31, 0x1FF404u);
    ctx->pc = 0x1FF400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF3FCu;
    // 0x1ff400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1FF3FCu, 0x1FF404u)) {
        return;
    }
    ctx->pc = 0x1FF404u;
label_1ff404:
    // 0x1ff404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff408: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ff408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff40c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1FF40Cu;
    SET_GPR_U32(ctx, 31, 0x1FF414u);
    ctx->pc = 0x1FF410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF40Cu;
    // 0x1ff410: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1FF40Cu, 0x1FF414u)) {
        return;
    }
    ctx->pc = 0x1FF414u;
label_1ff414:
    // 0x1ff414: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1ff414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1ff418: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ff418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ff41c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1ff41cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1ff420: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF420u;
    {
        const bool branch_taken_0x1ff420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF420u;
        // 0x1ff424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff420) {
            ctx->pc = 0x1FF438u;
            goto label_1ff438;
        }
    }
    ctx->pc = 0x1FF428u;
    // 0x1ff428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ff428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff42c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ff42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff430: 0xc07fb36  jal         func_1FECD8
    ctx->pc = 0x1FF430u;
    SET_GPR_U32(ctx, 31, 0x1FF438u);
    ctx->pc = 0x1FF434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF430u;
    // 0x1ff434: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FECD8u, 0x1FF430u, 0x1FF438u)) {
        return;
    }
    ctx->pc = 0x1FF438u;
label_1ff438:
    // 0x1ff438: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ff438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff43c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ff43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ff440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff444: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ff444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff44c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF44Cu;
        // 0x1ff450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF454u;
    // 0x1ff454: 0x0  nop
    ctx->pc = 0x1ff454u;
    // NOP
    // 0x1ff458: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1ff458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ff45c: 0x0  nop
    ctx->pc = 0x1ff45cu;
    // NOP
    ctx->pc = 0x1ff460u;
}
