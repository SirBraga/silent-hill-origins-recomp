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

// Function: sub_001D0D30
// Address: 0x1d0d30 - 0x1d0d88
void sub_001D0D30_0x1d0d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0D30_0x1d0d30");
#endif

    switch (ctx->pc) {
        case 0x1d0d40u: goto label_1d0d40;
        case 0x1d0d4cu: goto label_1d0d4c;
        case 0x1d0d58u: goto label_1d0d58;
        case 0x1d0d64u: goto label_1d0d64;
        case 0x1d0d70u: goto label_1d0d70;
        default: break;
    }

    ctx->pc = 0x1d0d30u;

    // 0x1d0d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0d38: 0xc05fd8a  jal         func_17F628
    ctx->pc = 0x1D0D38u;
    SET_GPR_U32(ctx, 31, 0x1D0D40u);
    ctx->pc = 0x17F628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F628u, 0x1D0D38u, 0x1D0D40u)) {
        return;
    }
    ctx->pc = 0x1D0D40u;
label_1d0d40:
    // 0x1d0d40: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d0d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d0d44: 0xc05fd8e  jal         func_17F638
    ctx->pc = 0x1D0D44u;
    SET_GPR_U32(ctx, 31, 0x1D0D4Cu);
    ctx->pc = 0x1D0D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D44u;
    // 0x1d0d48: 0xac629a0c  sw          $v0, -0x65F4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F638u, 0x1D0D44u, 0x1D0D4Cu)) {
        return;
    }
    ctx->pc = 0x1D0D4Cu;
label_1d0d4c:
    // 0x1d0d4c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d0d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d0d50: 0xc05fd92  jal         func_17F648
    ctx->pc = 0x1D0D50u;
    SET_GPR_U32(ctx, 31, 0x1D0D58u);
    ctx->pc = 0x1D0D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D50u;
    // 0x1d0d54: 0xac629a10  sw          $v0, -0x65F0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F648u, 0x1D0D50u, 0x1D0D58u)) {
        return;
    }
    ctx->pc = 0x1D0D58u;
label_1d0d58:
    // 0x1d0d58: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d0d5c: 0xc05fd66  jal         func_17F598
    ctx->pc = 0x1D0D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D64u);
    ctx->pc = 0x1D0D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D5Cu;
    // 0x1d0d60: 0xac629a14  sw          $v0, -0x65EC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F598u, 0x1D0D5Cu, 0x1D0D64u)) {
        return;
    }
    ctx->pc = 0x1D0D64u;
label_1d0d64:
    // 0x1d0d64: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0d68: 0xc05fd70  jal         func_17F5C0
    ctx->pc = 0x1D0D68u;
    SET_GPR_U32(ctx, 31, 0x1D0D70u);
    ctx->pc = 0x1D0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D68u;
    // 0x1d0d6c: 0xe4409a18  swc1        $f0, -0x65E8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294941208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F5C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F5C0u, 0x1D0D68u, 0x1D0D70u)) {
        return;
    }
    ctx->pc = 0x1D0D70u;
label_1d0d70:
    // 0x1d0d70: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d0d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d7c: 0xe4609a1c  swc1        $f0, -0x65E4($v1)
    ctx->pc = 0x1d0d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x339A1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339A1Cu, _value); } while (0); }
    // 0x1d0d80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D80u;
        // 0x1d0d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D88u;
}
