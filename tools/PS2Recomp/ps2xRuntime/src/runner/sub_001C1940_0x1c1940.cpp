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

// Function: sub_001C1940
// Address: 0x1c1940 - 0x1c1988
void sub_001C1940_0x1c1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1940_0x1c1940");
#endif

    switch (ctx->pc) {
        case 0x1c1950u: goto label_1c1950;
        case 0x1c1958u: goto label_1c1958;
        default: break;
    }

    ctx->pc = 0x1c1940u;

    // 0x1c1940: 0x8c840318  lw          $a0, 0x318($a0)
    ctx->pc = 0x1c1940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x1c1944: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1944u;
    {
        const bool branch_taken_0x1c1944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1944) {
            ctx->pc = 0x1C1980u;
            goto label_1c1980;
        }
    }
    ctx->pc = 0x1C194Cu;
    // 0x1c194c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c1950:
    // 0x1c1950: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c1950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1954: 0x0  nop
    ctx->pc = 0x1c1954u;
    // NOP
label_1c1958:
    // 0x1c1958: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1c1958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1c195c: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1c195cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1c1960: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x1c1960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1964: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x1c1964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c1968: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c1968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c196c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C196Cu;
    {
        const bool branch_taken_0x1c196c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1C1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C196Cu;
        // 0x1c1970: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c196c) {
            ctx->pc = 0x1C1958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1958;
        }
    }
    ctx->pc = 0x1C1974u;
    // 0x1c1974: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1c1974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c1978: 0x5480fff5  bnel        $a0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C1978u;
    {
        const bool branch_taken_0x1c1978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1978) {
            ctx->pc = 0x1C197Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1978u;
            // 0x1c197c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1950;
        }
    }
    ctx->pc = 0x1C1980u;
label_1c1980:
    // 0x1c1980: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1988u;
}
