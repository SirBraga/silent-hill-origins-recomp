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

// Function: sub_00258710
// Address: 0x258710 - 0x258758
void sub_00258710_0x258710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258710_0x258710");
#endif

    switch (ctx->pc) {
        case 0x258740u: goto label_258740;
        default: break;
    }

    ctx->pc = 0x258710u;

    // 0x258710: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x258710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x258714: 0x8c4241ac  lw          $v0, 0x41AC($v0)
    ctx->pc = 0x258714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41ACu));
    // 0x258718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x258718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25871c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x258720: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x258720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x258724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258728: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x258728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x25872c: 0xac2241ac  sw          $v0, 0x41AC($at)
    ctx->pc = 0x25872cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B41ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B41ACu, _value); } while (0);
    // 0x258730: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258730u;
    {
        const bool branch_taken_0x258730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258730u;
        // 0x258734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258730) {
            ctx->pc = 0x258740u;
            goto label_258740;
        }
    }
    ctx->pc = 0x258738u;
    // 0x258738: 0xc096198  jal         func_258660
    ctx->pc = 0x258738u;
    SET_GPR_U32(ctx, 31, 0x258740u);
    ctx->pc = 0x258660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258660u, 0x258738u, 0x258740u)) {
        return;
    }
    ctx->pc = 0x258740u;
label_258740:
    // 0x258740: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x258740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258748: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x258748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25874c: 0x3e00008  jr          $ra
    ctx->pc = 0x25874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25874Cu;
        // 0x258750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25874Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258754u;
    // 0x258754: 0x0  nop
    ctx->pc = 0x258754u;
    // NOP
    ctx->pc = 0x258758u;
}
