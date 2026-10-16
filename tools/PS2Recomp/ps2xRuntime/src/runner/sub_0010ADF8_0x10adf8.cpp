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

// Function: sub_0010ADF8
// Address: 0x10adf8 - 0x10ae40
void sub_0010ADF8_0x10adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ADF8_0x10adf8");
#endif

    switch (ctx->pc) {
        case 0x10ae34u: goto label_10ae34;
        default: break;
    }

    ctx->pc = 0x10adf8u;

    // 0x10adf8: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x10adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x10adfc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ae00: 0x24638a40  addiu       $v1, $v1, -0x75C0
    ctx->pc = 0x10ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937152));
    // 0x10ae04: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10ae08: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x10ae08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x10ae0c: 0x24824280  addiu       $v0, $a0, 0x4280
    ctx->pc = 0x10ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 17024));
    // 0x10ae10: 0xac834280  sw          $v1, 0x4280($a0)
    ctx->pc = 0x10ae10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B4280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4280u, _value); } while (0);
    // 0x10ae14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ae14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ae18: 0x24a58eb8  addiu       $a1, $a1, -0x7148
    ctx->pc = 0x10ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938296));
    // 0x10ae1c: 0x24c6adc8  addiu       $a2, $a2, -0x5238
    ctx->pc = 0x10ae1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946248));
    // 0x10ae20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ae24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae28: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x10ae28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6B4284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4284u, _value); } while (0);
    // 0x10ae2c: 0xc0bb60a  jal         func_2ED828
    ctx->pc = 0x10AE2Cu;
    SET_GPR_U32(ctx, 31, 0x10AE34u);
    ctx->pc = 0x10AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE2Cu;
    // 0x10ae30: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED828u, 0x10AE2Cu, 0x10AE34u)) {
        return;
    }
    ctx->pc = 0x10AE34u;
label_10ae34:
    // 0x10ae34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ae34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ae38: 0x3e00008  jr          $ra
    ctx->pc = 0x10AE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE38u;
        // 0x10ae3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AE40u;
}
