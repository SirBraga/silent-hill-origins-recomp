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

// Function: sub_0013B090
// Address: 0x13b090 - 0x13b140
void sub_0013B090_0x13b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B090_0x13b090");
#endif

    switch (ctx->pc) {
        case 0x13b0a4u: goto label_13b0a4;
        default: break;
    }

    ctx->pc = 0x13b090u;

    // 0x13b090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b094: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13b098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b09c: 0xc049dc6  jal         func_127718
    ctx->pc = 0x13B09Cu;
    SET_GPR_U32(ctx, 31, 0x13B0A4u);
    ctx->pc = 0x13B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B09Cu;
    // 0x13b0a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127718u, 0x13B09Cu, 0x13B0A4u)) {
        return;
    }
    ctx->pc = 0x13B0A4u;
label_13b0a4:
    // 0x13b0a4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13b0a8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13b0ac: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13b0b0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13b0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13b0b4: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x13b0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x13b0b8: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x13b0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x13b0bc: 0x3c090069  lui         $t1, 0x69
    ctx->pc = 0x13b0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)105 << 16));
    // 0x13b0c0: 0x2463f048  addiu       $v1, $v1, -0xFB8
    ctx->pc = 0x13b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963272));
    // 0x13b0c4: 0x2484ef28  addiu       $a0, $a0, -0x10D8
    ctx->pc = 0x13b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962984));
    // 0x13b0c8: 0x24a5eee8  addiu       $a1, $a1, -0x1118
    ctx->pc = 0x13b0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
    // 0x13b0cc: 0x24c6eed0  addiu       $a2, $a2, -0x1130
    ctx->pc = 0x13b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962896));
    // 0x13b0d0: 0x24e7f068  addiu       $a3, $a3, -0xF98
    ctx->pc = 0x13b0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963304));
    // 0x13b0d4: 0x2508f328  addiu       $t0, $t0, -0xCD8
    ctx->pc = 0x13b0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964008));
    // 0x13b0d8: 0x2529ed90  addiu       $t1, $t1, -0x1270
    ctx->pc = 0x13b0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962576));
    // 0x13b0dc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x13b0dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b0e0: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x13b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x13b0e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0e8: 0xae040088  sw          $a0, 0x88($s0)
    ctx->pc = 0x13b0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 4));
    // 0x13b0ec: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x13b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
    // 0x13b0f0: 0xae060354  sw          $a2, 0x354($s0)
    ctx->pc = 0x13b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 6));
    // 0x13b0f4: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x13b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x13b0f8: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x13b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x13b0fc: 0xae092d90  sw          $t1, 0x2D90($s0)
    ctx->pc = 0x13b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11664), GPR_U32(ctx, 9));
    // 0x13b100: 0xae0a2d5c  sw          $t2, 0x2D5C($s0)
    ctx->pc = 0x13b100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11612), GPR_U32(ctx, 10));
    // 0x13b104: 0xae002d94  sw          $zero, 0x2D94($s0)
    ctx->pc = 0x13b104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11668), GPR_U32(ctx, 0));
    // 0x13b108: 0xae002d98  sw          $zero, 0x2D98($s0)
    ctx->pc = 0x13b108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11672), GPR_U32(ctx, 0));
    // 0x13b10c: 0xae002d9c  sw          $zero, 0x2D9C($s0)
    ctx->pc = 0x13b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11676), GPR_U32(ctx, 0));
    // 0x13b110: 0xae002da4  sw          $zero, 0x2DA4($s0)
    ctx->pc = 0x13b110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 0));
    // 0x13b114: 0xae002da8  sw          $zero, 0x2DA8($s0)
    ctx->pc = 0x13b114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11688), GPR_U32(ctx, 0));
    // 0x13b118: 0xae002dac  sw          $zero, 0x2DAC($s0)
    ctx->pc = 0x13b118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11692), GPR_U32(ctx, 0));
    // 0x13b11c: 0xae002db8  sw          $zero, 0x2DB8($s0)
    ctx->pc = 0x13b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11704), GPR_U32(ctx, 0));
    // 0x13b120: 0xae002db0  sw          $zero, 0x2DB0($s0)
    ctx->pc = 0x13b120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11696), GPR_U32(ctx, 0));
    // 0x13b124: 0xae002dc0  sw          $zero, 0x2DC0($s0)
    ctx->pc = 0x13b124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11712), GPR_U32(ctx, 0));
    // 0x13b128: 0xae002dbc  sw          $zero, 0x2DBC($s0)
    ctx->pc = 0x13b128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11708), GPR_U32(ctx, 0));
    // 0x13b12c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b134: 0x3e00008  jr          $ra
    ctx->pc = 0x13B134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B134u;
        // 0x13b138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B13Cu;
    // 0x13b13c: 0x0  nop
    ctx->pc = 0x13b13cu;
    // NOP
    ctx->pc = 0x13b140u;
}
