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

// Function: sub_0025C408
// Address: 0x25c408 - 0x25c498
void sub_0025C408_0x25c408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C408_0x25c408");
#endif

    switch (ctx->pc) {
        case 0x25c408u: goto label_25c408;
        case 0x25c40cu: goto label_25c40c;
        case 0x25c410u: goto label_25c410;
        case 0x25c414u: goto label_25c414;
        case 0x25c418u: goto label_25c418;
        case 0x25c41cu: goto label_25c41c;
        case 0x25c420u: goto label_25c420;
        case 0x25c424u: goto label_25c424;
        case 0x25c428u: goto label_25c428;
        case 0x25c42cu: goto label_25c42c;
        case 0x25c430u: goto label_25c430;
        case 0x25c434u: goto label_25c434;
        case 0x25c438u: goto label_25c438;
        case 0x25c43cu: goto label_25c43c;
        case 0x25c440u: goto label_25c440;
        case 0x25c444u: goto label_25c444;
        case 0x25c448u: goto label_25c448;
        case 0x25c44cu: goto label_25c44c;
        case 0x25c450u: goto label_25c450;
        case 0x25c454u: goto label_25c454;
        case 0x25c458u: goto label_25c458;
        case 0x25c45cu: goto label_25c45c;
        case 0x25c460u: goto label_25c460;
        case 0x25c464u: goto label_25c464;
        case 0x25c468u: goto label_25c468;
        case 0x25c46cu: goto label_25c46c;
        case 0x25c470u: goto label_25c470;
        case 0x25c474u: goto label_25c474;
        case 0x25c478u: goto label_25c478;
        case 0x25c47cu: goto label_25c47c;
        case 0x25c480u: goto label_25c480;
        case 0x25c484u: goto label_25c484;
        case 0x25c488u: goto label_25c488;
        case 0x25c48cu: goto label_25c48c;
        case 0x25c490u: goto label_25c490;
        case 0x25c494u: goto label_25c494;
        default: break;
    }

    ctx->pc = 0x25c408u;

label_25c408:
    // 0x25c408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25c408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25c40c:
    // 0x25c40c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25c410:
    // 0x25c410: 0x8c633fe0  lw          $v1, 0x3FE0($v1)
    ctx->pc = 0x25c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16352)));
label_25c414:
    // 0x25c414: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25c414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25c418:
    // 0x25c418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25c41c:
    // 0x25c41c: 0x24420fcc  addiu       $v0, $v0, 0xFCC
    ctx->pc = 0x25c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4044));
label_25c420:
    // 0x25c420: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25c420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25c424:
    // 0x25c424: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x25c424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25c428:
    // 0x25c428: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_25c42c:
    if (ctx->pc == 0x25C42Cu) {
        ctx->pc = 0x25C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C428u;
        // 0x25c42c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C430u;
        goto label_25c430;
    }
    ctx->pc = 0x25C428u;
    {
        const bool branch_taken_0x25c428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x25C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C428u;
        // 0x25c42c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c428) {
            ctx->pc = 0x25C48Cu;
            goto label_25c48c;
        }
    }
    ctx->pc = 0x25C430u;
label_25c430:
    // 0x25c430: 0x2447fffc  addiu       $a3, $v0, -0x4
    ctx->pc = 0x25c430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_25c434:
    // 0x25c434: 0x8ca2fff8  lw          $v0, -0x8($a1)
    ctx->pc = 0x25c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_25c438:
    // 0x25c438: 0x14440010  bne         $v0, $a0, . + 4 + (0x10 << 2)
label_25c43c:
    if (ctx->pc == 0x25C43Cu) {
        ctx->pc = 0x25C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C438u;
        // 0x25c43c: 0x24a6fff8  addiu       $a2, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C440u;
        goto label_25c440;
    }
    ctx->pc = 0x25C438u;
    {
        const bool branch_taken_0x25c438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x25C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C438u;
        // 0x25c43c: 0x24a6fff8  addiu       $a2, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c438) {
            ctx->pc = 0x25C47Cu;
            goto label_25c47c;
        }
    }
    ctx->pc = 0x25C440u;
label_25c440:
    // 0x25c440: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x25c440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_25c444:
    // 0x25c444: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25c448:
    // 0x25c448: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x25c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_25c44c:
    // 0x25c44c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_25c450:
    // 0x25c450: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x25c450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_25c454:
    // 0x25c454: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x25c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_25c458:
    // 0x25c458: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x25c458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_25c45c:
    // 0x25c45c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25c460:
    // 0x25c460: 0x8c633fe0  lw          $v1, 0x3FE0($v1)
    ctx->pc = 0x25c460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16352)));
label_25c464:
    // 0x25c464: 0x8ce2011c  lw          $v0, 0x11C($a3)
    ctx->pc = 0x25c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 284)));
label_25c468:
    // 0x25c468: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x25c468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_25c46c:
    // 0x25c46c: 0x40f809  jalr        $v0
label_25c470:
    if (ctx->pc == 0x25C470u) {
        ctx->pc = 0x25C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C46Cu;
        // 0x25c470: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C474u;
        goto label_25c474;
    }
    ctx->pc = 0x25C46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C474u);
        ctx->pc = 0x25C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C46Cu;
        // 0x25c470: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C46Cu, 0x25C474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C474u;
label_25c474:
    // 0x25c474: 0x10000005  b           . + 4 + (0x5 << 2)
label_25c478:
    if (ctx->pc == 0x25C478u) {
        ctx->pc = 0x25C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C474u;
        // 0x25c478: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C47Cu;
        goto label_25c47c;
    }
    ctx->pc = 0x25C474u;
    {
        const bool branch_taken_0x25c474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C474u;
        // 0x25c478: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c474) {
            ctx->pc = 0x25C48Cu;
            goto label_25c48c;
        }
    }
    ctx->pc = 0x25C47Cu;
label_25c47c:
    // 0x25c47c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x25c47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_25c480:
    // 0x25c480: 0x54a3ffed  bnel        $a1, $v1, . + 4 + (-0x13 << 2)
label_25c484:
    if (ctx->pc == 0x25C484u) {
        ctx->pc = 0x25C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C480u;
        // 0x25c484: 0x8ca2fff8  lw          $v0, -0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C488u;
        goto label_25c488;
    }
    ctx->pc = 0x25C480u;
    {
        const bool branch_taken_0x25c480 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x25c480) {
            ctx->pc = 0x25C484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C480u;
            // 0x25c484: 0x8ca2fff8  lw          $v0, -0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c438;
        }
    }
    ctx->pc = 0x25C488u;
label_25c488:
    // 0x25c488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c48c:
    // 0x25c48c: 0x3e00008  jr          $ra
label_25c490:
    if (ctx->pc == 0x25C490u) {
        ctx->pc = 0x25C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C48Cu;
        // 0x25c490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C494u;
        goto label_25c494;
    }
    ctx->pc = 0x25C48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C48Cu;
        // 0x25c490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C494u;
label_25c494:
    // 0x25c494: 0x0  nop
    ctx->pc = 0x25c494u;
    // NOP
    ctx->pc = 0x25c498u;
}
