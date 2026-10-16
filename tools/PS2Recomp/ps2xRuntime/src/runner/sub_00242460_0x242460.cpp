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

// Function: sub_00242460
// Address: 0x242460 - 0x2424c8
void sub_00242460_0x242460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242460_0x242460");
#endif

    switch (ctx->pc) {
        case 0x242460u: goto label_242460;
        case 0x242464u: goto label_242464;
        case 0x242468u: goto label_242468;
        case 0x24246cu: goto label_24246c;
        case 0x242470u: goto label_242470;
        case 0x242474u: goto label_242474;
        case 0x242478u: goto label_242478;
        case 0x24247cu: goto label_24247c;
        case 0x242480u: goto label_242480;
        case 0x242484u: goto label_242484;
        case 0x242488u: goto label_242488;
        case 0x24248cu: goto label_24248c;
        case 0x242490u: goto label_242490;
        case 0x242494u: goto label_242494;
        case 0x242498u: goto label_242498;
        case 0x24249cu: goto label_24249c;
        case 0x2424a0u: goto label_2424a0;
        case 0x2424a4u: goto label_2424a4;
        case 0x2424a8u: goto label_2424a8;
        case 0x2424acu: goto label_2424ac;
        case 0x2424b0u: goto label_2424b0;
        case 0x2424b4u: goto label_2424b4;
        case 0x2424b8u: goto label_2424b8;
        case 0x2424bcu: goto label_2424bc;
        case 0x2424c0u: goto label_2424c0;
        case 0x2424c4u: goto label_2424c4;
        default: break;
    }

    ctx->pc = 0x242460u;

label_242460:
    // 0x242460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_242464:
    // 0x242464: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x242464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242468:
    // 0x242468: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x242468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_24246c:
    // 0x24246c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x24246cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242470:
    // 0x242470: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x242470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242474:
    // 0x242474: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_242478:
    if (ctx->pc == 0x242478u) {
        ctx->pc = 0x242478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242474u;
        // 0x242478: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24247Cu;
        goto label_24247c;
    }
    ctx->pc = 0x242474u;
    {
        const bool branch_taken_0x242474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x242478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242474u;
        // 0x242478: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242474) {
            ctx->pc = 0x2424B4u;
            goto label_2424b4;
        }
    }
    ctx->pc = 0x24247Cu;
label_24247c:
    // 0x24247c: 0x8f8684f8  lw          $a2, -0x7B08($gp)
    ctx->pc = 0x24247cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935800)));
label_242480:
    // 0x242480: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x242480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_242484:
    // 0x242484: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x242484u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_242488:
    // 0x242488: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x242488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24248c:
    // 0x24248c: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x24248cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_242490:
    // 0x242490: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x242490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242494:
    // 0x242494: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x242494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242498:
    // 0x242498: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x242498u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5));
label_24249c:
    // 0x24249c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x24249cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2424a0:
    // 0x2424a0: 0x40f809  jalr        $v0
label_2424a4:
    if (ctx->pc == 0x2424A4u) {
        ctx->pc = 0x2424A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424A0u;
        // 0x2424a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424A8u;
        goto label_2424a8;
    }
    ctx->pc = 0x2424A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2424A8u);
        ctx->pc = 0x2424A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424A0u;
        // 0x2424a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2424A0u, 0x2424A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2424A8u;
label_2424a8:
    // 0x2424a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2424a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2424ac:
    // 0x2424ac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2424b0:
    if (ctx->pc == 0x2424B0u) {
        ctx->pc = 0x2424B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424ACu;
        // 0x2424b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424B4u;
        goto label_2424b4;
    }
    ctx->pc = 0x2424ACu;
    {
        const bool branch_taken_0x2424ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2424B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424ACu;
        // 0x2424b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2424ac) {
            ctx->pc = 0x2424B8u;
            goto label_2424b8;
        }
    }
    ctx->pc = 0x2424B4u;
label_2424b4:
    // 0x2424b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2424b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2424b8:
    // 0x2424b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2424b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2424bc:
    // 0x2424bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2424bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2424c0:
    // 0x2424c0: 0x3e00008  jr          $ra
label_2424c4:
    if (ctx->pc == 0x2424C4u) {
        ctx->pc = 0x2424C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424C0u;
        // 0x2424c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424C8u;
        goto label_fallthrough_0x2424c0;
    }
    ctx->pc = 0x2424C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2424C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424C0u;
        // 0x2424c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2424C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2424c0:
    ctx->pc = 0x2424C8u;
}
