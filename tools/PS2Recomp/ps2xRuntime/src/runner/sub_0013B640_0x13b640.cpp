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

// Function: sub_0013B640
// Address: 0x13b640 - 0x13b680
void sub_0013B640_0x13b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B640_0x13b640");
#endif

    switch (ctx->pc) {
        case 0x13b654u: goto label_13b654;
        default: break;
    }

    ctx->pc = 0x13b640u;

    // 0x13b640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b644: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13b644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13b648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b64c: 0xc04f0d0  jal         func_13C340
    ctx->pc = 0x13B64Cu;
    SET_GPR_U32(ctx, 31, 0x13B654u);
    ctx->pc = 0x13B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B64Cu;
    // 0x13b650: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C340u, 0x13B64Cu, 0x13B654u)) {
        return;
    }
    ctx->pc = 0x13B654u;
label_13b654:
    // 0x13b654: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x13b654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13b658: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x13b658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13b65c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13b660: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x13b660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b664: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x13b664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b668: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x13b668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x13b66c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x13b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x13b670: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b678: 0x3e00008  jr          $ra
    ctx->pc = 0x13B678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B678u;
        // 0x13b67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B680u;
}
