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

// Function: sub_001D8EF8
// Address: 0x1d8ef8 - 0x1d8f70
void sub_001D8EF8_0x1d8ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8EF8_0x1d8ef8");
#endif

    switch (ctx->pc) {
        case 0x1d8f14u: goto label_1d8f14;
        case 0x1d8f58u: goto label_1d8f58;
        default: break;
    }

    ctx->pc = 0x1d8ef8u;

    // 0x1d8ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8efc: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1d8efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1d8f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8f04: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d8f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d8f08: 0x24a58ea0  addiu       $a1, $a1, -0x7160
    ctx->pc = 0x1d8f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938272));
    // 0x1d8f0c: 0xc0c8400  jal         func_321000
    ctx->pc = 0x1D8F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F14u);
    ctx->pc = 0x1D8F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F0Cu;
    // 0x1d8f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321000u, 0x1D8F0Cu, 0x1D8F14u)) {
        return;
    }
    ctx->pc = 0x1D8F14u;
label_1d8f14:
    // 0x1d8f14: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1d8f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1d8f18: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1d8f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1d8f1c: 0xac829dc0  sw          $v0, -0x6240($a0)
    ctx->pc = 0x1d8f1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339DC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x339DC0u, _value); } while (0);
    // 0x1d8f20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d8f24: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1d8f24u;
    runtime->Store32(rdram, ctx, 0x10000000u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1d8f28: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1d8f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x1d8f2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d8f30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d8f30u;
    runtime->Store32(rdram, ctx, 0x10000020u, GPR_U32(ctx, 0)); // MMIO: 0x10000020
    // 0x1d8f34: 0x34420030  ori         $v0, $v0, 0x30
    ctx->pc = 0x1d8f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1d8f38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d8f3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d8f3cu;
    runtime->Store32(rdram, ctx, 0x10000030u, GPR_U32(ctx, 0)); // MMIO: 0x10000030
    // 0x1d8f40: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1d8f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1d8f44: 0x24020281  addiu       $v0, $zero, 0x281
    ctx->pc = 0x1d8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 641));
    // 0x1d8f48: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d8f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d8f4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d8f4cu;
    runtime->Store32(rdram, ctx, 0x10000010u, GPR_U32(ctx, 2)); // MMIO: 0x10000010
    // 0x1d8f50: 0xc0c8770  jal         func_321DC0
    ctx->pc = 0x1D8F50u;
    SET_GPR_U32(ctx, 31, 0x1D8F58u);
    ctx->pc = 0x321DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321DC0u, 0x1D8F50u, 0x1D8F58u)) {
        return;
    }
    ctx->pc = 0x1D8F58u;
label_1d8f58:
    // 0x1d8f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F5Cu;
        // 0x1d8f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8F64u;
    // 0x1d8f64: 0x0  nop
    ctx->pc = 0x1d8f64u;
    // NOP
    // 0x1d8f68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d8f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d8f6c: 0x0  nop
    ctx->pc = 0x1d8f6cu;
    // NOP
    ctx->pc = 0x1d8f70u;
}
