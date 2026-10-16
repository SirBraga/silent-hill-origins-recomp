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

// Function: sub_0011D9D8
// Address: 0x11d9d8 - 0x11dad0
void sub_0011D9D8_0x11d9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D9D8_0x11d9d8");
#endif

    switch (ctx->pc) {
        case 0x11d9f4u: goto label_11d9f4;
        case 0x11da18u: goto label_11da18;
        case 0x11da20u: goto label_11da20;
        case 0x11da28u: goto label_11da28;
        case 0x11da58u: goto label_11da58;
        case 0x11da70u: goto label_11da70;
        case 0x11da88u: goto label_11da88;
        case 0x11daa0u: goto label_11daa0;
        case 0x11dab8u: goto label_11dab8;
        default: break;
    }

    ctx->pc = 0x11d9d8u;

    // 0x11d9d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d9dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11d9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d9e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11d9e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11d9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11d9e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d9ec: 0xc044624  jal         func_111890
    ctx->pc = 0x11D9ECu;
    SET_GPR_U32(ctx, 31, 0x11D9F4u);
    ctx->pc = 0x11D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9ECu;
    // 0x11d9f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111890u, 0x11D9ECu, 0x11D9F4u)) {
        return;
    }
    ctx->pc = 0x11D9F4u;
label_11d9f4:
    // 0x11d9f4: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x11d9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x11d9f8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11d9fc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11da00: 0x2442b548  addiu       $v0, $v0, -0x4AB8
    ctx->pc = 0x11da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948168));
    // 0x11da04: 0x2463b568  addiu       $v1, $v1, -0x4A98
    ctx->pc = 0x11da04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948200));
    // 0x11da08: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x11da08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x11da0c: 0x2604008c  addiu       $a0, $s0, 0x8C
    ctx->pc = 0x11da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x11da10: 0xc047a76  jal         func_11E9D8
    ctx->pc = 0x11DA10u;
    SET_GPR_U32(ctx, 31, 0x11DA18u);
    ctx->pc = 0x11DA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA10u;
    // 0x11da14: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11E9D8u, 0x11DA10u, 0x11DA18u)) {
        return;
    }
    ctx->pc = 0x11DA18u;
label_11da18:
    // 0x11da18: 0xc047a76  jal         func_11E9D8
    ctx->pc = 0x11DA18u;
    SET_GPR_U32(ctx, 31, 0x11DA20u);
    ctx->pc = 0x11DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA18u;
    // 0x11da1c: 0x260400a4  addiu       $a0, $s0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11E9D8u, 0x11DA18u, 0x11DA20u)) {
        return;
    }
    ctx->pc = 0x11DA20u;
label_11da20:
    // 0x11da20: 0xc047a76  jal         func_11E9D8
    ctx->pc = 0x11DA20u;
    SET_GPR_U32(ctx, 31, 0x11DA28u);
    ctx->pc = 0x11DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA20u;
    // 0x11da24: 0x260400bc  addiu       $a0, $s0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11E9D8u, 0x11DA20u, 0x11DA28u)) {
        return;
    }
    ctx->pc = 0x11DA28u;
label_11da28:
    // 0x11da28: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x11da28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x11da2c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11da30: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x11da30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x11da34: 0x24a544f0  addiu       $a1, $a1, 0x44F0
    ctx->pc = 0x11da34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17648));
    // 0x11da38: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x11da38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x11da3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11da3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da40: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x11da40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x11da44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11da44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da48: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x11da48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x11da4c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x11da4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11da50: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11DA50u;
    SET_GPR_U32(ctx, 31, 0x11DA58u);
    ctx->pc = 0x11DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA50u;
    // 0x11da54: 0xae000128  sw          $zero, 0x128($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11DA50u, 0x11DA58u)) {
        return;
    }
    ctx->pc = 0x11DA58u;
label_11da58:
    // 0x11da58: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11da58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11da5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11da5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da60: 0x24a544f8  addiu       $a1, $a1, 0x44F8
    ctx->pc = 0x11da60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17656));
    // 0x11da64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11da64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da68: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11DA68u;
    SET_GPR_U32(ctx, 31, 0x11DA70u);
    ctx->pc = 0x11DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA68u;
    // 0x11da6c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11DA68u, 0x11DA70u)) {
        return;
    }
    ctx->pc = 0x11DA70u;
label_11da70:
    // 0x11da70: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11da70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11da74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11da74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da78: 0x24a544e8  addiu       $a1, $a1, 0x44E8
    ctx->pc = 0x11da78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17640));
    // 0x11da7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11da7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da80: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11DA80u;
    SET_GPR_U32(ctx, 31, 0x11DA88u);
    ctx->pc = 0x11DA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA80u;
    // 0x11da84: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11DA80u, 0x11DA88u)) {
        return;
    }
    ctx->pc = 0x11DA88u;
label_11da88:
    // 0x11da88: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11da88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11da8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11da8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da90: 0x24a54500  addiu       $a1, $a1, 0x4500
    ctx->pc = 0x11da90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17664));
    // 0x11da94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11da94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da98: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11DA98u;
    SET_GPR_U32(ctx, 31, 0x11DAA0u);
    ctx->pc = 0x11DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA98u;
    // 0x11da9c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11DA98u, 0x11DAA0u)) {
        return;
    }
    ctx->pc = 0x11DAA0u;
label_11daa0:
    // 0x11daa0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x11daa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x11daa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11daa8: 0x24a54508  addiu       $a1, $a1, 0x4508
    ctx->pc = 0x11daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17672));
    // 0x11daac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11daacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dab0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x11DAB0u;
    SET_GPR_U32(ctx, 31, 0x11DAB8u);
    ctx->pc = 0x11DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAB0u;
    // 0x11dab4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x11DAB0u, 0x11DAB8u)) {
        return;
    }
    ctx->pc = 0x11DAB8u;
label_11dab8:
    // 0x11dab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11dab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dabc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11dabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dac0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11dac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dac8: 0x3e00008  jr          $ra
    ctx->pc = 0x11DAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAC8u;
        // 0x11dacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DAD0u;
}
