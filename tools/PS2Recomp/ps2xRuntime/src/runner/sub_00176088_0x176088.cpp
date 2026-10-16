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

// Function: sub_00176088
// Address: 0x176088 - 0x176148
void sub_00176088_0x176088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176088_0x176088");
#endif

    switch (ctx->pc) {
        case 0x1760d4u: goto label_1760d4;
        case 0x1760e4u: goto label_1760e4;
        case 0x1760ecu: goto label_1760ec;
        case 0x1760f4u: goto label_1760f4;
        case 0x176100u: goto label_176100;
        case 0x17610cu: goto label_17610c;
        case 0x176118u: goto label_176118;
        case 0x176124u: goto label_176124;
        default: break;
    }

    ctx->pc = 0x176088u;

    // 0x176088: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x176088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17608c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17608cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x176090: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x176090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x176094: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x176094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x176098: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x176098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17609c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17609cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1760a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1760a4: 0x244262b0  addiu       $v0, $v0, 0x62B0
    ctx->pc = 0x1760a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1760a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1760a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1760ac: 0x246362d0  addiu       $v1, $v1, 0x62D0
    ctx->pc = 0x1760acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25296));
    // 0x1760b0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1760b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1760b4: 0x26120044  addiu       $s2, $s0, 0x44
    ctx->pc = 0x1760b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1760b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1760b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1760bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1760bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760c0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1760c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1760c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1760c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760c8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1760c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1760cc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1760CCu;
    SET_GPR_U32(ctx, 31, 0x1760D4u);
    ctx->pc = 0x1760D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760CCu;
    // 0x1760d0: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1760CCu, 0x1760D4u)) {
        return;
    }
    ctx->pc = 0x1760D4u;
label_1760d4:
    // 0x1760d4: 0x2613004c  addiu       $s3, $s0, 0x4C
    ctx->pc = 0x1760d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1760d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1760d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760dc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1760DCu;
    SET_GPR_U32(ctx, 31, 0x1760E4u);
    ctx->pc = 0x1760E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760DCu;
    // 0x1760e0: 0x26110054  addiu       $s1, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1760DCu, 0x1760E4u)) {
        return;
    }
    ctx->pc = 0x1760E4u;
label_1760e4:
    // 0x1760e4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1760E4u;
    SET_GPR_U32(ctx, 31, 0x1760ECu);
    ctx->pc = 0x1760E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760E4u;
    // 0x1760e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1760E4u, 0x1760ECu)) {
        return;
    }
    ctx->pc = 0x1760ECu;
label_1760ec:
    // 0x1760ec: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1760ECu;
    SET_GPR_U32(ctx, 31, 0x1760F4u);
    ctx->pc = 0x1760F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760ECu;
    // 0x1760f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1760ECu, 0x1760F4u)) {
        return;
    }
    ctx->pc = 0x1760F4u;
label_1760f4:
    // 0x1760f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1760f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760f8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1760F8u;
    SET_GPR_U32(ctx, 31, 0x176100u);
    ctx->pc = 0x1760FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760F8u;
    // 0x1760fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1760F8u, 0x176100u)) {
        return;
    }
    ctx->pc = 0x176100u;
label_176100:
    // 0x176100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x176100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176104: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x176104u;
    SET_GPR_U32(ctx, 31, 0x17610Cu);
    ctx->pc = 0x176108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176104u;
    // 0x176108: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x176104u, 0x17610Cu)) {
        return;
    }
    ctx->pc = 0x17610Cu;
label_17610c:
    // 0x17610c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176110: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x176110u;
    SET_GPR_U32(ctx, 31, 0x176118u);
    ctx->pc = 0x176114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176110u;
    // 0x176114: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x176110u, 0x176118u)) {
        return;
    }
    ctx->pc = 0x176118u;
label_176118:
    // 0x176118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17611c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x17611Cu;
    SET_GPR_U32(ctx, 31, 0x176124u);
    ctx->pc = 0x176120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17611Cu;
    // 0x176120: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x17611Cu, 0x176124u)) {
        return;
    }
    ctx->pc = 0x176124u;
label_176124:
    // 0x176124: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x176124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176128: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x176128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17612c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17612cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176130: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x176130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176134: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x176134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17613c: 0x3e00008  jr          $ra
    ctx->pc = 0x17613Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17613Cu;
        // 0x176140: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17613Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176144u;
    // 0x176144: 0x0  nop
    ctx->pc = 0x176144u;
    // NOP
    ctx->pc = 0x176148u;
}
