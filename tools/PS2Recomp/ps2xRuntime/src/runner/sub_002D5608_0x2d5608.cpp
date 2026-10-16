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

// Function: sub_002D5608
// Address: 0x2d5608 - 0x2d5678
void sub_002D5608_0x2d5608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5608_0x2d5608");
#endif

    switch (ctx->pc) {
        case 0x2d5608u: goto label_2d5608;
        case 0x2d560cu: goto label_2d560c;
        case 0x2d5610u: goto label_2d5610;
        case 0x2d5614u: goto label_2d5614;
        case 0x2d5618u: goto label_2d5618;
        case 0x2d561cu: goto label_2d561c;
        case 0x2d5620u: goto label_2d5620;
        case 0x2d5624u: goto label_2d5624;
        case 0x2d5628u: goto label_2d5628;
        case 0x2d562cu: goto label_2d562c;
        case 0x2d5630u: goto label_2d5630;
        case 0x2d5634u: goto label_2d5634;
        case 0x2d5638u: goto label_2d5638;
        case 0x2d563cu: goto label_2d563c;
        case 0x2d5640u: goto label_2d5640;
        case 0x2d5644u: goto label_2d5644;
        case 0x2d5648u: goto label_2d5648;
        case 0x2d564cu: goto label_2d564c;
        case 0x2d5650u: goto label_2d5650;
        case 0x2d5654u: goto label_2d5654;
        case 0x2d5658u: goto label_2d5658;
        case 0x2d565cu: goto label_2d565c;
        case 0x2d5660u: goto label_2d5660;
        case 0x2d5664u: goto label_2d5664;
        case 0x2d5668u: goto label_2d5668;
        case 0x2d566cu: goto label_2d566c;
        case 0x2d5670u: goto label_2d5670;
        case 0x2d5674u: goto label_2d5674;
        default: break;
    }

    ctx->pc = 0x2d5608u;

label_2d5608:
    // 0x2d5608: 0x8f868b0c  lw          $a2, -0x74F4($gp)
    ctx->pc = 0x2d5608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937356)));
label_2d560c:
    // 0x2d560c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2d560cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_2d5610:
    // 0x2d5610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d5614:
    // 0x2d5614: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2d5614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2d5618:
    // 0x2d5618: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2d5618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2d561c:
    // 0x2d561c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d561cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2d5620:
    // 0x2d5620: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2d5624:
    if (ctx->pc == 0x2D5624u) {
        ctx->pc = 0x2D5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5620u;
        // 0x2d5624: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5628u;
        goto label_2d5628;
    }
    ctx->pc = 0x2D5620u;
    {
        const bool branch_taken_0x2d5620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5620u;
        // 0x2d5624: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5620) {
            ctx->pc = 0x2D5630u;
            goto label_2d5630;
        }
    }
    ctx->pc = 0x2D5628u;
label_2d5628:
    // 0x2d5628: 0x10000008  b           . + 4 + (0x8 << 2)
label_2d562c:
    if (ctx->pc == 0x2D562Cu) {
        ctx->pc = 0x2D562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5628u;
        // 0x2d562c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5630u;
        goto label_2d5630;
    }
    ctx->pc = 0x2D5628u;
    {
        const bool branch_taken_0x2d5628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5628u;
        // 0x2d562c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5628) {
            ctx->pc = 0x2D564Cu;
            goto label_2d564c;
        }
    }
    ctx->pc = 0x2D5630u;
label_2d5630:
    // 0x2d5630: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d5630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2d5634:
    // 0x2d5634: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x2d5634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_2d5638:
    // 0x2d5638: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x2d5638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_2d563c:
    // 0x2d563c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2d563cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d5640:
    // 0x2d5640: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d5640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2d5644:
    // 0x2d5644: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d5644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2d5648:
    // 0x2d5648: 0xaf828b0c  sw          $v0, -0x74F4($gp)
    ctx->pc = 0x2d5648u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937356), GPR_U32(ctx, 2));
label_2d564c:
    // 0x2d564c: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
label_2d5650:
    if (ctx->pc == 0x2D5650u) {
        ctx->pc = 0x2D5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D564Cu;
        // 0x2d5650: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5654u;
        goto label_2d5654;
    }
    ctx->pc = 0x2D564Cu;
    {
        const bool branch_taken_0x2d564c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D564Cu;
        // 0x2d5650: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d564c) {
            ctx->pc = 0x2D566Cu;
            goto label_2d566c;
        }
    }
    ctx->pc = 0x2D5654u;
label_2d5654:
    // 0x2d5654: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d5654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d5658:
    // 0x2d5658: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2d5658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2d565c:
    // 0x2d565c: 0x40f809  jalr        $v0
label_2d5660:
    if (ctx->pc == 0x2D5660u) {
        ctx->pc = 0x2D5664u;
        goto label_2d5664;
    }
    ctx->pc = 0x2D565Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D565Cu, 0x2D5664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5664u;
label_2d5664:
    // 0x2d5664: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d5668:
    if (ctx->pc == 0x2D5668u) {
        ctx->pc = 0x2D5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5664u;
        // 0x2d5668: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D566Cu;
        goto label_2d566c;
    }
    ctx->pc = 0x2D5664u;
    {
        const bool branch_taken_0x2d5664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5664u;
        // 0x2d5668: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5664) {
            ctx->pc = 0x2D5670u;
            goto label_2d5670;
        }
    }
    ctx->pc = 0x2D566Cu;
label_2d566c:
    // 0x2d566c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d566cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5670:
    // 0x2d5670: 0x3e00008  jr          $ra
label_2d5674:
    if (ctx->pc == 0x2D5674u) {
        ctx->pc = 0x2D5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5670u;
        // 0x2d5674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5678u;
        goto label_fallthrough_0x2d5670;
    }
    ctx->pc = 0x2D5670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5670u;
        // 0x2d5674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d5670:
    ctx->pc = 0x2D5678u;
}
