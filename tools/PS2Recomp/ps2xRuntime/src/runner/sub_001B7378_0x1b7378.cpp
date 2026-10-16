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

// Function: sub_001B7378
// Address: 0x1b7378 - 0x1b7490
void sub_001B7378_0x1b7378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7378_0x1b7378");
#endif

    switch (ctx->pc) {
        case 0x1b73a0u: goto label_1b73a0;
        case 0x1b73a4u: goto label_1b73a4;
        case 0x1b73f4u: goto label_1b73f4;
        case 0x1b743cu: goto label_1b743c;
        case 0x1b744cu: goto label_1b744c;
        case 0x1b745cu: goto label_1b745c;
        default: break;
    }

    ctx->pc = 0x1b7378u;

    // 0x1b7378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b737c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b737cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b7380: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b7380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b7384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7388: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b738c: 0x26300270  addiu       $s0, $s1, 0x270
    ctx->pc = 0x1b738cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    // 0x1b7390: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1b7390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1b7394: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1b7394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1b7398: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1B7398u;
    SET_GPR_U32(ctx, 31, 0x1B73A0u);
    ctx->pc = 0x1B739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7398u;
    // 0x1b739c: 0xae230264  sw          $v1, 0x264($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1B7398u, 0x1B73A0u)) {
        return;
    }
    ctx->pc = 0x1B73A0u;
label_1b73a0:
    // 0x1b73a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b73a4:
    // 0x1b73a4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B73A4u;
    {
        const bool branch_taken_0x1b73a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b73a4) {
            ctx->pc = 0x1B73A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B73A4u;
            // 0x1b73a8: 0x8e220260  lw          $v0, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7404u;
            goto label_1b7404;
        }
    }
    ctx->pc = 0x1B73ACu;
    // 0x1b73ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b73acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b73b0: 0x0  nop
    ctx->pc = 0x1b73b0u;
    // NOP
    // 0x1b73b4: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B73B4u;
    {
        const bool branch_taken_0x1b73b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b73b4) {
            ctx->pc = 0x1B73A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b73a4;
        }
    }
    ctx->pc = 0x1B73BCu;
    // 0x1b73bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b73bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b73c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B73C0u;
    {
        const bool branch_taken_0x1b73c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C0u;
        // 0x1b73c4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73c0) {
            ctx->pc = 0x1B73D0u;
            goto label_1b73d0;
        }
    }
    ctx->pc = 0x1B73C8u;
    // 0x1b73c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B73C8u;
    {
        const bool branch_taken_0x1b73c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C8u;
        // 0x1b73cc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73c8) {
            ctx->pc = 0x1B73D4u;
            goto label_1b73d4;
        }
    }
    ctx->pc = 0x1B73D0u;
label_1b73d0:
    // 0x1b73d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b73d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b73d4:
    // 0x1b73d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b73d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b73d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B73D8u;
    {
        const bool branch_taken_0x1b73d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73D8u;
        // 0x1b73dc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73d8) {
            ctx->pc = 0x1B73E8u;
            goto label_1b73e8;
        }
    }
    ctx->pc = 0x1B73E0u;
    // 0x1b73e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B73E0u;
    {
        const bool branch_taken_0x1b73e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73E0u;
        // 0x1b73e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73e0) {
            ctx->pc = 0x1B73ECu;
            goto label_1b73ec;
        }
    }
    ctx->pc = 0x1B73E8u;
label_1b73e8:
    // 0x1b73e8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b73e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b73ec:
    // 0x1b73ec: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B73ECu;
    SET_GPR_U32(ctx, 31, 0x1B73F4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B73ECu, 0x1B73F4u)) {
        return;
    }
    ctx->pc = 0x1B73F4u;
label_1b73f4:
    // 0x1b73f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b73f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b73fc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B73FCu;
    {
        const bool branch_taken_0x1b73fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73FCu;
        // 0x1b7400: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73fc) {
            ctx->pc = 0x1B73A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b73a0;
        }
    }
    ctx->pc = 0x1B7404u;
label_1b7404:
    // 0x1b7404: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B7404u;
    {
        const bool branch_taken_0x1b7404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7404) {
            ctx->pc = 0x1B7408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7404u;
            // 0x1b7408: 0xae2002f0  sw          $zero, 0x2F0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7460u;
            goto label_1b7460;
        }
    }
    ctx->pc = 0x1B740Cu;
    // 0x1b740c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b740cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1b7410: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1b7410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1b7414: 0x8c454430  lw          $a1, 0x4430($v0)
    ctx->pc = 0x1b7414u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4430u));
    // 0x1b7418: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1b7418u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1b741c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B741Cu;
    {
        const bool branch_taken_0x1b741c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B741Cu;
        // 0x1b7420: 0x262402b8  addiu       $a0, $s1, 0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b741c) {
            ctx->pc = 0x1B7440u;
            goto label_1b7440;
        }
    }
    ctx->pc = 0x1B7424u;
    // 0x1b7424: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b7424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7428: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7428u;
    {
        const bool branch_taken_0x1b7428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7428u;
        // 0x1b742c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7428) {
            ctx->pc = 0x1B743Cu;
            goto label_1b743c;
        }
    }
    ctx->pc = 0x1B7430u;
    // 0x1b7430: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1b7430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1b7434: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1B7434u;
    SET_GPR_U32(ctx, 31, 0x1B743Cu);
    ctx->pc = 0x1B7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7434u;
    // 0x1b7438: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1B7434u, 0x1B743Cu)) {
        return;
    }
    ctx->pc = 0x1B743Cu;
label_1b743c:
    // 0x1b743c: 0x262402b8  addiu       $a0, $s1, 0x2B8
    ctx->pc = 0x1b743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 696));
label_1b7440:
    // 0x1b7440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7444: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B7444u;
    SET_GPR_U32(ctx, 31, 0x1B744Cu);
    ctx->pc = 0x1B7448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7444u;
    // 0x1b7448: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B7444u, 0x1B744Cu)) {
        return;
    }
    ctx->pc = 0x1B744Cu;
label_1b744c:
    // 0x1b744c: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x1b744cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x1b7450: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7454: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B7454u;
    SET_GPR_U32(ctx, 31, 0x1B745Cu);
    ctx->pc = 0x1B7458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7454u;
    // 0x1b7458: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B7454u, 0x1B745Cu)) {
        return;
    }
    ctx->pc = 0x1B745Cu;
label_1b745c:
    // 0x1b745c: 0xae2002f0  sw          $zero, 0x2F0($s1)
    ctx->pc = 0x1b745cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 0));
label_1b7460:
    // 0x1b7460: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1b7460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1b7464: 0xae2002e0  sw          $zero, 0x2E0($s1)
    ctx->pc = 0x1b7464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 0));
    // 0x1b7468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b746c: 0xae2002e4  sw          $zero, 0x2E4($s1)
    ctx->pc = 0x1b746cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 0));
    // 0x1b7470: 0xae2002e8  sw          $zero, 0x2E8($s1)
    ctx->pc = 0x1b7470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 0));
    // 0x1b7474: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b7474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7478: 0x8c64830c  lw          $a0, -0x7CF4($v1)
    ctx->pc = 0x1b7478u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33830Cu));
    // 0x1b747c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b747cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7484: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1b7484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1b7488: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7488u;
        // 0x1b748c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7490u;
}
