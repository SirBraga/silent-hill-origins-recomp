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

// Function: sub_0011C968
// Address: 0x11c968 - 0x11ca50
void sub_0011C968_0x11c968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C968_0x11c968");
#endif

    switch (ctx->pc) {
        case 0x11c9c0u: goto label_11c9c0;
        case 0x11c9d4u: goto label_11c9d4;
        case 0x11c9e0u: goto label_11c9e0;
        case 0x11c9e8u: goto label_11c9e8;
        case 0x11c9f0u: goto label_11c9f0;
        case 0x11c9fcu: goto label_11c9fc;
        case 0x11ca08u: goto label_11ca08;
        case 0x11ca14u: goto label_11ca14;
        case 0x11ca20u: goto label_11ca20;
        case 0x11ca2cu: goto label_11ca2c;
        default: break;
    }

    ctx->pc = 0x11c968u;

    // 0x11c968: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11c968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11c96c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11c970: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x11c970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x11c974: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11c974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11c978: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x11c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x11c97c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11c97cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c980: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x11c980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x11c984: 0x2442b2d0  addiu       $v0, $v0, -0x4D30
    ctx->pc = 0x11c984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947536));
    // 0x11c988: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x11c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x11c98c: 0x2463b2f0  addiu       $v1, $v1, -0x4D10
    ctx->pc = 0x11c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947568));
    // 0x11c990: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x11c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x11c994: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11c994u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c998: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11c998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11c99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c9a0: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x11c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x11c9a4: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x11c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x11c9a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C9A8u;
    {
        const bool branch_taken_0x11c9a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9A8u;
        // 0x11c9ac: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9a8) {
            ctx->pc = 0x11C9C0u;
            goto label_11c9c0;
        }
    }
    ctx->pc = 0x11C9B0u;
    // 0x11c9b0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x11c9b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11c9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9b8: 0xc044f16  jal         func_113C58
    ctx->pc = 0x11C9B8u;
    SET_GPR_U32(ctx, 31, 0x11C9C0u);
    ctx->pc = 0x11C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9B8u;
    // 0x11c9bc: 0x8c44830c  lw          $a0, -0x7CF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113C58u, 0x11C9B8u, 0x11C9C0u)) {
        return;
    }
    ctx->pc = 0x11C9C0u;
label_11c9c0:
    // 0x11c9c0: 0x269300d0  addiu       $s3, $s4, 0xD0
    ctx->pc = 0x11c9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    // 0x11c9c4: 0x269200d8  addiu       $s2, $s4, 0xD8
    ctx->pc = 0x11c9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 216));
    // 0x11c9c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9cc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11C9CCu;
    SET_GPR_U32(ctx, 31, 0x11C9D4u);
    ctx->pc = 0x11C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9CCu;
    // 0x11c9d0: 0x269100e0  addiu       $s1, $s4, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11C9CCu, 0x11C9D4u)) {
        return;
    }
    ctx->pc = 0x11C9D4u;
label_11c9d4:
    // 0x11c9d4: 0x269000e8  addiu       $s0, $s4, 0xE8
    ctx->pc = 0x11c9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 232));
    // 0x11c9d8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11C9D8u;
    SET_GPR_U32(ctx, 31, 0x11C9E0u);
    ctx->pc = 0x11C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9D8u;
    // 0x11c9dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11C9D8u, 0x11C9E0u)) {
        return;
    }
    ctx->pc = 0x11C9E0u;
label_11c9e0:
    // 0x11c9e0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11C9E0u;
    SET_GPR_U32(ctx, 31, 0x11C9E8u);
    ctx->pc = 0x11C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9E0u;
    // 0x11c9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11C9E0u, 0x11C9E8u)) {
        return;
    }
    ctx->pc = 0x11C9E8u;
label_11c9e8:
    // 0x11c9e8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11C9E8u;
    SET_GPR_U32(ctx, 31, 0x11C9F0u);
    ctx->pc = 0x11C9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9E8u;
    // 0x11c9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11C9E8u, 0x11C9F0u)) {
        return;
    }
    ctx->pc = 0x11C9F0u;
label_11c9f0:
    // 0x11c9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9f4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x11C9F4u;
    SET_GPR_U32(ctx, 31, 0x11C9FCu);
    ctx->pc = 0x11C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9F4u;
    // 0x11c9f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x11C9F4u, 0x11C9FCu)) {
        return;
    }
    ctx->pc = 0x11C9FCu;
label_11c9fc:
    // 0x11c9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca00: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x11CA00u;
    SET_GPR_U32(ctx, 31, 0x11CA08u);
    ctx->pc = 0x11CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA00u;
    // 0x11ca04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x11CA00u, 0x11CA08u)) {
        return;
    }
    ctx->pc = 0x11CA08u;
label_11ca08:
    // 0x11ca08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ca08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca0c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x11CA0Cu;
    SET_GPR_U32(ctx, 31, 0x11CA14u);
    ctx->pc = 0x11CA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA0Cu;
    // 0x11ca10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x11CA0Cu, 0x11CA14u)) {
        return;
    }
    ctx->pc = 0x11CA14u;
label_11ca14:
    // 0x11ca14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca18: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x11CA18u;
    SET_GPR_U32(ctx, 31, 0x11CA20u);
    ctx->pc = 0x11CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA18u;
    // 0x11ca1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x11CA18u, 0x11CA20u)) {
        return;
    }
    ctx->pc = 0x11CA20u;
label_11ca20:
    // 0x11ca20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11ca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca24: 0xc04465e  jal         func_111978
    ctx->pc = 0x11CA24u;
    SET_GPR_U32(ctx, 31, 0x11CA2Cu);
    ctx->pc = 0x11CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA24u;
    // 0x11ca28: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111978u, 0x11CA24u, 0x11CA2Cu)) {
        return;
    }
    ctx->pc = 0x11CA2Cu;
label_11ca2c:
    // 0x11ca2c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x11ca2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ca30: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11ca30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ca34: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x11ca34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ca38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11ca38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ca3c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x11ca3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ca40: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x11ca40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ca44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ca48: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA48u;
        // 0x11ca4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CA50u;
}
