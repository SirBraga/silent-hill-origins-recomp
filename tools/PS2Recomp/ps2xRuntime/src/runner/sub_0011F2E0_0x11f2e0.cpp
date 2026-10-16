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

// Function: sub_0011F2E0
// Address: 0x11f2e0 - 0x11f368
void sub_0011F2E0_0x11f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F2E0_0x11f2e0");
#endif

    switch (ctx->pc) {
        case 0x11f2f4u: goto label_11f2f4;
        default: break;
    }

    ctx->pc = 0x11f2e0u;

    // 0x11f2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11f2e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11f2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f2ec: 0xc049dc6  jal         func_127718
    ctx->pc = 0x11F2ECu;
    SET_GPR_U32(ctx, 31, 0x11F2F4u);
    ctx->pc = 0x11F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F2ECu;
    // 0x11f2f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127718u, 0x11F2ECu, 0x11F2F4u)) {
        return;
    }
    ctx->pc = 0x11F2F4u;
label_11f2f4:
    // 0x11f2f4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11f2f8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x11f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11f2fc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x11f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11f300: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11f300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11f304: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x11f304u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x11f308: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x11f308u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x11f30c: 0x2463b7f8  addiu       $v1, $v1, -0x4808
    ctx->pc = 0x11f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948856));
    // 0x11f310: 0x2484b6d8  addiu       $a0, $a0, -0x4928
    ctx->pc = 0x11f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948568));
    // 0x11f314: 0x24a5b698  addiu       $a1, $a1, -0x4968
    ctx->pc = 0x11f314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948504));
    // 0x11f318: 0x24c6b680  addiu       $a2, $a2, -0x4980
    ctx->pc = 0x11f318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948480));
    // 0x11f31c: 0x24e7b818  addiu       $a3, $a3, -0x47E8
    ctx->pc = 0x11f31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948888));
    // 0x11f320: 0x2508bad8  addiu       $t0, $t0, -0x4528
    ctx->pc = 0x11f320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949592));
    // 0x11f324: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x11f324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x11f328: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11f328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f32c: 0xae040088  sw          $a0, 0x88($s0)
    ctx->pc = 0x11f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 4));
    // 0x11f330: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x11f330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
    // 0x11f334: 0xae060354  sw          $a2, 0x354($s0)
    ctx->pc = 0x11f334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 6));
    // 0x11f338: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x11f338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x11f33c: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x11f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x11f340: 0xae002d9c  sw          $zero, 0x2D9C($s0)
    ctx->pc = 0x11f340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11676), GPR_U32(ctx, 0));
    // 0x11f344: 0xae002da0  sw          $zero, 0x2DA0($s0)
    ctx->pc = 0x11f344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11680), GPR_U32(ctx, 0));
    // 0x11f348: 0xae002da4  sw          $zero, 0x2DA4($s0)
    ctx->pc = 0x11f348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11684), GPR_U32(ctx, 0));
    // 0x11f34c: 0xae002d90  sw          $zero, 0x2D90($s0)
    ctx->pc = 0x11f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11664), GPR_U32(ctx, 0));
    // 0x11f350: 0xae002d94  sw          $zero, 0x2D94($s0)
    ctx->pc = 0x11f350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11668), GPR_U32(ctx, 0));
    // 0x11f354: 0xae002dac  sw          $zero, 0x2DAC($s0)
    ctx->pc = 0x11f354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11692), GPR_U32(ctx, 0));
    // 0x11f358: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11f358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f35c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f360: 0x3e00008  jr          $ra
    ctx->pc = 0x11F360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F360u;
        // 0x11f364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F368u;
}
