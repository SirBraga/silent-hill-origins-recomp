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

// Function: sub_00224EA8
// Address: 0x224ea8 - 0x224ef0
void sub_00224EA8_0x224ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224EA8_0x224ea8");
#endif

    switch (ctx->pc) {
        case 0x224edcu: goto label_224edc;
        default: break;
    }

    ctx->pc = 0x224ea8u;

    // 0x224ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224eac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x224eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224eb8: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x224eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x224ebc: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x224ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x224ec0: 0xb202007f  sdl         $v0, 0x7F($s0)
    ctx->pc = 0x224ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224ec4: 0xb6020078  sdr         $v0, 0x78($s0)
    ctx->pc = 0x224ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224ec8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x224ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224ecc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x224ECCu;
    {
        const bool branch_taken_0x224ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x224ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224ECCu;
        // 0x224ed0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ecc) {
            ctx->pc = 0x224EE0u;
            goto label_224ee0;
        }
    }
    ctx->pc = 0x224ED4u;
    // 0x224ed4: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x224ED4u;
    SET_GPR_U32(ctx, 31, 0x224EDCu);
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x224ED4u, 0x224EDCu)) {
        return;
    }
    ctx->pc = 0x224EDCu;
label_224edc:
    // 0x224edc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224ee0:
    // 0x224ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224ee4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x224ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x224EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EE8u;
        // 0x224eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224EF0u;
}
