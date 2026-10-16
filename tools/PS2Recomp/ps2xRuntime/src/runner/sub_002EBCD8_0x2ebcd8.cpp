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

// Function: sub_002EBCD8
// Address: 0x2ebcd8 - 0x2ebd78
void sub_002EBCD8_0x2ebcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBCD8_0x2ebcd8");
#endif

    switch (ctx->pc) {
        case 0x2ebcf0u: goto label_2ebcf0;
        case 0x2ebd08u: goto label_2ebd08;
        default: break;
    }

    ctx->pc = 0x2ebcd8u;

    // 0x2ebcd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ebcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ebcdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ebcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ebce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebce8: 0xc0bab48  jal         func_2EAD20
    ctx->pc = 0x2EBCE8u;
    SET_GPR_U32(ctx, 31, 0x2EBCF0u);
    ctx->pc = 0x2EBCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBCE8u;
    // 0x2ebcec: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EAD20u, 0x2EBCE8u, 0x2EBCF0u)) {
        return;
    }
    ctx->pc = 0x2EBCF0u;
label_2ebcf0:
    // 0x2ebcf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ebcf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebcf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ebcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCFCu;
        // 0x2ebd00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBD04u;
    // 0x2ebd04: 0x0  nop
    ctx->pc = 0x2ebd04u;
    // NOP
label_2ebd08:
    // 0x2ebd08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebd08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd0c: 0x684313ef  ldl         $v1, 0x13EF($v0)
    ctx->pc = 0x2ebd0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ebd10: 0x6c4313e8  ldr         $v1, 0x13E8($v0)
    ctx->pc = 0x2ebd10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5096); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ebd14: 0x684413f7  ldl         $a0, 0x13F7($v0)
    ctx->pc = 0x2ebd14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ebd18: 0x6c4413f0  ldr         $a0, 0x13F0($v0)
    ctx->pc = 0x2ebd18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ebd1c: 0x684513ff  ldl         $a1, 0x13FF($v0)
    ctx->pc = 0x2ebd1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2ebd20: 0x6c4513f8  ldr         $a1, 0x13F8($v0)
    ctx->pc = 0x2ebd20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2ebd24: 0x68471407  ldl         $a3, 0x1407($v0)
    ctx->pc = 0x2ebd24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ebd28: 0x6c471400  ldr         $a3, 0x1400($v0)
    ctx->pc = 0x2ebd28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ebd2c: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x2ebd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd30: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x2ebd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd34: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x2ebd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd38: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x2ebd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd3c: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x2ebd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd40: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x2ebd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd44: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x2ebd44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd48: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x2ebd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd4c: 0x6843140f  ldl         $v1, 0x140F($v0)
    ctx->pc = 0x2ebd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ebd50: 0x6c431408  ldr         $v1, 0x1408($v0)
    ctx->pc = 0x2ebd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ebd54: 0x68441417  ldl         $a0, 0x1417($v0)
    ctx->pc = 0x2ebd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ebd58: 0x6c441410  ldr         $a0, 0x1410($v0)
    ctx->pc = 0x2ebd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 5136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ebd5c: 0xb0c30027  sdl         $v1, 0x27($a2)
    ctx->pc = 0x2ebd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd60: 0xb4c30020  sdr         $v1, 0x20($a2)
    ctx->pc = 0x2ebd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd64: 0xb0c4002f  sdl         $a0, 0x2F($a2)
    ctx->pc = 0x2ebd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd68: 0xb4c40028  sdr         $a0, 0x28($a2)
    ctx->pc = 0x2ebd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ebd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBD74u;
    // 0x2ebd74: 0x0  nop
    ctx->pc = 0x2ebd74u;
    // NOP
    ctx->pc = 0x2ebd78u;
}
