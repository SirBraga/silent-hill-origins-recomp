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

// Function: sub_00252BD0
// Address: 0x252bd0 - 0x252c48
void sub_00252BD0_0x252bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252BD0_0x252bd0");
#endif

    switch (ctx->pc) {
        case 0x252c34u: goto label_252c34;
        default: break;
    }

    ctx->pc = 0x252bd0u;

    // 0x252bd0: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x252bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x252bd4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252bd8: 0x24a35618  addiu       $v1, $a1, 0x5618
    ctx->pc = 0x252bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 22040));
    // 0x252bdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x252bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x252be0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x252be0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x73561Cu));
    // 0x252be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252bec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x252becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252bf0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x252bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x252bf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252bf8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x252bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x252bfc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x252bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x252c00: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x252c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x252c04: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x252c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x252c08: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x252c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x252c0c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x252c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x252c10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x252c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x252c14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x252c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x252c18: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x252c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x252c1c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x252c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x252c20: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x252c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x735638u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735638u, _value); } while (0);
    // 0x252c24: 0xacb05618  sw          $s0, 0x5618($a1)
    ctx->pc = 0x252c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x735618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735618u, _value); } while (0);
    // 0x252c28: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x252c28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x735628u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735628u, _value); } while (0);
    // 0x252c2c: 0xc094a46  jal         func_252918
    ctx->pc = 0x252C2Cu;
    SET_GPR_U32(ctx, 31, 0x252C34u);
    ctx->pc = 0x252C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C2Cu;
    // 0x252c30: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x252918u, 0x252C2Cu, 0x252C34u)) {
        return;
    }
    ctx->pc = 0x252C34u;
label_252c34:
    // 0x252c34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x252c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252c3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x252c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252c40: 0x3e00008  jr          $ra
    ctx->pc = 0x252C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C40u;
        // 0x252c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252C48u;
}
