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

// Function: sub_0024C068
// Address: 0x24c068 - 0x24c0f8
void sub_0024C068_0x24c068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C068_0x24c068");
#endif

    switch (ctx->pc) {
        case 0x24c0b0u: goto label_24c0b0;
        default: break;
    }

    ctx->pc = 0x24c068u;

    // 0x24c068: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24c06c: 0x24423f68  addiu       $v0, $v0, 0x3F68
    ctx->pc = 0x24c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16232));
    // 0x24c070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c074: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c078: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x24c078u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
    // 0x24c07c: 0xaf83853c  sw          $v1, -0x7AC4($gp)
    ctx->pc = 0x24c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 3));
    // 0x24c080: 0x250841d0  addiu       $t0, $t0, 0x41D0
    ctx->pc = 0x24c080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16848));
    // 0x24c084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24c088: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x24c088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x24c08c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24c08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24c090: 0xac223f6c  sw          $v0, 0x3F6C($at)
    ctx->pc = 0x24c090u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F6Cu, _value); } while (0);
    // 0x24c094: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x24c094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24c098: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24c098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24c09c: 0xac223f68  sw          $v0, 0x3F68($at)
    ctx->pc = 0x24c09cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3F68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3F68u, _value); } while (0);
    // 0x24c0a0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x24c0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24c0a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24c0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0a8: 0xc093054  jal         func_24C150
    ctx->pc = 0x24C0A8u;
    SET_GPR_U32(ctx, 31, 0x24C0B0u);
    ctx->pc = 0x24C0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C0A8u;
    // 0x24c0ac: 0x3c090004  lui         $t1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C150u, 0x24C0A8u, 0x24C0B0u)) {
        return;
    }
    ctx->pc = 0x24C0B0u;
label_24c0b0:
    // 0x24c0b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24c0b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x24C0B4u;
    {
        const bool branch_taken_0x24c0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0B4u;
        // 0x24c0b8: 0xaf838540  sw          $v1, -0x7AC0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935872), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c0b4) {
            ctx->pc = 0x24C0E0u;
            goto label_24c0e0;
        }
    }
    ctx->pc = 0x24C0BCu;
    // 0x24c0bc: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x24c0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x24c0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c0c4: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x24c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24c0c8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x24c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x24c0cc: 0x8f848540  lw          $a0, -0x7AC0($gp)
    ctx->pc = 0x24c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935872)));
    // 0x24c0d0: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x24c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x24c0d4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x24c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x24c0d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C0D8u;
    {
        const bool branch_taken_0x24c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0D8u;
        // 0x24c0dc: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c0d8) {
            ctx->pc = 0x24C0E8u;
            goto label_24c0e8;
        }
    }
    ctx->pc = 0x24C0E0u;
label_24c0e0:
    // 0x24c0e0: 0xaf80853c  sw          $zero, -0x7AC4($gp)
    ctx->pc = 0x24c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 0));
    // 0x24c0e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24c0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c0e8:
    // 0x24c0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x24C0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C0ECu;
        // 0x24c0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C0F4u;
    // 0x24c0f4: 0x0  nop
    ctx->pc = 0x24c0f4u;
    // NOP
    ctx->pc = 0x24c0f8u;
}
