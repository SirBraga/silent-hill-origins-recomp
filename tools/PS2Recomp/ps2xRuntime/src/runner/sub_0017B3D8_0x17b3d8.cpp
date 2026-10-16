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

// Function: sub_0017B3D8
// Address: 0x17b3d8 - 0x17b488
void sub_0017B3D8_0x17b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B3D8_0x17b3d8");
#endif

    switch (ctx->pc) {
        case 0x17b408u: goto label_17b408;
        case 0x17b41cu: goto label_17b41c;
        case 0x17b440u: goto label_17b440;
        case 0x17b448u: goto label_17b448;
        case 0x17b468u: goto label_17b468;
        case 0x17b470u: goto label_17b470;
        default: break;
    }

    ctx->pc = 0x17b3d8u;

    // 0x17b3d8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x17b3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x17b3dc: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x17b3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x17b3e0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x17b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x17b3e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17b3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3e8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x17b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x17b3ec: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x17b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17b3f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B3F0u;
    {
        const bool branch_taken_0x17b3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3F0u;
        // 0x17b3f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3f0) {
            ctx->pc = 0x17B400u;
            goto label_17b400;
        }
    }
    ctx->pc = 0x17B3F8u;
    // 0x17b3f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B3F8u;
    {
        const bool branch_taken_0x17b3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3F8u;
        // 0x17b3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3f8) {
            ctx->pc = 0x17B40Cu;
            goto label_17b40c;
        }
    }
    ctx->pc = 0x17B400u;
label_17b400:
    // 0x17b400: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x17B400u;
    SET_GPR_U32(ctx, 31, 0x17B408u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x17B400u, 0x17B408u)) {
        return;
    }
    ctx->pc = 0x17B408u;
label_17b408:
    // 0x17b408: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17b408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17b40c:
    // 0x17b40c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17B40Cu;
    {
        const bool branch_taken_0x17b40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B40Cu;
        // 0x17b410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b40c) {
            ctx->pc = 0x17B474u;
            goto label_17b474;
        }
    }
    ctx->pc = 0x17B414u;
    // 0x17b414: 0xc08114c  jal         func_204530
    ctx->pc = 0x17B414u;
    SET_GPR_U32(ctx, 31, 0x17B41Cu);
    ctx->pc = 0x17B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B414u;
    // 0x17b418: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204530u, 0x17B414u, 0x17B41Cu)) {
        return;
    }
    ctx->pc = 0x17B41Cu;
label_17b41c:
    // 0x17b41c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17B41Cu;
    {
        const bool branch_taken_0x17b41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B41Cu;
        // 0x17b420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b41c) {
            ctx->pc = 0x17B474u;
            goto label_17b474;
        }
    }
    ctx->pc = 0x17B424u;
    // 0x17b424: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x17b424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17b428: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B428u;
    {
        const bool branch_taken_0x17b428 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B428u;
        // 0x17b42c: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b428) {
            ctx->pc = 0x17B44Cu;
            goto label_17b44c;
        }
    }
    ctx->pc = 0x17B430u;
    // 0x17b430: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x17b430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17b434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17b434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b438: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x17B438u;
    SET_GPR_U32(ctx, 31, 0x17B440u);
    ctx->pc = 0x17B43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B438u;
    // 0x17b43c: 0x24a56ef8  addiu       $a1, $a1, 0x6EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x17B438u, 0x17B440u)) {
        return;
    }
    ctx->pc = 0x17B440u;
label_17b440:
    // 0x17b440: 0xc06719a  jal         func_19C668
    ctx->pc = 0x17B440u;
    SET_GPR_U32(ctx, 31, 0x17B448u);
    ctx->pc = 0x17B444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B440u;
    // 0x17b444: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C668u, 0x17B440u, 0x17B448u)) {
        return;
    }
    ctx->pc = 0x17B448u;
label_17b448:
    // 0x17b448: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b44c:
    // 0x17b44c: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B44Cu;
    {
        const bool branch_taken_0x17b44c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B44Cu;
        // 0x17b450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b44c) {
            ctx->pc = 0x17B474u;
            goto label_17b474;
        }
    }
    ctx->pc = 0x17B454u;
    // 0x17b454: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x17b454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17b458: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17b458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17b45c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17b45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b460: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x17B460u;
    SET_GPR_U32(ctx, 31, 0x17B468u);
    ctx->pc = 0x17B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B460u;
    // 0x17b464: 0x24a56f08  addiu       $a1, $a1, 0x6F08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x17B460u, 0x17B468u)) {
        return;
    }
    ctx->pc = 0x17B468u;
label_17b468:
    // 0x17b468: 0xc06719a  jal         func_19C668
    ctx->pc = 0x17B468u;
    SET_GPR_U32(ctx, 31, 0x17B470u);
    ctx->pc = 0x17B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B468u;
    // 0x17b46c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C668u, 0x17B468u, 0x17B470u)) {
        return;
    }
    ctx->pc = 0x17B470u;
label_17b470:
    // 0x17b470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b474:
    // 0x17b474: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x17b474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17b478: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x17b478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17b47c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x17b47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17b480: 0x3e00008  jr          $ra
    ctx->pc = 0x17B480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B480u;
        // 0x17b484: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B488u;
}
