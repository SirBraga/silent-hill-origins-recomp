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

// Function: sub_00231570
// Address: 0x231570 - 0x2315c8
void sub_00231570_0x231570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231570_0x231570");
#endif

    ctx->pc = 0x231570u;

    // 0x231570: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x231570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x231574: 0x8c423f20  lw          $v0, 0x3F20($v0)
    ctx->pc = 0x231574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3F20u));
    // 0x231578: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x231578u;
    {
        const bool branch_taken_0x231578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231578) {
            ctx->pc = 0x2315BCu;
            goto label_2315bc;
        }
    }
    ctx->pc = 0x231580u;
    // 0x231580: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x231580u;
    {
        const bool branch_taken_0x231580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x231580) {
            ctx->pc = 0x231584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231580u;
            // 0x231584: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23159Cu;
            goto label_23159c;
        }
    }
    ctx->pc = 0x231588u;
    // 0x231588: 0x3c014b7f  lui         $at, 0x4B7F
    ctx->pc = 0x231588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19327 << 16));
    // 0x23158c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x23158cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x231590: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231594u;
    {
        const bool branch_taken_0x231594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231594u;
        // 0x231598: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231594) {
            ctx->pc = 0x2315A8u;
            goto label_2315a8;
        }
    }
    ctx->pc = 0x23159Cu;
label_23159c:
    // 0x23159c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x23159cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2315a0: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2315a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2315a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2315a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2315a8:
    // 0x2315a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2315a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2315ac: 0xaf8284cc  sw          $v0, -0x7B34($gp)
    ctx->pc = 0x2315acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935756), GPR_U32(ctx, 2));
    // 0x2315b0: 0xe4600fe0  swc1        $f0, 0xFE0($v1)
    ctx->pc = 0x2315b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x730FE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x730FE0u, _value); } while (0); }
    // 0x2315b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2315B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2315B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315B4u;
        // 0x2315b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2315B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2315BCu;
label_2315bc:
    // 0x2315bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2315BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2315C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315BCu;
        // 0x2315c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2315BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2315C4u;
    // 0x2315c4: 0x0  nop
    ctx->pc = 0x2315c4u;
    // NOP
    ctx->pc = 0x2315c8u;
}
