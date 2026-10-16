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

// Function: sub_0011F368
// Address: 0x11f368 - 0x11f420
void sub_0011F368_0x11f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F368_0x11f368");
#endif

    switch (ctx->pc) {
        case 0x11f3e8u: goto label_11f3e8;
        case 0x11f3fcu: goto label_11f3fc;
        case 0x11f40cu: goto label_11f40c;
        default: break;
    }

    ctx->pc = 0x11f368u;

    // 0x11f368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11f368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11f36c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11f370: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11f370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11f374: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11f374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11f378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11f37c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11f37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f384: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x11f384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11f388: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11f388u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11f38c: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x11f38cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x11f390: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x11f390u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x11f394: 0x2442b7f8  addiu       $v0, $v0, -0x4808
    ctx->pc = 0x11f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948856));
    // 0x11f398: 0x2463b6d8  addiu       $v1, $v1, -0x4928
    ctx->pc = 0x11f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948568));
    // 0x11f39c: 0x2484b698  addiu       $a0, $a0, -0x4968
    ctx->pc = 0x11f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948504));
    // 0x11f3a0: 0x24c6b680  addiu       $a2, $a2, -0x4980
    ctx->pc = 0x11f3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948480));
    // 0x11f3a4: 0x24e7b818  addiu       $a3, $a3, -0x47E8
    ctx->pc = 0x11f3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948888));
    // 0x11f3a8: 0x2508bad8  addiu       $t0, $t0, -0x4528
    ctx->pc = 0x11f3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949592));
    // 0x11f3ac: 0x8e092dac  lw          $t1, 0x2DAC($s0)
    ctx->pc = 0x11f3acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11692)));
    // 0x11f3b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11f3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3b4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x11f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x11f3b8: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x11f3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x11f3bc: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x11f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x11f3c0: 0xae060354  sw          $a2, 0x354($s0)
    ctx->pc = 0x11f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 6));
    // 0x11f3c4: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x11f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x11f3c8: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x11F3C8u;
    {
        const bool branch_taken_0x11f3c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3C8u;
        // 0x11f3cc: 0xae080030  sw          $t0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3c8) {
            ctx->pc = 0x11F400u;
            goto label_11f400;
        }
    }
    ctx->pc = 0x11F3D0u;
    // 0x11f3d0: 0x8e022db0  lw          $v0, 0x2DB0($s0)
    ctx->pc = 0x11f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11696)));
    // 0x11f3d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F3D4u;
    {
        const bool branch_taken_0x11f3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3D4u;
        // 0x11f3d8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3d4) {
            ctx->pc = 0x11F3F0u;
            goto label_11f3f0;
        }
    }
    ctx->pc = 0x11F3DCu;
    // 0x11f3dc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x11f3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3e0: 0xc059092  jal         func_164248
    ctx->pc = 0x11F3E0u;
    SET_GPR_U32(ctx, 31, 0x11F3E8u);
    ctx->pc = 0x11F3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3E0u;
    // 0x11f3e4: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x11F3E0u, 0x11F3E8u)) {
        return;
    }
    ctx->pc = 0x11F3E8u;
label_11f3e8:
    // 0x11f3e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11F3E8u;
    {
        const bool branch_taken_0x11f3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3E8u;
        // 0x11f3ec: 0xae002dac  sw          $zero, 0x2DAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3e8) {
            ctx->pc = 0x11F400u;
            goto label_11f400;
        }
    }
    ctx->pc = 0x11F3F0u;
label_11f3f0:
    // 0x11f3f0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x11f3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3f4: 0xc0596be  jal         func_165AF8
    ctx->pc = 0x11F3F4u;
    SET_GPR_U32(ctx, 31, 0x11F3FCu);
    ctx->pc = 0x11F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3F4u;
    // 0x11f3f8: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AF8u, 0x11F3F4u, 0x11F3FCu)) {
        return;
    }
    ctx->pc = 0x11F3FCu;
label_11f3fc:
    // 0x11f3fc: 0xae002dac  sw          $zero, 0x2DAC($s0)
    ctx->pc = 0x11f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11692), GPR_U32(ctx, 0));
label_11f400:
    // 0x11f400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f404: 0xc049f60  jal         func_127D80
    ctx->pc = 0x11F404u;
    SET_GPR_U32(ctx, 31, 0x11F40Cu);
    ctx->pc = 0x11F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F404u;
    // 0x11f408: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127D80u, 0x11F404u, 0x11F40Cu)) {
        return;
    }
    ctx->pc = 0x11F40Cu;
label_11f40c:
    // 0x11f40c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11f40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11f410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f418: 0x3e00008  jr          $ra
    ctx->pc = 0x11F418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F418u;
        // 0x11f41c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F420u;
}
