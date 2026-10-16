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

// Function: sub_00136E48
// Address: 0x136e48 - 0x136eb0
void sub_00136E48_0x136e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136E48_0x136e48");
#endif

    switch (ctx->pc) {
        case 0x136e5cu: goto label_136e5c;
        case 0x136e68u: goto label_136e68;
        default: break;
    }

    ctx->pc = 0x136e48u;

    // 0x136e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136e4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x136e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x136e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136e54: 0xc049be4  jal         func_126F90
    ctx->pc = 0x136E54u;
    SET_GPR_U32(ctx, 31, 0x136E5Cu);
    ctx->pc = 0x136E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E54u;
    // 0x136e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126F90u, 0x136E54u, 0x136E5Cu)) {
        return;
    }
    ctx->pc = 0x136E5Cu;
label_136e5c:
    // 0x136e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e60: 0xc04f0f4  jal         func_13C3D0
    ctx->pc = 0x136E60u;
    SET_GPR_U32(ctx, 31, 0x136E68u);
    ctx->pc = 0x136E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E60u;
    // 0x136e64: 0x26051880  addiu       $a1, $s0, 0x1880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3D0u, 0x136E60u, 0x136E68u)) {
        return;
    }
    ctx->pc = 0x136E68u;
label_136e68:
    // 0x136e68: 0x6a021887  ldl         $v0, 0x1887($s0)
    ctx->pc = 0x136e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x136e6c: 0x6e021880  ldr         $v0, 0x1880($s0)
    ctx->pc = 0x136e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x136e70: 0x8e031888  lw          $v1, 0x1888($s0)
    ctx->pc = 0x136e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6280)));
    // 0x136e74: 0xb2021897  sdl         $v0, 0x1897($s0)
    ctx->pc = 0x136e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136e78: 0xb6021890  sdr         $v0, 0x1890($s0)
    ctx->pc = 0x136e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136e7c: 0xae031898  sw          $v1, 0x1898($s0)
    ctx->pc = 0x136e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6296), GPR_U32(ctx, 3));
    // 0x136e80: 0x6a061897  ldl         $a2, 0x1897($s0)
    ctx->pc = 0x136e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x136e84: 0x6e061890  ldr         $a2, 0x1890($s0)
    ctx->pc = 0x136e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x136e88: 0x8e031898  lw          $v1, 0x1898($s0)
    ctx->pc = 0x136e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6296)));
    // 0x136e8c: 0xb20618a7  sdl         $a2, 0x18A7($s0)
    ctx->pc = 0x136e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136e90: 0xb60618a0  sdr         $a2, 0x18A0($s0)
    ctx->pc = 0x136e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x136e94: 0xae0318a8  sw          $v1, 0x18A8($s0)
    ctx->pc = 0x136e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6312), GPR_U32(ctx, 3));
    // 0x136e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136e9c: 0xae0218d0  sw          $v0, 0x18D0($s0)
    ctx->pc = 0x136e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6352), GPR_U32(ctx, 2));
    // 0x136ea0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x136ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x136EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EA8u;
        // 0x136eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136EB0u;
}
