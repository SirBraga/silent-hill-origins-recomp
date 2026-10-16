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

// Function: sub_0013C8B0
// Address: 0x13c8b0 - 0x13cbf0
void sub_0013C8B0_0x13c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C8B0_0x13c8b0");
#endif

    switch (ctx->pc) {
        case 0x13c8f0u: goto label_13c8f0;
        case 0x13c8f8u: goto label_13c8f8;
        case 0x13c904u: goto label_13c904;
        case 0x13c914u: goto label_13c914;
        case 0x13c9a4u: goto label_13c9a4;
        case 0x13c9b4u: goto label_13c9b4;
        case 0x13c9c4u: goto label_13c9c4;
        case 0x13c9ccu: goto label_13c9cc;
        case 0x13ca3cu: goto label_13ca3c;
        case 0x13ca8cu: goto label_13ca8c;
        case 0x13caacu: goto label_13caac;
        case 0x13caecu: goto label_13caec;
        case 0x13caf8u: goto label_13caf8;
        case 0x13cb04u: goto label_13cb04;
        case 0x13cb18u: goto label_13cb18;
        case 0x13cb20u: goto label_13cb20;
        case 0x13cb2cu: goto label_13cb2c;
        case 0x13cb38u: goto label_13cb38;
        default: break;
    }

    ctx->pc = 0x13c8b0u;

    // 0x13c8b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13c8b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x13c8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x13c8b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x13c8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x13c8bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x13c8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x13c8c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13c8c8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x13c8c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x13c8cc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x13c8ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x13c8d0: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x13c8d4: 0x544000be  bnel        $v0, $zero, . + 4 + (0xBE << 2)
    ctx->pc = 0x13C8D4u;
    {
        const bool branch_taken_0x13c8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c8d4) {
            ctx->pc = 0x13C8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C8D4u;
            // 0x13c8d8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CBD0u;
            goto label_13cbd0;
        }
    }
    ctx->pc = 0x13C8DCu;
    // 0x13c8dc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x13c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x13c8e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C8E0u;
    {
        const bool branch_taken_0x13c8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c8e0) {
            ctx->pc = 0x13C8F0u;
            goto label_13c8f0;
        }
    }
    ctx->pc = 0x13C8E8u;
    // 0x13c8e8: 0xc04f54c  jal         func_13D530
    ctx->pc = 0x13C8E8u;
    SET_GPR_U32(ctx, 31, 0x13C8F0u);
    ctx->pc = 0x13D530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13D530u, 0x13C8E8u, 0x13C8F0u)) {
        return;
    }
    ctx->pc = 0x13C8F0u;
label_13c8f0:
    // 0x13c8f0: 0xc0954b8  jal         func_2552E0
    ctx->pc = 0x13C8F0u;
    SET_GPR_U32(ctx, 31, 0x13C8F8u);
    ctx->pc = 0x2552E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2552E0u, 0x13C8F0u, 0x13C8F8u)) {
        return;
    }
    ctx->pc = 0x13C8F8u;
label_13c8f8:
    // 0x13c8f8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13c8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13c8fc: 0xc089892  jal         func_226248
    ctx->pc = 0x13C8FCu;
    SET_GPR_U32(ctx, 31, 0x13C904u);
    ctx->pc = 0x13C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C8FCu;
    // 0x13c900: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x13C8FCu, 0x13C904u)) {
        return;
    }
    ctx->pc = 0x13C904u;
label_13c904:
    // 0x13c904: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x13c904u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x13c908: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x13c908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x13c90c: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x13C90Cu;
    SET_GPR_U32(ctx, 31, 0x13C914u);
    ctx->pc = 0x13C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C90Cu;
    // 0x13c910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x13C90Cu, 0x13C914u)) {
        return;
    }
    ctx->pc = 0x13C914u;
label_13c914:
    // 0x13c914: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x13c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13c918: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13c918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c91c: 0x68620017  ldl         $v0, 0x17($v1)
    ctx->pc = 0x13c91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13c920: 0x6c620010  ldr         $v0, 0x10($v1)
    ctx->pc = 0x13c920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13c924: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x13c924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13c928: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x13c928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13c92c: 0x68670027  ldl         $a3, 0x27($v1)
    ctx->pc = 0x13c92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13c930: 0x6c670020  ldr         $a3, 0x20($v1)
    ctx->pc = 0x13c930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13c934: 0x6868002f  ldl         $t0, 0x2F($v1)
    ctx->pc = 0x13c934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x13c938: 0x6c680028  ldr         $t0, 0x28($v1)
    ctx->pc = 0x13c938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13c93c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x13c93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c940: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x13c940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c944: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x13c944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c948: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x13c948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c94c: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x13c94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c950: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x13c950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c954: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x13c954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c958: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x13c958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c95c: 0x68620037  ldl         $v0, 0x37($v1)
    ctx->pc = 0x13c95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13c960: 0x6c620030  ldr         $v0, 0x30($v1)
    ctx->pc = 0x13c960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13c964: 0x6866003f  ldl         $a2, 0x3F($v1)
    ctx->pc = 0x13c964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13c968: 0x6c660038  ldr         $a2, 0x38($v1)
    ctx->pc = 0x13c968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13c96c: 0x68670047  ldl         $a3, 0x47($v1)
    ctx->pc = 0x13c96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13c970: 0x6c670040  ldr         $a3, 0x40($v1)
    ctx->pc = 0x13c970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13c974: 0x6868004f  ldl         $t0, 0x4F($v1)
    ctx->pc = 0x13c974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x13c978: 0x6c680048  ldr         $t0, 0x48($v1)
    ctx->pc = 0x13c978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x13c97c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x13c97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c980: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x13c980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c984: 0xb3a6002f  sdl         $a2, 0x2F($sp)
    ctx->pc = 0x13c984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c988: 0xb7a60028  sdr         $a2, 0x28($sp)
    ctx->pc = 0x13c988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c98c: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x13c98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c990: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x13c990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c994: 0xb3a8003f  sdl         $t0, 0x3F($sp)
    ctx->pc = 0x13c994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c998: 0xb7a80038  sdr         $t0, 0x38($sp)
    ctx->pc = 0x13c998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13c99c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x13C99Cu;
    SET_GPR_U32(ctx, 31, 0x13C9A4u);
    ctx->pc = 0x13C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C99Cu;
    // 0x13c9a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x13C99Cu, 0x13C9A4u)) {
        return;
    }
    ctx->pc = 0x13C9A4u;
label_13c9a4:
    // 0x13c9a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13c9a8: 0xe6000160  swc1        $f0, 0x160($s0)
    ctx->pc = 0x13c9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
    // 0x13c9ac: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x13C9ACu;
    SET_GPR_U32(ctx, 31, 0x13C9B4u);
    ctx->pc = 0x13C9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C9ACu;
    // 0x13c9b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x13C9ACu, 0x13C9B4u)) {
        return;
    }
    ctx->pc = 0x13C9B4u;
label_13c9b4:
    // 0x13c9b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13c9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13c9b8: 0xe6000164  swc1        $f0, 0x164($s0)
    ctx->pc = 0x13c9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 356), bits); }
    // 0x13c9bc: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x13C9BCu;
    SET_GPR_U32(ctx, 31, 0x13C9C4u);
    ctx->pc = 0x13C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C9BCu;
    // 0x13c9c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x13C9BCu, 0x13C9C4u)) {
        return;
    }
    ctx->pc = 0x13C9C4u;
label_13c9c4:
    // 0x13c9c4: 0xc0b5bec  jal         func_2D6FB0
    ctx->pc = 0x13C9C4u;
    SET_GPR_U32(ctx, 31, 0x13C9CCu);
    ctx->pc = 0x13C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C9C4u;
    // 0x13c9c8: 0xe6000168  swc1        $f0, 0x168($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6FB0u, 0x13C9C4u, 0x13C9CCu)) {
        return;
    }
    ctx->pc = 0x13C9CCu;
label_13c9cc:
    // 0x13c9cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13c9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9d0: 0x8e030140  lw          $v1, 0x140($s0)
    ctx->pc = 0x13c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x13c9d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C9D4u;
    {
        const bool branch_taken_0x13c9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9D4u;
        // 0x13c9d8: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9d4) {
            ctx->pc = 0x13C9F0u;
            goto label_13c9f0;
        }
    }
    ctx->pc = 0x13C9DCu;
    // 0x13c9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c9e0: 0x50620030  beql        $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x13C9E0u;
    {
        const bool branch_taken_0x13c9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c9e0) {
            ctx->pc = 0x13C9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C9E0u;
            // 0x13c9e4: 0xc60c0144  lwc1        $f12, 0x144($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CAA4u;
            goto label_13caa4;
        }
    }
    ctx->pc = 0x13C9E8u;
    // 0x13c9e8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x13C9E8u;
    {
        const bool branch_taken_0x13c9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9E8u;
        // 0x13c9ec: 0xc60c016c  lwc1        $f12, 0x16C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9e8) {
            ctx->pc = 0x13CAE4u;
            goto label_13cae4;
        }
    }
    ctx->pc = 0x13C9F0u;
label_13c9f0:
    // 0x13c9f0: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x13c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x13c9f4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x13C9F4u;
    {
        const bool branch_taken_0x13c9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9f4) {
            ctx->pc = 0x13C9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C9F4u;
            // 0x13c9f8: 0xc6010148  lwc1        $f1, 0x148($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13CA50u;
            goto label_13ca50;
        }
    }
    ctx->pc = 0x13C9FCu;
    // 0x13c9fc: 0xc6010160  lwc1        $f1, 0x160($s0)
    ctx->pc = 0x13c9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ca00: 0xc6020164  lwc1        $f2, 0x164($s0)
    ctx->pc = 0x13ca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ca04: 0xc6030168  lwc1        $f3, 0x168($s0)
    ctx->pc = 0x13ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ca08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13ca08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13ca0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ca0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ca10: 0x0  nop
    ctx->pc = 0x13ca10u;
    // NOP
    // 0x13ca14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13ca14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ca18: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x13ca18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13ca1c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x13ca1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13ca20: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x13ca20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13ca24: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x13ca24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x13ca28: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x13ca28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x13ca2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ca2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca30: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x13ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13ca34: 0xc0aa07e  jal         func_2A81F8
    ctx->pc = 0x13CA34u;
    SET_GPR_U32(ctx, 31, 0x13CA3Cu);
    ctx->pc = 0x13CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA34u;
    // 0x13ca38: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A81F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A81F8u, 0x13CA34u, 0x13CA3Cu)) {
        return;
    }
    ctx->pc = 0x13CA3Cu;
label_13ca3c:
    // 0x13ca3c: 0xc6000160  lwc1        $f0, 0x160($s0)
    ctx->pc = 0x13ca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ca40: 0xc6010164  lwc1        $f1, 0x164($s0)
    ctx->pc = 0x13ca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ca44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13CA44u;
    {
        const bool branch_taken_0x13ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA44u;
        // 0x13ca48: 0xc6020168  lwc1        $f2, 0x168($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca44) {
            ctx->pc = 0x13CA98u;
            goto label_13ca98;
        }
    }
    ctx->pc = 0x13CA4Cu;
    // 0x13ca4c: 0x0  nop
    ctx->pc = 0x13ca4cu;
    // NOP
label_13ca50:
    // 0x13ca50: 0xc602014c  lwc1        $f2, 0x14C($s0)
    ctx->pc = 0x13ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ca54: 0xc6030150  lwc1        $f3, 0x150($s0)
    ctx->pc = 0x13ca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ca58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13ca58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13ca5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ca5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ca60: 0x0  nop
    ctx->pc = 0x13ca60u;
    // NOP
    // 0x13ca64: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13ca64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ca68: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x13ca68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13ca6c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x13ca6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13ca70: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x13ca70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13ca74: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x13ca74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x13ca78: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x13ca78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x13ca7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13ca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca80: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x13ca80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13ca84: 0xc0aa07e  jal         func_2A81F8
    ctx->pc = 0x13CA84u;
    SET_GPR_U32(ctx, 31, 0x13CA8Cu);
    ctx->pc = 0x13CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CA84u;
    // 0x13ca88: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A81F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A81F8u, 0x13CA84u, 0x13CA8Cu)) {
        return;
    }
    ctx->pc = 0x13CA8Cu;
label_13ca8c:
    // 0x13ca8c: 0xc6000148  lwc1        $f0, 0x148($s0)
    ctx->pc = 0x13ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ca90: 0xc601014c  lwc1        $f1, 0x14C($s0)
    ctx->pc = 0x13ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ca94: 0xc6020150  lwc1        $f2, 0x150($s0)
    ctx->pc = 0x13ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13ca98:
    // 0x13ca98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13ca98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13ca9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13CA9Cu;
    {
        const bool branch_taken_0x13ca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA9Cu;
        // 0x13caa0: 0x46020502  mul.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca9c) {
            ctx->pc = 0x13CAE0u;
            goto label_13cae0;
        }
    }
    ctx->pc = 0x13CAA4u;
label_13caa4:
    // 0x13caa4: 0xc0aa40e  jal         func_2A9038
    ctx->pc = 0x13CAA4u;
    SET_GPR_U32(ctx, 31, 0x13CAACu);
    ctx->pc = 0x13CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAA4u;
    // 0x13caa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9038u, 0x13CAA4u, 0x13CAACu)) {
        return;
    }
    ctx->pc = 0x13CAACu;
label_13caac:
    // 0x13caac: 0xc6150144  lwc1        $f21, 0x144($s0)
    ctx->pc = 0x13caacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13cab0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x13cab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x13cab4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x13cab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x13cab8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13cab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13cabc: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x13cabcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x13cac0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x13cac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x13cac4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13cac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13cac8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x13cac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x13cacc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13caccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13cad0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x13cad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x13cad4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x13cad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x13cad8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13cad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13cadc: 0x46020503  div.s       $f20, $f0, $f2
    ctx->pc = 0x13cadcu;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
label_13cae0:
    // 0x13cae0: 0xc60c016c  lwc1        $f12, 0x16C($s0)
    ctx->pc = 0x13cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13cae4:
    // 0x13cae4: 0xc0aa77a  jal         func_2A9DE8
    ctx->pc = 0x13CAE4u;
    SET_GPR_U32(ctx, 31, 0x13CAECu);
    ctx->pc = 0x13CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAE4u;
    // 0x13cae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9DE8u, 0x13CAE4u, 0x13CAECu)) {
        return;
    }
    ctx->pc = 0x13CAECu;
label_13caec:
    // 0x13caec: 0xc60c0170  lwc1        $f12, 0x170($s0)
    ctx->pc = 0x13caecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13caf0: 0xc0aa756  jal         func_2A9D58
    ctx->pc = 0x13CAF0u;
    SET_GPR_U32(ctx, 31, 0x13CAF8u);
    ctx->pc = 0x13CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAF0u;
    // 0x13caf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9D58u, 0x13CAF0u, 0x13CAF8u)) {
        return;
    }
    ctx->pc = 0x13CAF8u;
label_13caf8:
    // 0x13caf8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x13caf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x13cafc: 0xc0aa71a  jal         func_2A9C68
    ctx->pc = 0x13CAFCu;
    SET_GPR_U32(ctx, 31, 0x13CB04u);
    ctx->pc = 0x13CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAFCu;
    // 0x13cb00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C68u, 0x13CAFCu, 0x13CB04u)) {
        return;
    }
    ctx->pc = 0x13CB04u;
label_13cb04:
    // 0x13cb04: 0xc60c0174  lwc1        $f12, 0x174($s0)
    ctx->pc = 0x13cb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13cb08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13cb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13cb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb10: 0xc0acb62  jal         func_2B2D88
    ctx->pc = 0x13CB10u;
    SET_GPR_U32(ctx, 31, 0x13CB18u);
    ctx->pc = 0x13CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CB10u;
    // 0x13cb14: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2D88u, 0x13CB10u, 0x13CB18u)) {
        return;
    }
    ctx->pc = 0x13CB18u;
label_13cb18:
    // 0x13cb18: 0xc0b5b70  jal         func_2D6DC0
    ctx->pc = 0x13CB18u;
    SET_GPR_U32(ctx, 31, 0x13CB20u);
    ctx->pc = 0x13CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CB18u;
    // 0x13cb1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6DC0u, 0x13CB18u, 0x13CB20u)) {
        return;
    }
    ctx->pc = 0x13CB20u;
label_13cb20:
    // 0x13cb20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13cb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb24: 0xc0b5c00  jal         func_2D7000
    ctx->pc = 0x13CB24u;
    SET_GPR_U32(ctx, 31, 0x13CB2Cu);
    ctx->pc = 0x13CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CB24u;
    // 0x13cb28: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7000u, 0x13CB24u, 0x13CB2Cu)) {
        return;
    }
    ctx->pc = 0x13CB2Cu;
label_13cb2c:
    // 0x13cb2c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x13cb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x13cb30: 0xc0b5c9e  jal         func_2D7278
    ctx->pc = 0x13CB30u;
    SET_GPR_U32(ctx, 31, 0x13CB38u);
    ctx->pc = 0x13CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CB30u;
    // 0x13cb34: 0x8e0500f4  lw          $a1, 0xF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7278u, 0x13CB30u, 0x13CB38u)) {
        return;
    }
    ctx->pc = 0x13CB38u;
label_13cb38:
    // 0x13cb38: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x13cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x13cb3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13cb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13cb40: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x13cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13cb44: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13cb48: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x13cb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13cb4c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x13cb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13cb50: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x13cb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13cb54: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x13cb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13cb58: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x13cb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13cb5c: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x13cb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13cb60: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x13cb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13cb64: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x13cb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13cb68: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x13cb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cb6c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x13cb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cb70: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x13cb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cb74: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x13cb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cb78: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x13cb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cb7c: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x13cb7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cb80: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x13cb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cb84: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x13cb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cb88: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x13cb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13cb8c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x13cb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x13cb90: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x13cb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13cb94: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x13cb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13cb98: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x13cb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13cb9c: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x13cb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13cba0: 0x6ba7003f  ldl         $a3, 0x3F($sp)
    ctx->pc = 0x13cba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x13cba4: 0x6fa70038  ldr         $a3, 0x38($sp)
    ctx->pc = 0x13cba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x13cba8: 0xb0620027  sdl         $v0, 0x27($v1)
    ctx->pc = 0x13cba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cbac: 0xb4620020  sdr         $v0, 0x20($v1)
    ctx->pc = 0x13cbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cbb0: 0xb064002f  sdl         $a0, 0x2F($v1)
    ctx->pc = 0x13cbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cbb4: 0xb4640028  sdr         $a0, 0x28($v1)
    ctx->pc = 0x13cbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cbb8: 0xb0660037  sdl         $a2, 0x37($v1)
    ctx->pc = 0x13cbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cbbc: 0xb4660030  sdr         $a2, 0x30($v1)
    ctx->pc = 0x13cbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cbc0: 0xb067003f  sdl         $a3, 0x3F($v1)
    ctx->pc = 0x13cbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cbc4: 0xb4670038  sdr         $a3, 0x38($v1)
    ctx->pc = 0x13cbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13cbc8: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x13cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x13cbcc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x13cbccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13cbd0:
    // 0x13cbd0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x13cbd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13cbd4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x13cbd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13cbd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13cbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13cbdc: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x13cbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13cbe0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x13cbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13cbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x13CBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBE4u;
        // 0x13cbe8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CBECu;
    // 0x13cbec: 0x0  nop
    ctx->pc = 0x13cbecu;
    // NOP
    ctx->pc = 0x13cbf0u;
}
