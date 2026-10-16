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

// Function: sub_00107380
// Address: 0x107380 - 0x1074a0
void sub_00107380_0x107380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107380_0x107380");
#endif

    switch (ctx->pc) {
        case 0x1073bcu: goto label_1073bc;
        case 0x107418u: goto label_107418;
        case 0x107420u: goto label_107420;
        case 0x107428u: goto label_107428;
        case 0x10743cu: goto label_10743c;
        case 0x107454u: goto label_107454;
        case 0x10746cu: goto label_10746c;
        case 0x107480u: goto label_107480;
        case 0x107488u: goto label_107488;
        default: break;
    }

    ctx->pc = 0x107380u;

    // 0x107380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107384: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x107388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10738c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10738cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107394: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x107394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x107398: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x107398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x10739c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x10739cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1073a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1073a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1073a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1073a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1073a8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1073a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1073ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1073ACu;
    {
        const bool branch_taken_0x1073ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1073B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073ACu;
        // 0x1073b0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073ac) {
            ctx->pc = 0x1073BCu;
            goto label_1073bc;
        }
    }
    ctx->pc = 0x1073B4u;
    // 0x1073b4: 0xc07b570  jal         func_1ED5C0
    ctx->pc = 0x1073B4u;
    SET_GPR_U32(ctx, 31, 0x1073BCu);
    ctx->pc = 0x1ED5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED5C0u, 0x1073B4u, 0x1073BCu)) {
        return;
    }
    ctx->pc = 0x1073BCu;
label_1073bc:
    // 0x1073bc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1073bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1073c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1073c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1073c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1073C4u;
    {
        const bool branch_taken_0x1073c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1073c4) {
            ctx->pc = 0x1073E4u;
            goto label_1073e4;
        }
    }
    ctx->pc = 0x1073CCu;
    // 0x1073cc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1073ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1073d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1073D0u;
    {
        const bool branch_taken_0x1073d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1073d0) {
            ctx->pc = 0x1073E4u;
            goto label_1073e4;
        }
    }
    ctx->pc = 0x1073D8u;
    // 0x1073d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1073d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1073dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1073DCu;
    {
        const bool branch_taken_0x1073dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1073dc) {
            ctx->pc = 0x1073E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1073DCu;
            // 0x1073e0: 0xc44c000c  lwc1        $f12, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1073E4u;
            goto label_1073e4;
        }
    }
    ctx->pc = 0x1073E4u;
label_1073e4:
    // 0x1073e4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1073e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1073e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1073e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1073ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1073ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1073f0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1073f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1073f4: 0x46006501  sub.s       $f20, $f12, $f0
    ctx->pc = 0x1073f4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1073f8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1073F8u;
    {
        const bool branch_taken_0x1073f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1073FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073F8u;
        // 0x1073fc: 0xe6140028  swc1        $f20, 0x28($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073f8) {
            ctx->pc = 0x107480u;
            goto label_107480;
        }
    }
    ctx->pc = 0x107400u;
    // 0x107400: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x107400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x107404: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107404u;
    {
        const bool branch_taken_0x107404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107404) {
            ctx->pc = 0x107420u;
            goto label_107420;
        }
    }
    ctx->pc = 0x10740Cu;
    // 0x10740c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x10740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x107410: 0xc09d926  jal         func_276498
    ctx->pc = 0x107410u;
    SET_GPR_U32(ctx, 31, 0x107418u);
    ctx->pc = 0x107414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107410u;
    // 0x107414: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x107410u, 0x107418u)) {
        return;
    }
    ctx->pc = 0x107418u;
label_107418:
    // 0x107418: 0xc0942f2  jal         func_250BC8
    ctx->pc = 0x107418u;
    SET_GPR_U32(ctx, 31, 0x107420u);
    ctx->pc = 0x10741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107418u;
    // 0x10741c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x107418u, 0x107420u)) {
        return;
    }
    ctx->pc = 0x107420u;
label_107420:
    // 0x107420: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x107420u;
    SET_GPR_U32(ctx, 31, 0x107428u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x107420u, 0x107428u)) {
        return;
    }
    ctx->pc = 0x107428u;
label_107428:
    // 0x107428: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x107428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10742c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x10742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x107430: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x107430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x107434: 0xc077b78  jal         func_1DEDE0
    ctx->pc = 0x107434u;
    SET_GPR_U32(ctx, 31, 0x10743Cu);
    ctx->pc = 0x107438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107434u;
    // 0x107438: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DEDE0u, 0x107434u, 0x10743Cu)) {
        return;
    }
    ctx->pc = 0x10743Cu;
label_10743c:
    // 0x10743c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107440: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x107440u;
    {
        const bool branch_taken_0x107440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107440) {
            ctx->pc = 0x107444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107440u;
            // 0x107444: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107458u;
            goto label_107458;
        }
    }
    ctx->pc = 0x107448u;
    // 0x107448: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x10744c: 0xc076e48  jal         func_1DB920
    ctx->pc = 0x10744Cu;
    SET_GPR_U32(ctx, 31, 0x107454u);
    ctx->pc = 0x107450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10744Cu;
    // 0x107450: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DB920u, 0x10744Cu, 0x107454u)) {
        return;
    }
    ctx->pc = 0x107454u;
label_107454:
    // 0x107454: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107458:
    // 0x107458: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x107458u;
    {
        const bool branch_taken_0x107458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107458) {
            ctx->pc = 0x10745Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107458u;
            // 0x10745c: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107470u;
            goto label_107470;
        }
    }
    ctx->pc = 0x107460u;
    // 0x107460: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x107460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x107464: 0xc076e86  jal         func_1DBA18
    ctx->pc = 0x107464u;
    SET_GPR_U32(ctx, 31, 0x10746Cu);
    ctx->pc = 0x107468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107464u;
    // 0x107468: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DBA18u, 0x107464u, 0x10746Cu)) {
        return;
    }
    ctx->pc = 0x10746Cu;
label_10746c:
    // 0x10746c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x10746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_107470:
    // 0x107470: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107470u;
    {
        const bool branch_taken_0x107470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107470) {
            ctx->pc = 0x107480u;
            goto label_107480;
        }
    }
    ctx->pc = 0x107478u;
    // 0x107478: 0xc07b656  jal         func_1ED958
    ctx->pc = 0x107478u;
    SET_GPR_U32(ctx, 31, 0x107480u);
    ctx->pc = 0x10747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107478u;
    // 0x10747c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED958u, 0x107478u, 0x107480u)) {
        return;
    }
    ctx->pc = 0x107480u;
label_107480:
    // 0x107480: 0xc077968  jal         func_1DE5A0
    ctx->pc = 0x107480u;
    SET_GPR_U32(ctx, 31, 0x107488u);
    ctx->pc = 0x107484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107480u;
    // 0x107484: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE5A0u, 0x107480u, 0x107488u)) {
        return;
    }
    ctx->pc = 0x107488u;
label_107488:
    // 0x107488: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x107488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10748c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10748cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107490: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x107490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107494: 0x3e00008  jr          $ra
    ctx->pc = 0x107494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107494u;
        // 0x107498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10749Cu;
    // 0x10749c: 0x0  nop
    ctx->pc = 0x10749cu;
    // NOP
    ctx->pc = 0x1074a0u;
}
