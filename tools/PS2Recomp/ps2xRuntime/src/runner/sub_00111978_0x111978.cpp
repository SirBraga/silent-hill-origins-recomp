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

// Function: sub_00111978
// Address: 0x111978 - 0x111a68
void sub_00111978_0x111978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111978_0x111978");
#endif

    switch (ctx->pc) {
        case 0x1119ccu: goto label_1119cc;
        case 0x1119dcu: goto label_1119dc;
        case 0x1119e8u: goto label_1119e8;
        case 0x1119f0u: goto label_1119f0;
        case 0x1119fcu: goto label_1119fc;
        case 0x111a04u: goto label_111a04;
        case 0x111a10u: goto label_111a10;
        case 0x111a1cu: goto label_111a1c;
        case 0x111a28u: goto label_111a28;
        case 0x111a34u: goto label_111a34;
        case 0x111a40u: goto label_111a40;
        default: break;
    }

    ctx->pc = 0x111978u;

    // 0x111978: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x111978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11197c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11197cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x111980: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x111980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x111984: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x111984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x111988: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x111988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x11198c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11198cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111990: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x111990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x111994: 0x2442a7f8  addiu       $v0, $v0, -0x5808
    ctx->pc = 0x111994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944760));
    // 0x111998: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x111998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x11199c: 0x2463a818  addiu       $v1, $v1, -0x57E8
    ctx->pc = 0x11199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944792));
    // 0x1119a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1119a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1119a4: 0x26120038  addiu       $s2, $s0, 0x38
    ctx->pc = 0x1119a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1119a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1119a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1119ac: 0x26140060  addiu       $s4, $s0, 0x60
    ctx->pc = 0x1119acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1119b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1119b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1119b4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1119b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119b8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1119b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1119bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1119bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119c0: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1119c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1119c4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1119C4u;
    SET_GPR_U32(ctx, 31, 0x1119CCu);
    ctx->pc = 0x1119C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119C4u;
    // 0x1119c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1119C4u, 0x1119CCu)) {
        return;
    }
    ctx->pc = 0x1119CCu;
label_1119cc:
    // 0x1119cc: 0x26130068  addiu       $s3, $s0, 0x68
    ctx->pc = 0x1119ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x1119d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1119d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119d4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1119D4u;
    SET_GPR_U32(ctx, 31, 0x1119DCu);
    ctx->pc = 0x1119D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119D4u;
    // 0x1119d8: 0x26110070  addiu       $s1, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1119D4u, 0x1119DCu)) {
        return;
    }
    ctx->pc = 0x1119DCu;
label_1119dc:
    // 0x1119dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1119dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119e0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1119E0u;
    SET_GPR_U32(ctx, 31, 0x1119E8u);
    ctx->pc = 0x1119E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119E0u;
    // 0x1119e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1119E0u, 0x1119E8u)) {
        return;
    }
    ctx->pc = 0x1119E8u;
label_1119e8:
    // 0x1119e8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1119E8u;
    SET_GPR_U32(ctx, 31, 0x1119F0u);
    ctx->pc = 0x1119ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119E8u;
    // 0x1119ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1119E8u, 0x1119F0u)) {
        return;
    }
    ctx->pc = 0x1119F0u;
label_1119f0:
    // 0x1119f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1119f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119f4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1119F4u;
    SET_GPR_U32(ctx, 31, 0x1119FCu);
    ctx->pc = 0x1119F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119F4u;
    // 0x1119f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1119F4u, 0x1119FCu)) {
        return;
    }
    ctx->pc = 0x1119FCu;
label_1119fc:
    // 0x1119fc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1119FCu;
    SET_GPR_U32(ctx, 31, 0x111A04u);
    ctx->pc = 0x111A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119FCu;
    // 0x111a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1119FCu, 0x111A04u)) {
        return;
    }
    ctx->pc = 0x111A04u;
label_111a04:
    // 0x111a04: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x111a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x111a08: 0xc04485a  jal         func_112168
    ctx->pc = 0x111A08u;
    SET_GPR_U32(ctx, 31, 0x111A10u);
    ctx->pc = 0x111A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A08u;
    // 0x111a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x112168u, 0x111A08u, 0x111A10u)) {
        return;
    }
    ctx->pc = 0x111A10u;
label_111a10:
    // 0x111a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a14: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111A14u;
    SET_GPR_U32(ctx, 31, 0x111A1Cu);
    ctx->pc = 0x111A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A14u;
    // 0x111a18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111A14u, 0x111A1Cu)) {
        return;
    }
    ctx->pc = 0x111A1Cu;
label_111a1c:
    // 0x111a1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x111a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a20: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111A20u;
    SET_GPR_U32(ctx, 31, 0x111A28u);
    ctx->pc = 0x111A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A20u;
    // 0x111a24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111A20u, 0x111A28u)) {
        return;
    }
    ctx->pc = 0x111A28u;
label_111a28:
    // 0x111a28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a2c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x111A2Cu;
    SET_GPR_U32(ctx, 31, 0x111A34u);
    ctx->pc = 0x111A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A2Cu;
    // 0x111a30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x111A2Cu, 0x111A34u)) {
        return;
    }
    ctx->pc = 0x111A34u;
label_111a34:
    // 0x111a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a38: 0xc04f084  jal         func_13C210
    ctx->pc = 0x111A38u;
    SET_GPR_U32(ctx, 31, 0x111A40u);
    ctx->pc = 0x111A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111A38u;
    // 0x111a3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x111A38u, 0x111A40u)) {
        return;
    }
    ctx->pc = 0x111A40u;
label_111a40:
    // 0x111a40: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x111a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111a44: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x111a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111a48: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x111a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111a4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111a4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111a50: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x111a50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111a54: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x111a54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x111A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A5Cu;
        // 0x111a60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111A64u;
    // 0x111a64: 0x0  nop
    ctx->pc = 0x111a64u;
    // NOP
    ctx->pc = 0x111a68u;
}
