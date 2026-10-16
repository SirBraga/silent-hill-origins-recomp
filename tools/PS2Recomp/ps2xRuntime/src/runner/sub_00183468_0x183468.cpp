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

// Function: sub_00183468
// Address: 0x183468 - 0x183530
void sub_00183468_0x183468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183468_0x183468");
#endif

    switch (ctx->pc) {
        case 0x1834bcu: goto label_1834bc;
        case 0x1834c4u: goto label_1834c4;
        case 0x1834d0u: goto label_1834d0;
        case 0x1834d8u: goto label_1834d8;
        case 0x1834e8u: goto label_1834e8;
        case 0x1834f4u: goto label_1834f4;
        case 0x183500u: goto label_183500;
        case 0x18350cu: goto label_18350c;
        default: break;
    }

    ctx->pc = 0x183468u;

    // 0x183468: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x183468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18346c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x18346cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x183470: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x183470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x183474: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x183474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x183478: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x183478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18347c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18347cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183480: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x183480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x183484: 0x24427ea8  addiu       $v0, $v0, 0x7EA8
    ctx->pc = 0x183484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32424));
    // 0x183488: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x183488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18348c: 0x24637ec8  addiu       $v1, $v1, 0x7EC8
    ctx->pc = 0x18348cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32456));
    // 0x183490: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x183490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x183494: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x183494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x183498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18349c: 0x26530044  addiu       $s3, $s2, 0x44
    ctx->pc = 0x18349cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x1834a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1834a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834a4: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x1834a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x1834a8: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x1834a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x1834ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1834acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1834b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834b4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1834B4u;
    SET_GPR_U32(ctx, 31, 0x1834BCu);
    ctx->pc = 0x1834B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834B4u;
    // 0x1834b8: 0x2650004c  addiu       $s0, $s2, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1834B4u, 0x1834BCu)) {
        return;
    }
    ctx->pc = 0x1834BCu;
label_1834bc:
    // 0x1834bc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1834BCu;
    SET_GPR_U32(ctx, 31, 0x1834C4u);
    ctx->pc = 0x1834C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834BCu;
    // 0x1834c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1834BCu, 0x1834C4u)) {
        return;
    }
    ctx->pc = 0x1834C4u;
label_1834c4:
    // 0x1834c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1834c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834c8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1834C8u;
    SET_GPR_U32(ctx, 31, 0x1834D0u);
    ctx->pc = 0x1834CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834C8u;
    // 0x1834cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1834C8u, 0x1834D0u)) {
        return;
    }
    ctx->pc = 0x1834D0u;
label_1834d0:
    // 0x1834d0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1834D0u;
    SET_GPR_U32(ctx, 31, 0x1834D8u);
    ctx->pc = 0x1834D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834D0u;
    // 0x1834d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1834D0u, 0x1834D8u)) {
        return;
    }
    ctx->pc = 0x1834D8u;
label_1834d8:
    // 0x1834d8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1834d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1834dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1834dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834e0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1834E0u;
    SET_GPR_U32(ctx, 31, 0x1834E8u);
    ctx->pc = 0x1834E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834E0u;
    // 0x1834e4: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1834E0u, 0x1834E8u)) {
        return;
    }
    ctx->pc = 0x1834E8u;
label_1834e8:
    // 0x1834e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1834e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834ec: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1834ECu;
    SET_GPR_U32(ctx, 31, 0x1834F4u);
    ctx->pc = 0x1834F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834ECu;
    // 0x1834f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1834ECu, 0x1834F4u)) {
        return;
    }
    ctx->pc = 0x1834F4u;
label_1834f4:
    // 0x1834f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1834f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1834f8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1834F8u;
    SET_GPR_U32(ctx, 31, 0x183500u);
    ctx->pc = 0x1834FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1834F8u;
    // 0x1834fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1834F8u, 0x183500u)) {
        return;
    }
    ctx->pc = 0x183500u;
label_183500:
    // 0x183500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183504: 0xc04f084  jal         func_13C210
    ctx->pc = 0x183504u;
    SET_GPR_U32(ctx, 31, 0x18350Cu);
    ctx->pc = 0x183508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183504u;
    // 0x183508: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x183504u, 0x18350Cu)) {
        return;
    }
    ctx->pc = 0x18350Cu;
label_18350c:
    // 0x18350c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18350cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183510: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x183510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183514: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x183514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183518: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x183518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18351c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18351cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183524: 0x3e00008  jr          $ra
    ctx->pc = 0x183524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183524u;
        // 0x183528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18352Cu;
    // 0x18352c: 0x0  nop
    ctx->pc = 0x18352cu;
    // NOP
    ctx->pc = 0x183530u;
}
