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

// Function: sub_0016C3D8
// Address: 0x16c3d8 - 0x16c6d8
void sub_0016C3D8_0x16c3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C3D8_0x16c3d8");
#endif

    switch (ctx->pc) {
        case 0x16c404u: goto label_16c404;
        case 0x16c418u: goto label_16c418;
        case 0x16c438u: goto label_16c438;
        case 0x16c4d0u: goto label_16c4d0;
        case 0x16c4dcu: goto label_16c4dc;
        case 0x16c4e8u: goto label_16c4e8;
        case 0x16c504u: goto label_16c504;
        case 0x16c528u: goto label_16c528;
        case 0x16c540u: goto label_16c540;
        case 0x16c588u: goto label_16c588;
        case 0x16c5ecu: goto label_16c5ec;
        case 0x16c608u: goto label_16c608;
        case 0x16c664u: goto label_16c664;
        case 0x16c684u: goto label_16c684;
        case 0x16c6a0u: goto label_16c6a0;
        default: break;
    }

    ctx->pc = 0x16c3d8u;

    // 0x16c3d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16c3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16c3dc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x16c3e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x16c3e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c3e8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x16c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x16c3ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16c3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x16c3f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x16c3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x16c3f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16c3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16c3f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16c3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16c3fc: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16C3FCu;
    SET_GPR_U32(ctx, 31, 0x16C404u);
    ctx->pc = 0x16C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3FCu;
    // 0x16c400: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16C3FCu, 0x16C404u)) {
        return;
    }
    ctx->pc = 0x16C404u;
label_16c404:
    // 0x16c404: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x16c404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16c408: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16c408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c40c: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x16c40cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x16c410: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16C410u;
    SET_GPR_U32(ctx, 31, 0x16C418u);
    ctx->pc = 0x16C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C410u;
    // 0x16c414: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16C410u, 0x16C418u)) {
        return;
    }
    ctx->pc = 0x16C418u;
label_16c418:
    // 0x16c418: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c41c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c420: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x16C420u;
    {
        const bool branch_taken_0x16c420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C420u;
        // 0x16c424: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c420) {
            ctx->pc = 0x16C514u;
            goto label_16c514;
        }
    }
    ctx->pc = 0x16C428u;
    // 0x16c428: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x16c428u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c42c: 0x26110070  addiu       $s1, $s0, 0x70
    ctx->pc = 0x16c42cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x16c430: 0x261200b0  addiu       $s2, $s0, 0xB0
    ctx->pc = 0x16c430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x16c434: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16c434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16c438:
    // 0x16c438: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16c438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16c43c: 0x5454002c  bnel        $v0, $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x16C43Cu;
    {
        const bool branch_taken_0x16c43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x16c43c) {
            ctx->pc = 0x16C440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C43Cu;
            // 0x16c440: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C4F0u;
            goto label_16c4f0;
        }
    }
    ctx->pc = 0x16C444u;
    // 0x16c444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c448: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x16c448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x16c44c: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x16c44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x16c450: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x16c450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x16c454: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x16c454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x16c458: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x16c458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x16c45c: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x16c45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x16c460: 0x68680027  ldl         $t0, 0x27($v1)
    ctx->pc = 0x16c460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x16c464: 0x6c680020  ldr         $t0, 0x20($v1)
    ctx->pc = 0x16c464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x16c468: 0xb2020077  sdl         $v0, 0x77($s0)
    ctx->pc = 0x16c468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c46c: 0xb6020070  sdr         $v0, 0x70($s0)
    ctx->pc = 0x16c46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c470: 0xb206007f  sdl         $a2, 0x7F($s0)
    ctx->pc = 0x16c470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c474: 0xb6060078  sdr         $a2, 0x78($s0)
    ctx->pc = 0x16c474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c478: 0xb2070087  sdl         $a3, 0x87($s0)
    ctx->pc = 0x16c478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c47c: 0xb6070080  sdr         $a3, 0x80($s0)
    ctx->pc = 0x16c47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c480: 0xb208008f  sdl         $t0, 0x8F($s0)
    ctx->pc = 0x16c480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c484: 0xb6080088  sdr         $t0, 0x88($s0)
    ctx->pc = 0x16c484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c488: 0x6862002f  ldl         $v0, 0x2F($v1)
    ctx->pc = 0x16c488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x16c48c: 0x6c620028  ldr         $v0, 0x28($v1)
    ctx->pc = 0x16c48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x16c490: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x16c490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x16c494: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x16c494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x16c498: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x16c498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x16c49c: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x16c49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x16c4a0: 0x68680047  ldl         $t0, 0x47($v1)
    ctx->pc = 0x16c4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x16c4a4: 0x6c680040  ldr         $t0, 0x40($v1)
    ctx->pc = 0x16c4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x16c4a8: 0xb2020097  sdl         $v0, 0x97($s0)
    ctx->pc = 0x16c4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c4ac: 0xb6020090  sdr         $v0, 0x90($s0)
    ctx->pc = 0x16c4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c4b0: 0xb206009f  sdl         $a2, 0x9F($s0)
    ctx->pc = 0x16c4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c4b4: 0xb6060098  sdr         $a2, 0x98($s0)
    ctx->pc = 0x16c4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c4b8: 0xb20700a7  sdl         $a3, 0xA7($s0)
    ctx->pc = 0x16c4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c4bc: 0xb60700a0  sdr         $a3, 0xA0($s0)
    ctx->pc = 0x16c4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c4c0: 0xb20800af  sdl         $t0, 0xAF($s0)
    ctx->pc = 0x16c4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c4c4: 0xb60800a8  sdr         $t0, 0xA8($s0)
    ctx->pc = 0x16c4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16c4c8: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x16C4C8u;
    SET_GPR_U32(ctx, 31, 0x16C4D0u);
    ctx->pc = 0x16C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4C8u;
    // 0x16c4cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x16C4C8u, 0x16C4D0u)) {
        return;
    }
    ctx->pc = 0x16C4D0u;
label_16c4d0:
    // 0x16c4d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16c4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4d4: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x16C4D4u;
    SET_GPR_U32(ctx, 31, 0x16C4DCu);
    ctx->pc = 0x16C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4D4u;
    // 0x16c4d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x16C4D4u, 0x16C4DCu)) {
        return;
    }
    ctx->pc = 0x16C4DCu;
label_16c4dc:
    // 0x16c4dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4e0: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x16C4E0u;
    SET_GPR_U32(ctx, 31, 0x16C4E8u);
    ctx->pc = 0x16C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4E0u;
    // 0x16c4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x16C4E0u, 0x16C4E8u)) {
        return;
    }
    ctx->pc = 0x16C4E8u;
label_16c4e8:
    // 0x16c4e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16C4E8u;
    {
        const bool branch_taken_0x16c4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C4E8u;
        // 0x16c4ec: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4e8) {
            ctx->pc = 0x16C518u;
            goto label_16c518;
        }
    }
    ctx->pc = 0x16C4F0u;
label_16c4f0:
    // 0x16c4f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c4f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c4fc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16C4FCu;
    SET_GPR_U32(ctx, 31, 0x16C504u);
    ctx->pc = 0x16C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4FCu;
    // 0x16c500: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16C4FCu, 0x16C504u)) {
        return;
    }
    ctx->pc = 0x16C504u;
label_16c504:
    // 0x16c504: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16c504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16c508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c50c: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x16C50Cu;
    {
        const bool branch_taken_0x16c50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C50Cu;
        // 0x16c510: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c50c) {
            ctx->pc = 0x16C438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c438;
        }
    }
    ctx->pc = 0x16C514u;
label_16c514:
    // 0x16c514: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16c514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_16c518:
    // 0x16c518: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c51c: 0x8c46f69c  lw          $a2, -0x964($v0)
    ctx->pc = 0x16c51cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964892)));
    // 0x16c520: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16C520u;
    SET_GPR_U32(ctx, 31, 0x16C528u);
    ctx->pc = 0x16C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C520u;
    // 0x16c524: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16C520u, 0x16C528u)) {
        return;
    }
    ctx->pc = 0x16C528u;
label_16c528:
    // 0x16c528: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c52c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c530: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x16C530u;
    {
        const bool branch_taken_0x16c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c530) {
            ctx->pc = 0x16C534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C530u;
            // 0x16c534: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C6B4u;
            goto label_16c6b4;
        }
    }
    ctx->pc = 0x16C538u;
    // 0x16c538: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c53c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16c540:
    // 0x16c540: 0x2c830009  sltiu       $v1, $a0, 0x9
    ctx->pc = 0x16c540u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x16c544: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x16C544u;
    {
        const bool branch_taken_0x16c544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C544u;
        // 0x16c548: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c544) {
            ctx->pc = 0x16C684u;
            goto label_16c684;
        }
    }
    ctx->pc = 0x16C54Cu;
    // 0x16c54c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16c550: 0x244249e0  addiu       $v0, $v0, 0x49E0
    ctx->pc = 0x16c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18912));
    // 0x16c554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c558: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16c558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c55c: 0x800008  jr          $a0
    ctx->pc = 0x16C55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C564u: goto label_16c564;
            case 0x16C574u: goto label_16c574;
            case 0x16C5F4u: goto label_16c5f4;
            case 0x16C610u: goto label_16c610;
            case 0x16C624u: goto label_16c624;
            case 0x16C638u: goto label_16c638;
            case 0x16C64Cu: goto label_16c64c;
            case 0x16C66Cu: goto label_16c66c;
            case 0x16C684u: goto label_16c684;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C55Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16C564u;
label_16c564:
    // 0x16c564: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x16c564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c568: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16c568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16c56c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x16C56Cu;
    {
        const bool branch_taken_0x16c56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C56Cu;
        // 0x16c570: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c56c) {
            ctx->pc = 0x16C658u;
            goto label_16c658;
        }
    }
    ctx->pc = 0x16C574u;
label_16c574:
    // 0x16c574: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x16c574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x16c578: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C578u;
    {
        const bool branch_taken_0x16c578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C578u;
        // 0x16c57c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c578) {
            ctx->pc = 0x16C590u;
            goto label_16c590;
        }
    }
    ctx->pc = 0x16C580u;
    // 0x16c580: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16C580u;
    SET_GPR_U32(ctx, 31, 0x16C588u);
    ctx->pc = 0x16C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C580u;
    // 0x16c584: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16C580u, 0x16C588u)) {
        return;
    }
    ctx->pc = 0x16C588u;
label_16c588:
    // 0x16c588: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x16c588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x16c58c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c590:
    // 0x16c590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c594: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x16c594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16c598: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16C598u;
    {
        const bool branch_taken_0x16c598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c598) {
            ctx->pc = 0x16C59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C598u;
            // 0x16c59c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C5C4u;
            goto label_16c5c4;
        }
    }
    ctx->pc = 0x16C5A0u;
    // 0x16c5a0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C5A0u;
    {
        const bool branch_taken_0x16c5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5A0u;
        // 0x16c5a4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5a0) {
            ctx->pc = 0x16C5BCu;
            goto label_16c5bc;
        }
    }
    ctx->pc = 0x16C5A8u;
    // 0x16c5a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c5ac: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C5ACu;
    {
        const bool branch_taken_0x16c5ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ACu;
        // 0x16c5b0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5ac) {
            ctx->pc = 0x16C5CCu;
            goto label_16c5cc;
        }
    }
    ctx->pc = 0x16C5B4u;
    // 0x16c5b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16C5B4u;
    {
        const bool branch_taken_0x16c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5B4u;
        // 0x16c5b8: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5b4) {
            ctx->pc = 0x16C5D8u;
            goto label_16c5d8;
        }
    }
    ctx->pc = 0x16C5BCu;
label_16c5bc:
    // 0x16c5bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C5BCu;
    {
        const bool branch_taken_0x16c5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5BCu;
        // 0x16c5c0: 0x2442f738  addiu       $v0, $v0, -0x8C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5bc) {
            ctx->pc = 0x16C5D0u;
            goto label_16c5d0;
        }
    }
    ctx->pc = 0x16C5C4u;
label_16c5c4:
    // 0x16c5c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16C5C4u;
    {
        const bool branch_taken_0x16c5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5C4u;
        // 0x16c5c8: 0x2442f740  addiu       $v0, $v0, -0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5c4) {
            ctx->pc = 0x16C5D0u;
            goto label_16c5d0;
        }
    }
    ctx->pc = 0x16C5CCu;
label_16c5cc:
    // 0x16c5cc: 0x2442f748  addiu       $v0, $v0, -0x8B8
    ctx->pc = 0x16c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965064));
label_16c5d0:
    // 0x16c5d0: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x16c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x16c5d4: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x16c5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_16c5d8:
    // 0x16c5d8: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x16C5D8u;
    {
        const bool branch_taken_0x16c5d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5D8u;
        // 0x16c5dc: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5d8) {
            ctx->pc = 0x16C684u;
            goto label_16c684;
        }
    }
    ctx->pc = 0x16C5E0u;
    // 0x16c5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c5e4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16C5E4u;
    SET_GPR_U32(ctx, 31, 0x16C5ECu);
    ctx->pc = 0x16C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C5E4u;
    // 0x16c5e8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16C5E4u, 0x16C5ECu)) {
        return;
    }
    ctx->pc = 0x16C5ECu;
label_16c5ec:
    // 0x16c5ec: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x16C5ECu;
    {
        const bool branch_taken_0x16c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ECu;
        // 0x16c5f0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5ec) {
            ctx->pc = 0x16C688u;
            goto label_16c688;
        }
    }
    ctx->pc = 0x16C5F4u;
label_16c5f4:
    // 0x16c5f4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x16c5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c5f8: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x16c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x16c5fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c600: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16C600u;
    SET_GPR_U32(ctx, 31, 0x16C608u);
    ctx->pc = 0x16C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C600u;
    // 0x16c604: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16C600u, 0x16C608u)) {
        return;
    }
    ctx->pc = 0x16C608u;
label_16c608:
    // 0x16c608: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16C608u;
    {
        const bool branch_taken_0x16c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C608u;
        // 0x16c60c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c608) {
            ctx->pc = 0x16C688u;
            goto label_16c688;
        }
    }
    ctx->pc = 0x16C610u;
label_16c610:
    // 0x16c610: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16c610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c614: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c618: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16c618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16c61c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16C61Cu;
    {
        const bool branch_taken_0x16c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C61Cu;
        // 0x16c620: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c61c) {
            ctx->pc = 0x16C684u;
            goto label_16c684;
        }
    }
    ctx->pc = 0x16C624u;
label_16c624:
    // 0x16c624: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16c624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c628: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c62c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16c62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16c630: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16C630u;
    {
        const bool branch_taken_0x16c630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C630u;
        // 0x16c634: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c630) {
            ctx->pc = 0x16C684u;
            goto label_16c684;
        }
    }
    ctx->pc = 0x16C638u;
label_16c638:
    // 0x16c638: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16c638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c63c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16c640: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16c640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16c644: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16C644u;
    {
        const bool branch_taken_0x16c644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C644u;
        // 0x16c648: 0xae0200f8  sw          $v0, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c644) {
            ctx->pc = 0x16C684u;
            goto label_16c684;
        }
    }
    ctx->pc = 0x16C64Cu;
label_16c64c:
    // 0x16c64c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x16c64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c650: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16c650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16c654: 0x260500fc  addiu       $a1, $s0, 0xFC
    ctx->pc = 0x16c654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
label_16c658:
    // 0x16c658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16c658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c65c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16C65Cu;
    SET_GPR_U32(ctx, 31, 0x16C664u);
    ctx->pc = 0x16C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C65Cu;
    // 0x16c660: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16C65Cu, 0x16C664u)) {
        return;
    }
    ctx->pc = 0x16C664u;
label_16c664:
    // 0x16c664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16C664u;
    {
        const bool branch_taken_0x16c664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C664u;
        // 0x16c668: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c664) {
            ctx->pc = 0x16C688u;
            goto label_16c688;
        }
    }
    ctx->pc = 0x16C66Cu;
label_16c66c:
    // 0x16c66c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x16c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c670: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16c674: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x16c674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x16c678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16c678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c67c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16C67Cu;
    SET_GPR_U32(ctx, 31, 0x16C684u);
    ctx->pc = 0x16C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C67Cu;
    // 0x16c680: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16C67Cu, 0x16C684u)) {
        return;
    }
    ctx->pc = 0x16C684u;
label_16c684:
    // 0x16c684: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x16c684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16c688:
    // 0x16c688: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16c688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16c68c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c690: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16c690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c694: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c698: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16C698u;
    SET_GPR_U32(ctx, 31, 0x16C6A0u);
    ctx->pc = 0x16C69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C698u;
    // 0x16c69c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16C698u, 0x16C6A0u)) {
        return;
    }
    ctx->pc = 0x16C6A0u;
label_16c6a0:
    // 0x16c6a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c6a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c6a8: 0x5460ffa5  bnel        $v1, $zero, . + 4 + (-0x5B << 2)
    ctx->pc = 0x16C6A8u;
    {
        const bool branch_taken_0x16c6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c6a8) {
            ctx->pc = 0x16C6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C6A8u;
            // 0x16c6ac: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c540;
        }
    }
    ctx->pc = 0x16C6B0u;
    // 0x16c6b0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x16c6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16c6b4:
    // 0x16c6b4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x16c6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16c6b8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16c6b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16c6bc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16c6bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16c6c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16c6c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16c6c4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x16c6c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c6c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16c6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x16C6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C6CCu;
        // 0x16c6d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C6D4u;
    // 0x16c6d4: 0x0  nop
    ctx->pc = 0x16c6d4u;
    // NOP
    ctx->pc = 0x16c6d8u;
}
