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

// Function: sub_0010B450
// Address: 0x10b450 - 0x10b510
void sub_0010B450_0x10b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B450_0x10b450");
#endif

    switch (ctx->pc) {
        case 0x10b4a4u: goto label_10b4a4;
        case 0x10b4b0u: goto label_10b4b0;
        case 0x10b4b8u: goto label_10b4b8;
        case 0x10b4c0u: goto label_10b4c0;
        case 0x10b4c8u: goto label_10b4c8;
        case 0x10b4d4u: goto label_10b4d4;
        case 0x10b4e0u: goto label_10b4e0;
        case 0x10b4ecu: goto label_10b4ec;
        default: break;
    }

    ctx->pc = 0x10b450u;

    // 0x10b450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10b454: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10b454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10b458: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10b45c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x10b460: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10b464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b468: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x10b46c: 0x24429cc8  addiu       $v0, $v0, -0x6338
    ctx->pc = 0x10b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941896));
    // 0x10b470: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x10b470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x10b474: 0x24639ce8  addiu       $v1, $v1, -0x6318
    ctx->pc = 0x10b474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941928));
    // 0x10b478: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10b47c: 0x26130044  addiu       $s3, $s0, 0x44
    ctx->pc = 0x10b47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x10b480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b484: 0x26120038  addiu       $s2, $s0, 0x38
    ctx->pc = 0x10b484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x10b488: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10b488u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b48c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x10b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x10b490: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x10b490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x10b494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b498: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10b498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b49c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10B49Cu;
    SET_GPR_U32(ctx, 31, 0x10B4A4u);
    ctx->pc = 0x10B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B49Cu;
    // 0x10b4a0: 0x2611004c  addiu       $s1, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10B49Cu, 0x10B4A4u)) {
        return;
    }
    ctx->pc = 0x10B4A4u;
label_10b4a4:
    // 0x10b4a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4a8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10B4A8u;
    SET_GPR_U32(ctx, 31, 0x10B4B0u);
    ctx->pc = 0x10B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4A8u;
    // 0x10b4ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10B4A8u, 0x10B4B0u)) {
        return;
    }
    ctx->pc = 0x10B4B0u;
label_10b4b0:
    // 0x10b4b0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10B4B0u;
    SET_GPR_U32(ctx, 31, 0x10B4B8u);
    ctx->pc = 0x10B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4B0u;
    // 0x10b4b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10B4B0u, 0x10B4B8u)) {
        return;
    }
    ctx->pc = 0x10B4B8u;
label_10b4b8:
    // 0x10b4b8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10B4B8u;
    SET_GPR_U32(ctx, 31, 0x10B4C0u);
    ctx->pc = 0x10B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4B8u;
    // 0x10b4bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10B4B8u, 0x10B4C0u)) {
        return;
    }
    ctx->pc = 0x10B4C0u;
label_10b4c0:
    // 0x10b4c0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x10B4C0u;
    SET_GPR_U32(ctx, 31, 0x10B4C8u);
    ctx->pc = 0x10B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4C0u;
    // 0x10b4c4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x10B4C0u, 0x10B4C8u)) {
        return;
    }
    ctx->pc = 0x10B4C8u;
label_10b4c8:
    // 0x10b4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4cc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10B4CCu;
    SET_GPR_U32(ctx, 31, 0x10B4D4u);
    ctx->pc = 0x10B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4CCu;
    // 0x10b4d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10B4CCu, 0x10B4D4u)) {
        return;
    }
    ctx->pc = 0x10B4D4u;
label_10b4d4:
    // 0x10b4d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10b4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4d8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x10B4D8u;
    SET_GPR_U32(ctx, 31, 0x10B4E0u);
    ctx->pc = 0x10B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4D8u;
    // 0x10b4dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x10B4D8u, 0x10B4E0u)) {
        return;
    }
    ctx->pc = 0x10B4E0u;
label_10b4e0:
    // 0x10b4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4e4: 0xc04f084  jal         func_13C210
    ctx->pc = 0x10B4E4u;
    SET_GPR_U32(ctx, 31, 0x10B4ECu);
    ctx->pc = 0x10B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4E4u;
    // 0x10b4e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x10B4E4u, 0x10B4ECu)) {
        return;
    }
    ctx->pc = 0x10B4ECu;
label_10b4ec:
    // 0x10b4ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10b4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b4f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10b4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b4f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10b4f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b4f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x10b4f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b4fc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10b4fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b504: 0x3e00008  jr          $ra
    ctx->pc = 0x10B504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B504u;
        // 0x10b508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B50Cu;
    // 0x10b50c: 0x0  nop
    ctx->pc = 0x10b50cu;
    // NOP
    ctx->pc = 0x10b510u;
}
