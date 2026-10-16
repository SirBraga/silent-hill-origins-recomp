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

// Function: sub_001D8EA0
// Address: 0x1d8ea0 - 0x1d8ef8
void sub_001D8EA0_0x1d8ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8EA0_0x1d8ea0");
#endif

    ctx->pc = 0x1d8ea0u;

    // 0x1d8ea0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d8ea4: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D8EA4u;
    {
        const bool branch_taken_0x1d8ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8EA4u;
        // 0x1d8ea8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ea4) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8EACu;
    // 0x1d8eac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1d8eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1d8eb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000010
    // 0x1d8eb4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x1d8eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1d8eb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D8EB8u;
    {
        const bool branch_taken_0x1d8eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8eb8) {
            ctx->pc = 0x1D8EE8u;
            goto label_1d8ee8;
        }
    }
    ctx->pc = 0x1D8EC0u;
    // 0x1d8ec0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d8ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d8ec4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1d8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10000010u)); // MMIO: 0x10000010
    // 0x1d8ec8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1d8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1d8ecc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1d8eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1d8ed0: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1d8ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1d8ed4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1d8ed8: 0xac230010  sw          $v1, 0x10($at)
    ctx->pc = 0x1d8ed8u;
    runtime->Store32(rdram, ctx, 0x10000010u, GPR_U32(ctx, 3)); // MMIO: 0x10000010
    // 0x1d8edc: 0xdc829dc8  ld          $v0, -0x6238($a0)
    ctx->pc = 0x1d8edcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x339DC8u));
    // 0x1d8ee0: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x1d8ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1d8ee4: 0xfc829dc8  sd          $v0, -0x6238($a0)
    ctx->pc = 0x1d8ee4u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x339DC8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x339DC8u, _value); } while (0);
label_1d8ee8:
    // 0x1d8ee8: 0xf  sync
    ctx->pc = 0x1d8ee8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d8eec: 0x42000038  ei
    ctx->pc = 0x1d8eecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1d8ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8EF0u;
        // 0x1d8ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8EF8u;
}
