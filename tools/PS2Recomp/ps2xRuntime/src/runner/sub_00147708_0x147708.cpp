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

// Function: sub_00147708
// Address: 0x147708 - 0x147768
void sub_00147708_0x147708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147708_0x147708");
#endif

    switch (ctx->pc) {
        case 0x14771cu: goto label_14771c;
        case 0x14773cu: goto label_14773c;
        default: break;
    }

    ctx->pc = 0x147708u;

    // 0x147708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14770c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14770cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x147710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147714: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x147714u;
    SET_GPR_U32(ctx, 31, 0x14771Cu);
    ctx->pc = 0x147718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147714u;
    // 0x147718: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x147714u, 0x14771Cu)) {
        return;
    }
    ctx->pc = 0x14771Cu;
label_14771c:
    // 0x14771c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x14771cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x147720: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x147720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x147724: 0x246310c8  addiu       $v1, $v1, 0x10C8
    ctx->pc = 0x147724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4296));
    // 0x147728: 0x244210e8  addiu       $v0, $v0, 0x10E8
    ctx->pc = 0x147728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4328));
    // 0x14772c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x14772cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x147730: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x147730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x147734: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x147734u;
    SET_GPR_U32(ctx, 31, 0x14773Cu);
    ctx->pc = 0x147738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147734u;
    // 0x147738: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x147734u, 0x14773Cu)) {
        return;
    }
    ctx->pc = 0x14773Cu;
label_14773c:
    // 0x14773c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14773cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147740: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x147740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x147744: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x147744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x147748: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x147748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x14774c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x14774cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x147750: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x147750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x147754: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x147754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14775c: 0x3e00008  jr          $ra
    ctx->pc = 0x14775Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14775Cu;
        // 0x147760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14775Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147764u;
    // 0x147764: 0x0  nop
    ctx->pc = 0x147764u;
    // NOP
    ctx->pc = 0x147768u;
}
