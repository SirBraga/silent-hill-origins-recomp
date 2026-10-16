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

// Function: sub_00174D40
// Address: 0x174d40 - 0x174df0
void sub_00174D40_0x174d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174D40_0x174d40");
#endif

    switch (ctx->pc) {
        case 0x174d64u: goto label_174d64;
        case 0x174d6cu: goto label_174d6c;
        case 0x174da8u: goto label_174da8;
        case 0x174db8u: goto label_174db8;
        case 0x174dc8u: goto label_174dc8;
        case 0x174dd4u: goto label_174dd4;
        default: break;
    }

    ctx->pc = 0x174d40u;

    // 0x174d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174d44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x174d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x174d48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x174d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x174d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d50: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x174d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x174d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x174d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174d5c: 0xc05d80c  jal         func_176030
    ctx->pc = 0x174D5Cu;
    SET_GPR_U32(ctx, 31, 0x174D64u);
    ctx->pc = 0x174D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D5Cu;
    // 0x174d60: 0x2611005c  addiu       $s1, $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176030u, 0x174D5Cu, 0x174D64u)) {
        return;
    }
    ctx->pc = 0x174D64u;
label_174d64:
    // 0x174d64: 0xc043c50  jal         func_10F140
    ctx->pc = 0x174D64u;
    SET_GPR_U32(ctx, 31, 0x174D6Cu);
    ctx->pc = 0x174D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D64u;
    // 0x174d68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F140u, 0x174D64u, 0x174D6Cu)) {
        return;
    }
    ctx->pc = 0x174D6Cu;
label_174d6c:
    // 0x174d6c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x174d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x174d70: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x174d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x174d74: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x174d74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x174d78: 0x24635f50  addiu       $v1, $v1, 0x5F50
    ctx->pc = 0x174d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24400));
    // 0x174d7c: 0x24e75f88  addiu       $a3, $a3, 0x5F88
    ctx->pc = 0x174d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24456));
    // 0x174d80: 0x24425f68  addiu       $v0, $v0, 0x5F68
    ctx->pc = 0x174d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24424));
    // 0x174d84: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x174d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x174d88: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x174d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x174d8c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x174d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x174d90: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x174d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x174d94: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x174d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x174d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d9c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x174d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x174da0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x174DA0u;
    SET_GPR_U32(ctx, 31, 0x174DA8u);
    ctx->pc = 0x174DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DA0u;
    // 0x174da4: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x174DA0u, 0x174DA8u)) {
        return;
    }
    ctx->pc = 0x174DA8u;
label_174da8:
    // 0x174da8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x174da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x174dac: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x174dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x174db0: 0xc06ca28  jal         func_1B28A0
    ctx->pc = 0x174DB0u;
    SET_GPR_U32(ctx, 31, 0x174DB8u);
    ctx->pc = 0x174DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DB0u;
    // 0x174db4: 0x8c649168  lw          $a0, -0x6E98($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28A0u, 0x174DB0u, 0x174DB8u)) {
        return;
    }
    ctx->pc = 0x174DB8u;
label_174db8:
    // 0x174db8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x174db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x174dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dc0: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x174DC0u;
    SET_GPR_U32(ctx, 31, 0x174DC8u);
    ctx->pc = 0x174DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DC0u;
    // 0x174dc4: 0x24a55f18  addiu       $a1, $a1, 0x5F18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x174DC0u, 0x174DC8u)) {
        return;
    }
    ctx->pc = 0x174DC8u;
label_174dc8:
    // 0x174dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dcc: 0xc043c72  jal         func_10F1C8
    ctx->pc = 0x174DCCu;
    SET_GPR_U32(ctx, 31, 0x174DD4u);
    ctx->pc = 0x174DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DCCu;
    // 0x174dd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1C8u, 0x174DCCu, 0x174DD4u)) {
        return;
    }
    ctx->pc = 0x174DD4u;
label_174dd4:
    // 0x174dd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x174dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174ddc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x174ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174de0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x174de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174de8: 0x3e00008  jr          $ra
    ctx->pc = 0x174DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DE8u;
        // 0x174dec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174DF0u;
}
