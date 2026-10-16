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

// Function: sub_00140630
// Address: 0x140630 - 0x140688
void sub_00140630_0x140630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140630_0x140630");
#endif

    switch (ctx->pc) {
        case 0x140644u: goto label_140644;
        case 0x140664u: goto label_140664;
        case 0x14066cu: goto label_14066c;
        case 0x140674u: goto label_140674;
        default: break;
    }

    ctx->pc = 0x140630u;

    // 0x140630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x140634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x140638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14063c: 0xc050044  jal         func_140110
    ctx->pc = 0x14063Cu;
    SET_GPR_U32(ctx, 31, 0x140644u);
    ctx->pc = 0x140640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14063Cu;
    // 0x140640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140110u, 0x14063Cu, 0x140644u)) {
        return;
    }
    ctx->pc = 0x140644u;
label_140644:
    // 0x140644: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x140644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x140648: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x140648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14064c: 0x24630ab8  addiu       $v1, $v1, 0xAB8
    ctx->pc = 0x14064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2744));
    // 0x140650: 0x24420ad8  addiu       $v0, $v0, 0xAD8
    ctx->pc = 0x140650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2776));
    // 0x140654: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x140654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x140658: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x140658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x14065c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14065Cu;
    SET_GPR_U32(ctx, 31, 0x140664u);
    ctx->pc = 0x140660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14065Cu;
    // 0x140660: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14065Cu, 0x140664u)) {
        return;
    }
    ctx->pc = 0x140664u;
label_140664:
    // 0x140664: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x140664u;
    SET_GPR_U32(ctx, 31, 0x14066Cu);
    ctx->pc = 0x140668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140664u;
    // 0x140668: 0x2604005c  addiu       $a0, $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x140664u, 0x14066Cu)) {
        return;
    }
    ctx->pc = 0x14066Cu;
label_14066c:
    // 0x14066c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14066Cu;
    SET_GPR_U32(ctx, 31, 0x140674u);
    ctx->pc = 0x140670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14066Cu;
    // 0x140670: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14066Cu, 0x140674u)) {
        return;
    }
    ctx->pc = 0x140674u;
label_140674:
    // 0x140674: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x140674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14067c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14067cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140680: 0x3e00008  jr          $ra
    ctx->pc = 0x140680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140680u;
        // 0x140684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140688u;
}
