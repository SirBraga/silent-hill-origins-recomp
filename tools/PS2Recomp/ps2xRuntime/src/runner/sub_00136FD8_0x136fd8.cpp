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

// Function: sub_00136FD8
// Address: 0x136fd8 - 0x137058
void sub_00136FD8_0x136fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136FD8_0x136fd8");
#endif

    switch (ctx->pc) {
        case 0x136fecu: goto label_136fec;
        case 0x136ffcu: goto label_136ffc;
        case 0x137008u: goto label_137008;
        default: break;
    }

    ctx->pc = 0x136fd8u;

    // 0x136fd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x136fdc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x136fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x136fe0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136fe4: 0xc049ad2  jal         func_126B48
    ctx->pc = 0x136FE4u;
    SET_GPR_U32(ctx, 31, 0x136FECu);
    ctx->pc = 0x136FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FE4u;
    // 0x136fe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126B48u, 0x136FE4u, 0x136FECu)) {
        return;
    }
    ctx->pc = 0x136FECu;
label_136fec:
    // 0x136fec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x136fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x136ff0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x136ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ff4: 0xc049764  jal         func_125D90
    ctx->pc = 0x136FF4u;
    SET_GPR_U32(ctx, 31, 0x136FFCu);
    ctx->pc = 0x136FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FF4u;
    // 0x136ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125D90u, 0x136FF4u, 0x136FFCu)) {
        return;
    }
    ctx->pc = 0x136FFCu;
label_136ffc:
    // 0x136ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137000: 0xc04f0f4  jal         func_13C3D0
    ctx->pc = 0x137000u;
    SET_GPR_U32(ctx, 31, 0x137008u);
    ctx->pc = 0x137004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137000u;
    // 0x137004: 0x26051880  addiu       $a1, $s0, 0x1880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3D0u, 0x137000u, 0x137008u)) {
        return;
    }
    ctx->pc = 0x137008u;
label_137008:
    // 0x137008: 0x6a021887  ldl         $v0, 0x1887($s0)
    ctx->pc = 0x137008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13700c: 0x6e021880  ldr         $v0, 0x1880($s0)
    ctx->pc = 0x13700cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x137010: 0x8e031888  lw          $v1, 0x1888($s0)
    ctx->pc = 0x137010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6280)));
    // 0x137014: 0xb2021897  sdl         $v0, 0x1897($s0)
    ctx->pc = 0x137014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137018: 0xb6021890  sdr         $v0, 0x1890($s0)
    ctx->pc = 0x137018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13701c: 0xae031898  sw          $v1, 0x1898($s0)
    ctx->pc = 0x13701cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6296), GPR_U32(ctx, 3));
    // 0x137020: 0x6a061897  ldl         $a2, 0x1897($s0)
    ctx->pc = 0x137020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x137024: 0x6e061890  ldr         $a2, 0x1890($s0)
    ctx->pc = 0x137024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x137028: 0x8e031898  lw          $v1, 0x1898($s0)
    ctx->pc = 0x137028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6296)));
    // 0x13702c: 0xb20618a7  sdl         $a2, 0x18A7($s0)
    ctx->pc = 0x13702cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137030: 0xb60618a0  sdr         $a2, 0x18A0($s0)
    ctx->pc = 0x137030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x137034: 0xae0318a8  sw          $v1, 0x18A8($s0)
    ctx->pc = 0x137034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6312), GPR_U32(ctx, 3));
    // 0x137038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13703c: 0xae02186c  sw          $v0, 0x186C($s0)
    ctx->pc = 0x13703cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6252), GPR_U32(ctx, 2));
    // 0x137040: 0xae0218d0  sw          $v0, 0x18D0($s0)
    ctx->pc = 0x137040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6352), GPR_U32(ctx, 2));
    // 0x137044: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x137044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13704c: 0x3e00008  jr          $ra
    ctx->pc = 0x13704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13704Cu;
        // 0x137050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13704Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137054u;
    // 0x137054: 0x0  nop
    ctx->pc = 0x137054u;
    // NOP
    ctx->pc = 0x137058u;
}
