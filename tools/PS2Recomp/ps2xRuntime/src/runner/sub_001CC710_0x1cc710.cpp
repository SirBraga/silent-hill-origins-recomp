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

// Function: sub_001CC710
// Address: 0x1cc710 - 0x1cc770
void sub_001CC710_0x1cc710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC710_0x1cc710");
#endif

    switch (ctx->pc) {
        case 0x1cc710u: goto label_1cc710;
        case 0x1cc714u: goto label_1cc714;
        case 0x1cc718u: goto label_1cc718;
        case 0x1cc71cu: goto label_1cc71c;
        case 0x1cc720u: goto label_1cc720;
        case 0x1cc724u: goto label_1cc724;
        case 0x1cc728u: goto label_1cc728;
        case 0x1cc72cu: goto label_1cc72c;
        case 0x1cc730u: goto label_1cc730;
        case 0x1cc734u: goto label_1cc734;
        case 0x1cc738u: goto label_1cc738;
        case 0x1cc73cu: goto label_1cc73c;
        case 0x1cc740u: goto label_1cc740;
        case 0x1cc744u: goto label_1cc744;
        case 0x1cc748u: goto label_1cc748;
        case 0x1cc74cu: goto label_1cc74c;
        case 0x1cc750u: goto label_1cc750;
        case 0x1cc754u: goto label_1cc754;
        case 0x1cc758u: goto label_1cc758;
        case 0x1cc75cu: goto label_1cc75c;
        case 0x1cc760u: goto label_1cc760;
        case 0x1cc764u: goto label_1cc764;
        case 0x1cc768u: goto label_1cc768;
        case 0x1cc76cu: goto label_1cc76c;
        default: break;
    }

    ctx->pc = 0x1cc710u;

label_1cc710:
    // 0x1cc710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cc714:
    // 0x1cc714: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cc714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cc718:
    // 0x1cc718: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cc718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cc71c:
    // 0x1cc71c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1cc71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1cc720:
    // 0x1cc720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cc724:
    // 0x1cc724: 0x8ca20274  lw          $v0, 0x274($a1)
    ctx->pc = 0x1cc724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 628)));
label_1cc728:
    // 0x1cc728: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cc728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cc72c:
    // 0x1cc72c: 0x28420065  slti        $v0, $v0, 0x65
    ctx->pc = 0x1cc72cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_1cc730:
    // 0x1cc730: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1cc734:
    if (ctx->pc == 0x1CC734u) {
        ctx->pc = 0x1CC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC730u;
        // 0x1cc734: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC738u;
        goto label_1cc738;
    }
    ctx->pc = 0x1CC730u;
    {
        const bool branch_taken_0x1cc730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC730u;
        // 0x1cc734: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc730) {
            ctx->pc = 0x1CC758u;
            goto label_1cc758;
        }
    }
    ctx->pc = 0x1CC738u;
label_1cc738:
    // 0x1cc738: 0x8c860264  lw          $a2, 0x264($a0)
    ctx->pc = 0x1cc738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
label_1cc73c:
    // 0x1cc73c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cc73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc740:
    // 0x1cc740: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cc740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc744:
    // 0x1cc744: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1cc744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1cc748:
    // 0x1cc748: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1cc748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1cc74c:
    // 0x1cc74c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1cc74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1cc750:
    // 0x1cc750: 0x60f809  jalr        $v1
label_1cc754:
    if (ctx->pc == 0x1CC754u) {
        ctx->pc = 0x1CC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC750u;
        // 0x1cc754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC758u;
        goto label_1cc758;
    }
    ctx->pc = 0x1CC750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CC758u);
        ctx->pc = 0x1CC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC750u;
        // 0x1cc754: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC750u, 0x1CC758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC758u;
label_1cc758:
    // 0x1cc758: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cc758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc75c:
    // 0x1cc75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc760:
    // 0x1cc760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cc760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc764:
    // 0x1cc764: 0x3e00008  jr          $ra
label_1cc768:
    if (ctx->pc == 0x1CC768u) {
        ctx->pc = 0x1CC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC764u;
        // 0x1cc768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC76Cu;
        goto label_1cc76c;
    }
    ctx->pc = 0x1CC764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC764u;
        // 0x1cc768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC76Cu;
label_1cc76c:
    // 0x1cc76c: 0x0  nop
    ctx->pc = 0x1cc76cu;
    // NOP
    ctx->pc = 0x1cc770u;
}
