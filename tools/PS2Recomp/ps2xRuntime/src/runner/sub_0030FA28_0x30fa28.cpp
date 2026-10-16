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

// Function: sub_0030FA28
// Address: 0x30fa28 - 0x30faa0
void sub_0030FA28_0x30fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030FA28_0x30fa28");
#endif

    switch (ctx->pc) {
        case 0x30fa58u: goto label_30fa58;
        default: break;
    }

    ctx->pc = 0x30fa28u;

    // 0x30fa28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30fa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30fa2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x30fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x30fa30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30fa34: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x30fa34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30fa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30fa3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30fa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30fa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30fa44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30fa44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa48: 0xc44c3de4  lwc1        $f12, 0x3DE4($v0)
    ctx->pc = 0x30fa48u;
    { uint32_t bits = FAST_READ32(0x6B3DE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30fa4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30fa4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa50: 0xc0c400c  jal         func_310030
    ctx->pc = 0x30FA50u;
    SET_GPR_U32(ctx, 31, 0x30FA58u);
    ctx->pc = 0x30FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FA50u;
    // 0x30fa54: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x310030u, 0x30FA50u, 0x30FA58u)) {
        return;
    }
    ctx->pc = 0x30FA58u;
label_30fa58:
    // 0x30fa58: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x30fa58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30fa5c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x30fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30fa60: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x30fa60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x30fa64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30fa64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa68: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x30fa68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x30fa6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30fa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30fa70: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x30fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30fa74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30fa74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fa78: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30fa7c: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x30fa7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30fa80: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x30fa80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30fa84: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x30fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30fa88: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x30fa88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30fa8c: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x30fa8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30fa90: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x30fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x30fa94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30fa94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fa98: 0x3e00008  jr          $ra
    ctx->pc = 0x30FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA98u;
        // 0x30fa9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FAA0u;
}
