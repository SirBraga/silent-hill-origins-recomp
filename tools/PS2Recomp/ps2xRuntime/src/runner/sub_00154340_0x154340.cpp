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

// Function: sub_00154340
// Address: 0x154340 - 0x154428
void sub_00154340_0x154340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154340_0x154340");
#endif

    switch (ctx->pc) {
        case 0x154390u: goto label_154390;
        case 0x154398u: goto label_154398;
        case 0x1543acu: goto label_1543ac;
        case 0x1543b4u: goto label_1543b4;
        case 0x1543c4u: goto label_1543c4;
        case 0x1543d4u: goto label_1543d4;
        case 0x1543e4u: goto label_1543e4;
        case 0x1543f4u: goto label_1543f4;
        case 0x154400u: goto label_154400;
        default: break;
    }

    ctx->pc = 0x154340u;

    // 0x154340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x154340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x154344: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x154344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x154348: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x154348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15434c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15434cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x154350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154354: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x154354u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x154358: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x154358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15435c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15435cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154360: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x154360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x154364: 0x244227d0  addiu       $v0, $v0, 0x27D0
    ctx->pc = 0x154364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10192));
    // 0x154368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15436c: 0x246327f0  addiu       $v1, $v1, 0x27F0
    ctx->pc = 0x15436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10224));
    // 0x154370: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x154370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x154374: 0x2610f050  addiu       $s0, $s0, -0xFB0
    ctx->pc = 0x154374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963280));
    // 0x154378: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x154378u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15437c: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x15437cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x154380: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x154380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x154384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154388: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x154388u;
    SET_GPR_U32(ctx, 31, 0x154390u);
    ctx->pc = 0x15438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154388u;
    // 0x15438c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x154388u, 0x154390u)) {
        return;
    }
    ctx->pc = 0x154390u;
label_154390:
    // 0x154390: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x154390u;
    SET_GPR_U32(ctx, 31, 0x154398u);
    ctx->pc = 0x154394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154390u;
    // 0x154394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x154390u, 0x154398u)) {
        return;
    }
    ctx->pc = 0x154398u;
label_154398:
    // 0x154398: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x154398u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x15439c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543a0: 0x2610f020  addiu       $s0, $s0, -0xFE0
    ctx->pc = 0x1543a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963232));
    // 0x1543a4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1543A4u;
    SET_GPR_U32(ctx, 31, 0x1543ACu);
    ctx->pc = 0x1543A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543A4u;
    // 0x1543a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1543A4u, 0x1543ACu)) {
        return;
    }
    ctx->pc = 0x1543ACu;
label_1543ac:
    // 0x1543ac: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1543ACu;
    SET_GPR_U32(ctx, 31, 0x1543B4u);
    ctx->pc = 0x1543B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543ACu;
    // 0x1543b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1543ACu, 0x1543B4u)) {
        return;
    }
    ctx->pc = 0x1543B4u;
label_1543b4:
    // 0x1543b4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1543b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1543b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1543b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543bc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1543BCu;
    SET_GPR_U32(ctx, 31, 0x1543C4u);
    ctx->pc = 0x1543C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543BCu;
    // 0x1543c0: 0x24a5fa18  addiu       $a1, $a1, -0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1543BCu, 0x1543C4u)) {
        return;
    }
    ctx->pc = 0x1543C4u;
label_1543c4:
    // 0x1543c4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1543c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1543c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1543c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543cc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1543CCu;
    SET_GPR_U32(ctx, 31, 0x1543D4u);
    ctx->pc = 0x1543D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543CCu;
    // 0x1543d0: 0x24a5fa20  addiu       $a1, $a1, -0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1543CCu, 0x1543D4u)) {
        return;
    }
    ctx->pc = 0x1543D4u;
label_1543d4:
    // 0x1543d4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1543d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1543d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1543d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543dc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1543DCu;
    SET_GPR_U32(ctx, 31, 0x1543E4u);
    ctx->pc = 0x1543E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543DCu;
    // 0x1543e0: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1543DCu, 0x1543E4u)) {
        return;
    }
    ctx->pc = 0x1543E4u;
label_1543e4:
    // 0x1543e4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1543e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1543e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1543e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543ec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1543ECu;
    SET_GPR_U32(ctx, 31, 0x1543F4u);
    ctx->pc = 0x1543F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543ECu;
    // 0x1543f0: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1543ECu, 0x1543F4u)) {
        return;
    }
    ctx->pc = 0x1543F4u;
label_1543f4:
    // 0x1543f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1543f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543f8: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1543F8u;
    SET_GPR_U32(ctx, 31, 0x154400u);
    ctx->pc = 0x1543FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543F8u;
    // 0x1543fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1543F8u, 0x154400u)) {
        return;
    }
    ctx->pc = 0x154400u;
label_154400:
    // 0x154400: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x154400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154404: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x154404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15440c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15440cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154414: 0x3e00008  jr          $ra
    ctx->pc = 0x154414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154414u;
        // 0x154418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15441Cu;
    // 0x15441c: 0x0  nop
    ctx->pc = 0x15441cu;
    // NOP
    // 0x154420: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x154420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x154424: 0x0  nop
    ctx->pc = 0x154424u;
    // NOP
    ctx->pc = 0x154428u;
}
