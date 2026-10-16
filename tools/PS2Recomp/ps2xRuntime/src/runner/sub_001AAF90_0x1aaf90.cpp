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

// Function: sub_001AAF90
// Address: 0x1aaf90 - 0x1aafd0
void sub_001AAF90_0x1aaf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAF90_0x1aaf90");
#endif

    switch (ctx->pc) {
        case 0x1aafc4u: goto label_1aafc4;
        default: break;
    }

    ctx->pc = 0x1aaf90u;

    // 0x1aaf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aaf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aaf94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aaf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aaf98: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aaf98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aaf9c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1aaf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1aafa0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1aafa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1aafa4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1aafa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1aafa8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1aafa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1aafac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1aafacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aafb0: 0xb0a20027  sdl         $v0, 0x27($a1)
    ctx->pc = 0x1aafb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aafb4: 0xb4a20020  sdr         $v0, 0x20($a1)
    ctx->pc = 0x1aafb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aafb8: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x1aafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x1aafbc: 0xc06abf4  jal         func_1AAFD0
    ctx->pc = 0x1AAFBCu;
    SET_GPR_U32(ctx, 31, 0x1AAFC4u);
    ctx->pc = 0x1AAFD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AAFD0u, 0x1AAFBCu, 0x1AAFC4u)) {
        return;
    }
    ctx->pc = 0x1AAFC4u;
label_1aafc4:
    // 0x1aafc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aafc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aafc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFC8u;
        // 0x1aafcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAFD0u;
}
