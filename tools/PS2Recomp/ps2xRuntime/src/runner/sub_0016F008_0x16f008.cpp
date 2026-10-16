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

// Function: sub_0016F008
// Address: 0x16f008 - 0x16f0d0
void sub_0016F008_0x16f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F008_0x16f008");
#endif

    switch (ctx->pc) {
        case 0x16f05cu: goto label_16f05c;
        case 0x16f064u: goto label_16f064;
        case 0x16f070u: goto label_16f070;
        case 0x16f078u: goto label_16f078;
        case 0x16f088u: goto label_16f088;
        case 0x16f094u: goto label_16f094;
        case 0x16f0a0u: goto label_16f0a0;
        case 0x16f0acu: goto label_16f0ac;
        default: break;
    }

    ctx->pc = 0x16f008u;

    // 0x16f008: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16f00c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16f010: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16f010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x16f014: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16f014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16f018: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16f01c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16f01cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f020: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16f020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x16f024: 0x24425068  addiu       $v0, $v0, 0x5068
    ctx->pc = 0x16f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20584));
    // 0x16f028: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x16f028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x16f02c: 0x24635020  addiu       $v1, $v1, 0x5020
    ctx->pc = 0x16f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20512));
    // 0x16f030: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16f030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x16f034: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x16f034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x16f038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f03c: 0x26530044  addiu       $s3, $s2, 0x44
    ctx->pc = 0x16f03cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x16f040: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16f040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f044: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x16f044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x16f048: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x16f048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x16f04c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16f04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f054: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F054u;
    SET_GPR_U32(ctx, 31, 0x16F05Cu);
    ctx->pc = 0x16F058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F054u;
    // 0x16f058: 0x2650004c  addiu       $s0, $s2, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F054u, 0x16F05Cu)) {
        return;
    }
    ctx->pc = 0x16F05Cu;
label_16f05c:
    // 0x16f05c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16F05Cu;
    SET_GPR_U32(ctx, 31, 0x16F064u);
    ctx->pc = 0x16F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F05Cu;
    // 0x16f060: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16F05Cu, 0x16F064u)) {
        return;
    }
    ctx->pc = 0x16F064u;
label_16f064:
    // 0x16f064: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f068: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F068u;
    SET_GPR_U32(ctx, 31, 0x16F070u);
    ctx->pc = 0x16F06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F068u;
    // 0x16f06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F068u, 0x16F070u)) {
        return;
    }
    ctx->pc = 0x16F070u;
label_16f070:
    // 0x16f070: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16F070u;
    SET_GPR_U32(ctx, 31, 0x16F078u);
    ctx->pc = 0x16F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F070u;
    // 0x16f074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16F070u, 0x16F078u)) {
        return;
    }
    ctx->pc = 0x16F078u;
label_16f078:
    // 0x16f078: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16f078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16f07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f080: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16F080u;
    SET_GPR_U32(ctx, 31, 0x16F088u);
    ctx->pc = 0x16F084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F080u;
    // 0x16f084: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16F080u, 0x16F088u)) {
        return;
    }
    ctx->pc = 0x16F088u;
label_16f088:
    // 0x16f088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f08c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16F08Cu;
    SET_GPR_U32(ctx, 31, 0x16F094u);
    ctx->pc = 0x16F090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F08Cu;
    // 0x16f090: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16F08Cu, 0x16F094u)) {
        return;
    }
    ctx->pc = 0x16F094u;
label_16f094:
    // 0x16f094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f098: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16F098u;
    SET_GPR_U32(ctx, 31, 0x16F0A0u);
    ctx->pc = 0x16F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F098u;
    // 0x16f09c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16F098u, 0x16F0A0u)) {
        return;
    }
    ctx->pc = 0x16F0A0u;
label_16f0a0:
    // 0x16f0a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f0a4: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16F0A4u;
    SET_GPR_U32(ctx, 31, 0x16F0ACu);
    ctx->pc = 0x16F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F0A4u;
    // 0x16f0a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16F0A4u, 0x16F0ACu)) {
        return;
    }
    ctx->pc = 0x16F0ACu;
label_16f0ac:
    // 0x16f0ac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16f0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f0b0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16f0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f0b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16f0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f0b8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x16f0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f0bc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x16f0bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x16F0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0C4u;
        // 0x16f0c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F0CCu;
    // 0x16f0cc: 0x0  nop
    ctx->pc = 0x16f0ccu;
    // NOP
    ctx->pc = 0x16f0d0u;
}
