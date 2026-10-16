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

// Function: sub_001833F8
// Address: 0x1833f8 - 0x183468
void sub_001833F8_0x1833f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001833F8_0x1833f8");
#endif

    switch (ctx->pc) {
        case 0x18340cu: goto label_18340c;
        case 0x18342cu: goto label_18342c;
        case 0x183434u: goto label_183434;
        case 0x183450u: goto label_183450;
        default: break;
    }

    ctx->pc = 0x1833f8u;

    // 0x1833f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1833f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1833fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1833fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x183400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183404: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x183404u;
    SET_GPR_U32(ctx, 31, 0x18340Cu);
    ctx->pc = 0x183408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183404u;
    // 0x183408: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x183404u, 0x18340Cu)) {
        return;
    }
    ctx->pc = 0x18340Cu;
label_18340c:
    // 0x18340c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x18340cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x183410: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x183410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x183414: 0x24637ea8  addiu       $v1, $v1, 0x7EA8
    ctx->pc = 0x183414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32424));
    // 0x183418: 0x24427ec8  addiu       $v0, $v0, 0x7EC8
    ctx->pc = 0x183418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32456));
    // 0x18341c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x18341cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x183420: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x183420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x183424: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x183424u;
    SET_GPR_U32(ctx, 31, 0x18342Cu);
    ctx->pc = 0x183428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183424u;
    // 0x183428: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x183424u, 0x18342Cu)) {
        return;
    }
    ctx->pc = 0x18342Cu;
label_18342c:
    // 0x18342c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x18342Cu;
    SET_GPR_U32(ctx, 31, 0x183434u);
    ctx->pc = 0x183430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18342Cu;
    // 0x183430: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x18342Cu, 0x183434u)) {
        return;
    }
    ctx->pc = 0x183434u;
label_183434:
    // 0x183434: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x183434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x183438: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x183438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x18343c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x18343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x183440: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x183440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x183444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183448: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x183448u;
    SET_GPR_U32(ctx, 31, 0x183450u);
    ctx->pc = 0x18344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183448u;
    // 0x18344c: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x183448u, 0x183450u)) {
        return;
    }
    ctx->pc = 0x183450u;
label_183450:
    // 0x183450: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x183450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183458: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x183458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18345c: 0x3e00008  jr          $ra
    ctx->pc = 0x18345Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18345Cu;
        // 0x183460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18345Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183464u;
    // 0x183464: 0x0  nop
    ctx->pc = 0x183464u;
    // NOP
    ctx->pc = 0x183468u;
}
