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

// Function: sub_0030F8D8
// Address: 0x30f8d8 - 0x30f978
void sub_0030F8D8_0x30f8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F8D8_0x30f8d8");
#endif

    switch (ctx->pc) {
        case 0x30f90cu: goto label_30f90c;
        default: break;
    }

    ctx->pc = 0x30f8d8u;

    // 0x30f8d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30f8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30f8dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30f8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30f8e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30f8e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30f8e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f8ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30f8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30f8f0: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x30f8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x30f8f4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x30f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x30f8f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30f8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x30f8fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F8FCu;
    {
        const bool branch_taken_0x30f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8FCu;
        // 0x30f900: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8fc) {
            ctx->pc = 0x30F90Cu;
            goto label_30f90c;
        }
    }
    ctx->pc = 0x30F904u;
    // 0x30f904: 0xc0c3fa4  jal         func_30FE90
    ctx->pc = 0x30F904u;
    SET_GPR_U32(ctx, 31, 0x30F90Cu);
    ctx->pc = 0x30F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F904u;
    // 0x30f908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30FE90u, 0x30F904u, 0x30F90Cu)) {
        return;
    }
    ctx->pc = 0x30F90Cu;
label_30f90c:
    // 0x30f90c: 0x6a02007b  ldl         $v0, 0x7B($s0)
    ctx->pc = 0x30f90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x30f910: 0x6e020074  ldr         $v0, 0x74($s0)
    ctx->pc = 0x30f910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30f914: 0x6a030083  ldl         $v1, 0x83($s0)
    ctx->pc = 0x30f914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30f918: 0x6e03007c  ldr         $v1, 0x7C($s0)
    ctx->pc = 0x30f918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30f91c: 0x6a04008b  ldl         $a0, 0x8B($s0)
    ctx->pc = 0x30f91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x30f920: 0x6e040084  ldr         $a0, 0x84($s0)
    ctx->pc = 0x30f920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x30f924: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x30f924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x30f928: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x30f928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f92c: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x30f92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f930: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x30f930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f934: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x30f934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f938: 0xb2240017  sdl         $a0, 0x17($s1)
    ctx->pc = 0x30f938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f93c: 0xb6240010  sdr         $a0, 0x10($s1)
    ctx->pc = 0x30f93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f940: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x30f940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
    // 0x30f944: 0x6a02006f  ldl         $v0, 0x6F($s0)
    ctx->pc = 0x30f944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x30f948: 0x6e020068  ldr         $v0, 0x68($s0)
    ctx->pc = 0x30f948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30f94c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x30f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x30f950: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x30f950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f954: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x30f954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30f958: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x30f958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x30f95c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30f95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f960: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x30f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f964: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30f964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f968: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30f968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f970: 0x3e00008  jr          $ra
    ctx->pc = 0x30F970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F970u;
        // 0x30f974: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F978u;
}
