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

// Function: sub_0016F8A0
// Address: 0x16f8a0 - 0x16f958
void sub_0016F8A0_0x16f8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F8A0_0x16f8a0");
#endif

    switch (ctx->pc) {
        case 0x16f8f4u: goto label_16f8f4;
        case 0x16f8fcu: goto label_16f8fc;
        case 0x16f904u: goto label_16f904;
        case 0x16f914u: goto label_16f914;
        case 0x16f920u: goto label_16f920;
        case 0x16f92cu: goto label_16f92c;
        case 0x16f938u: goto label_16f938;
        default: break;
    }

    ctx->pc = 0x16f8a0u;

    // 0x16f8a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16f8a4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16f8a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x16f8ac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16f8b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16f8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16f8b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x16f8bc: 0x24425160  addiu       $v0, $v0, 0x5160
    ctx->pc = 0x16f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20832));
    // 0x16f8c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x16f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x16f8c4: 0x24635118  addiu       $v1, $v1, 0x5118
    ctx->pc = 0x16f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20760));
    // 0x16f8c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16f8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16f8cc: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x16f8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16f8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f8d4: 0x26130038  addiu       $s3, $s0, 0x38
    ctx->pc = 0x16f8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16f8d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16f8d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8dc: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x16f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x16f8e0: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x16f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x16f8e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16f8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8ec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F8ECu;
    SET_GPR_U32(ctx, 31, 0x16F8F4u);
    ctx->pc = 0x16F8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8ECu;
    // 0x16f8f0: 0x2612004c  addiu       $s2, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F8ECu, 0x16F8F4u)) {
        return;
    }
    ctx->pc = 0x16F8F4u;
label_16f8f4:
    // 0x16f8f4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16F8F4u;
    SET_GPR_U32(ctx, 31, 0x16F8FCu);
    ctx->pc = 0x16F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8F4u;
    // 0x16f8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16F8F4u, 0x16F8FCu)) {
        return;
    }
    ctx->pc = 0x16F8FCu;
label_16f8fc:
    // 0x16f8fc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16F8FCu;
    SET_GPR_U32(ctx, 31, 0x16F904u);
    ctx->pc = 0x16F900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8FCu;
    // 0x16f900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16F8FCu, 0x16F904u)) {
        return;
    }
    ctx->pc = 0x16F904u;
label_16f904:
    // 0x16f904: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16f904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16f908: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f90c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F90Cu;
    SET_GPR_U32(ctx, 31, 0x16F914u);
    ctx->pc = 0x16F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F90Cu;
    // 0x16f910: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F90Cu, 0x16F914u)) {
        return;
    }
    ctx->pc = 0x16F914u;
label_16f914:
    // 0x16f914: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f918: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16F918u;
    SET_GPR_U32(ctx, 31, 0x16F920u);
    ctx->pc = 0x16F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F918u;
    // 0x16f91c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16F918u, 0x16F920u)) {
        return;
    }
    ctx->pc = 0x16F920u;
label_16f920:
    // 0x16f920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f924: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16F924u;
    SET_GPR_U32(ctx, 31, 0x16F92Cu);
    ctx->pc = 0x16F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F924u;
    // 0x16f928: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16F924u, 0x16F92Cu)) {
        return;
    }
    ctx->pc = 0x16F92Cu;
label_16f92c:
    // 0x16f92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f930: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16F930u;
    SET_GPR_U32(ctx, 31, 0x16F938u);
    ctx->pc = 0x16F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F930u;
    // 0x16f934: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16F930u, 0x16F938u)) {
        return;
    }
    ctx->pc = 0x16F938u;
label_16f938:
    // 0x16f938: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16f938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f93c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16f93cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f940: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16f940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f944: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x16f944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f948: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x16f948u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f94c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f950: 0x3e00008  jr          $ra
    ctx->pc = 0x16F950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F950u;
        // 0x16f954: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F958u;
}
