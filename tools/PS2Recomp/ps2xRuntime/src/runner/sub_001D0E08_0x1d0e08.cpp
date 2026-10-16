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

// Function: sub_001D0E08
// Address: 0x1d0e08 - 0x1d0e60
void sub_001D0E08_0x1d0e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0E08_0x1d0e08");
#endif

    switch (ctx->pc) {
        case 0x1d0e18u: goto label_1d0e18;
        case 0x1d0e24u: goto label_1d0e24;
        case 0x1d0e30u: goto label_1d0e30;
        case 0x1d0e3cu: goto label_1d0e3c;
        case 0x1d0e48u: goto label_1d0e48;
        default: break;
    }

    ctx->pc = 0x1d0e08u;

    // 0x1d0e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e10: 0xc05fd96  jal         func_17F658
    ctx->pc = 0x1D0E10u;
    SET_GPR_U32(ctx, 31, 0x1D0E18u);
    ctx->pc = 0x17F658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F658u, 0x1D0E10u, 0x1D0E18u)) {
        return;
    }
    ctx->pc = 0x1D0E18u;
label_1d0e18:
    // 0x1d0e18: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d0e1c: 0xc05fd9a  jal         func_17F668
    ctx->pc = 0x1D0E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E24u);
    ctx->pc = 0x1D0E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E1Cu;
    // 0x1d0e20: 0xac629a20  sw          $v0, -0x65E0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F668u, 0x1D0E1Cu, 0x1D0E24u)) {
        return;
    }
    ctx->pc = 0x1D0E24u;
label_1d0e24:
    // 0x1d0e24: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d0e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d0e28: 0xc05fd9e  jal         func_17F678
    ctx->pc = 0x1D0E28u;
    SET_GPR_U32(ctx, 31, 0x1D0E30u);
    ctx->pc = 0x1D0E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E28u;
    // 0x1d0e2c: 0xac629a24  sw          $v0, -0x65DC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F678u, 0x1D0E28u, 0x1D0E30u)) {
        return;
    }
    ctx->pc = 0x1D0E30u;
label_1d0e30:
    // 0x1d0e30: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d0e34: 0xc05fda2  jal         func_17F688
    ctx->pc = 0x1D0E34u;
    SET_GPR_U32(ctx, 31, 0x1D0E3Cu);
    ctx->pc = 0x1D0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E34u;
    // 0x1d0e38: 0xac629a28  sw          $v0, -0x65D8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F688u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F688u, 0x1D0E34u, 0x1D0E3Cu)) {
        return;
    }
    ctx->pc = 0x1D0E3Cu;
label_1d0e3c:
    // 0x1d0e3c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d0e40: 0xc05fda6  jal         func_17F698
    ctx->pc = 0x1D0E40u;
    SET_GPR_U32(ctx, 31, 0x1D0E48u);
    ctx->pc = 0x1D0E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E40u;
    // 0x1d0e44: 0xac629a2c  sw          $v0, -0x65D4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941228), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F698u, 0x1D0E40u, 0x1D0E48u)) {
        return;
    }
    ctx->pc = 0x1D0E48u;
label_1d0e48:
    // 0x1d0e48: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d0e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d0e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e50: 0xac629a30  sw          $v0, -0x65D0($v1)
    ctx->pc = 0x1d0e50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339A30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339A30u, _value); } while (0);
    // 0x1d0e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e58: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E58u;
        // 0x1d0e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E60u;
}
