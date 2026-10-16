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

// Function: sub_0012BC60
// Address: 0x12bc60 - 0x12bce0
void sub_0012BC60_0x12bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BC60_0x12bc60");
#endif

    switch (ctx->pc) {
        case 0x12bc78u: goto label_12bc78;
        case 0x12bc80u: goto label_12bc80;
        case 0x12bca0u: goto label_12bca0;
        case 0x12bcc0u: goto label_12bcc0;
        case 0x12bcd0u: goto label_12bcd0;
        default: break;
    }

    ctx->pc = 0x12bc60u;

    // 0x12bc60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12bc64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12bc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12bc68: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x12bc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x12bc6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12bc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12bc70: 0xc049214  jal         func_124850
    ctx->pc = 0x12BC70u;
    SET_GPR_U32(ctx, 31, 0x12BC78u);
    ctx->pc = 0x12BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC70u;
    // 0x12bc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x124850u, 0x12BC70u, 0x12BC78u)) {
        return;
    }
    ctx->pc = 0x12BC78u;
label_12bc78:
    // 0x12bc78: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x12BC78u;
    SET_GPR_U32(ctx, 31, 0x12BC80u);
    ctx->pc = 0x12BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC78u;
    // 0x12bc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12BC78u, 0x12BC80u)) {
        return;
    }
    ctx->pc = 0x12BC80u;
label_12bc80:
    // 0x12bc80: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x12bc80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12bc84: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x12bc84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12bc88: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x12bc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12bc8c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x12bc8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12bc90: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x12bc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12bc94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc98: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x12BC98u;
    SET_GPR_U32(ctx, 31, 0x12BCA0u);
    ctx->pc = 0x12BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC98u;
    // 0x12bc9c: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x12BC98u, 0x12BCA0u)) {
        return;
    }
    ctx->pc = 0x12BCA0u;
label_12bca0:
    // 0x12bca0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x12bca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12bca4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x12bca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12bca8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x12bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12bcac: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x12bcacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12bcb0: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x12bcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12bcb4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12bcb8: 0xc0561b6  jal         func_1586D8
    ctx->pc = 0x12BCB8u;
    SET_GPR_U32(ctx, 31, 0x12BCC0u);
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x12BCB8u, 0x12BCC0u)) {
        return;
    }
    ctx->pc = 0x12BCC0u;
label_12bcc0:
    // 0x12bcc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12bcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12bcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcc8: 0xc055d54  jal         func_157550
    ctx->pc = 0x12BCC8u;
    SET_GPR_U32(ctx, 31, 0x12BCD0u);
    ctx->pc = 0x12BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCC8u;
    // 0x12bccc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x157550u, 0x12BCC8u, 0x12BCD0u)) {
        return;
    }
    ctx->pc = 0x12BCD0u;
label_12bcd0:
    // 0x12bcd0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12bcd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12bcd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12bcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCD8u;
        // 0x12bcdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BCE0u;
}
