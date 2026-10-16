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

// Function: sub_00169628
// Address: 0x169628 - 0x169878
void sub_00169628_0x169628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169628_0x169628");
#endif

    switch (ctx->pc) {
        case 0x169654u: goto label_169654;
        case 0x169668u: goto label_169668;
        case 0x169688u: goto label_169688;
        case 0x169720u: goto label_169720;
        case 0x16972cu: goto label_16972c;
        case 0x169738u: goto label_169738;
        case 0x169754u: goto label_169754;
        case 0x169778u: goto label_169778;
        case 0x169790u: goto label_169790;
        case 0x1697d4u: goto label_1697d4;
        case 0x169808u: goto label_169808;
        case 0x169828u: goto label_169828;
        case 0x169844u: goto label_169844;
        default: break;
    }

    ctx->pc = 0x169628u;

    // 0x169628: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x169628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16962c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x16962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x169630: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x169630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x169634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169638: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x169638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x16963c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x16963cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x169640: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x169640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x169644: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x169644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x169648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16964c: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16964Cu;
    SET_GPR_U32(ctx, 31, 0x169654u);
    ctx->pc = 0x169650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16964Cu;
    // 0x169650: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16964Cu, 0x169654u)) {
        return;
    }
    ctx->pc = 0x169654u;
label_169654:
    // 0x169654: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x169654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x169658: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x169658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16965c: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x16965cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x169660: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x169660u;
    SET_GPR_U32(ctx, 31, 0x169668u);
    ctx->pc = 0x169664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169660u;
    // 0x169664: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x169660u, 0x169668u)) {
        return;
    }
    ctx->pc = 0x169668u;
label_169668:
    // 0x169668: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x169668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16966c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16966cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169670: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x169670u;
    {
        const bool branch_taken_0x169670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169670u;
        // 0x169674: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169670) {
            ctx->pc = 0x169764u;
            goto label_169764;
        }
    }
    ctx->pc = 0x169678u;
    // 0x169678: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x169678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16967c: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x16967cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x169680: 0x261200a0  addiu       $s2, $s0, 0xA0
    ctx->pc = 0x169680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x169684: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x169684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_169688:
    // 0x169688: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x169688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16968c: 0x5454002c  bnel        $v0, $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x16968Cu;
    {
        const bool branch_taken_0x16968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x16968c) {
            ctx->pc = 0x169690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16968Cu;
            // 0x169690: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169740u;
            goto label_169740;
        }
    }
    ctx->pc = 0x169694u;
    // 0x169694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169698: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x169698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x16969c: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x16969cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1696a0: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x1696a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1696a4: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x1696a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1696a8: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x1696a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1696ac: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x1696acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1696b0: 0x68680027  ldl         $t0, 0x27($v1)
    ctx->pc = 0x1696b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1696b4: 0x6c680020  ldr         $t0, 0x20($v1)
    ctx->pc = 0x1696b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1696b8: 0xb2020067  sdl         $v0, 0x67($s0)
    ctx->pc = 0x1696b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1696bc: 0xb6020060  sdr         $v0, 0x60($s0)
    ctx->pc = 0x1696bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1696c0: 0xb206006f  sdl         $a2, 0x6F($s0)
    ctx->pc = 0x1696c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1696c4: 0xb6060068  sdr         $a2, 0x68($s0)
    ctx->pc = 0x1696c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1696c8: 0xb2070077  sdl         $a3, 0x77($s0)
    ctx->pc = 0x1696c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1696cc: 0xb6070070  sdr         $a3, 0x70($s0)
    ctx->pc = 0x1696ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1696d0: 0xb208007f  sdl         $t0, 0x7F($s0)
    ctx->pc = 0x1696d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1696d4: 0xb6080078  sdr         $t0, 0x78($s0)
    ctx->pc = 0x1696d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1696d8: 0x6862002f  ldl         $v0, 0x2F($v1)
    ctx->pc = 0x1696d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1696dc: 0x6c620028  ldr         $v0, 0x28($v1)
    ctx->pc = 0x1696dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1696e0: 0x68660037  ldl         $a2, 0x37($v1)
    ctx->pc = 0x1696e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1696e4: 0x6c660030  ldr         $a2, 0x30($v1)
    ctx->pc = 0x1696e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1696e8: 0x6867003f  ldl         $a3, 0x3F($v1)
    ctx->pc = 0x1696e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1696ec: 0x6c670038  ldr         $a3, 0x38($v1)
    ctx->pc = 0x1696ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1696f0: 0x68680047  ldl         $t0, 0x47($v1)
    ctx->pc = 0x1696f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1696f4: 0x6c680040  ldr         $t0, 0x40($v1)
    ctx->pc = 0x1696f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1696f8: 0xb2020087  sdl         $v0, 0x87($s0)
    ctx->pc = 0x1696f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1696fc: 0xb6020080  sdr         $v0, 0x80($s0)
    ctx->pc = 0x1696fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169700: 0xb206008f  sdl         $a2, 0x8F($s0)
    ctx->pc = 0x169700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169704: 0xb6060088  sdr         $a2, 0x88($s0)
    ctx->pc = 0x169704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169708: 0xb2070097  sdl         $a3, 0x97($s0)
    ctx->pc = 0x169708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16970c: 0xb6070090  sdr         $a3, 0x90($s0)
    ctx->pc = 0x16970cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169710: 0xb208009f  sdl         $t0, 0x9F($s0)
    ctx->pc = 0x169710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169714: 0xb6080098  sdr         $t0, 0x98($s0)
    ctx->pc = 0x169714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x169718: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x169718u;
    SET_GPR_U32(ctx, 31, 0x169720u);
    ctx->pc = 0x16971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169718u;
    // 0x16971c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x169718u, 0x169720u)) {
        return;
    }
    ctx->pc = 0x169720u;
label_169720:
    // 0x169720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x169720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169724: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x169724u;
    SET_GPR_U32(ctx, 31, 0x16972Cu);
    ctx->pc = 0x169728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169724u;
    // 0x169728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x169724u, 0x16972Cu)) {
        return;
    }
    ctx->pc = 0x16972Cu;
label_16972c:
    // 0x16972c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169730: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x169730u;
    SET_GPR_U32(ctx, 31, 0x169738u);
    ctx->pc = 0x169734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169730u;
    // 0x169734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x169730u, 0x169738u)) {
        return;
    }
    ctx->pc = 0x169738u;
label_169738:
    // 0x169738: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x169738u;
    {
        const bool branch_taken_0x169738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169738u;
        // 0x16973c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169738) {
            ctx->pc = 0x169768u;
            goto label_169768;
        }
    }
    ctx->pc = 0x169740u;
label_169740:
    // 0x169740: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x169740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169744: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169748: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16974c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16974Cu;
    SET_GPR_U32(ctx, 31, 0x169754u);
    ctx->pc = 0x169750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16974Cu;
    // 0x169750: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16974Cu, 0x169754u)) {
        return;
    }
    ctx->pc = 0x169754u;
label_169754:
    // 0x169754: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x169754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169758: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x169758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16975c: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x16975Cu;
    {
        const bool branch_taken_0x16975c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16975Cu;
        // 0x169760: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16975c) {
            ctx->pc = 0x169688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169688;
        }
    }
    ctx->pc = 0x169764u;
label_169764:
    // 0x169764: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x169764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_169768:
    // 0x169768: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x169768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16976c: 0x8c46f624  lw          $a2, -0x9DC($v0)
    ctx->pc = 0x16976cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964772)));
    // 0x169770: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x169770u;
    SET_GPR_U32(ctx, 31, 0x169778u);
    ctx->pc = 0x169774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169770u;
    // 0x169774: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x169770u, 0x169778u)) {
        return;
    }
    ctx->pc = 0x169778u;
label_169778:
    // 0x169778: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x169778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16977c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169780: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x169780u;
    {
        const bool branch_taken_0x169780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169780) {
            ctx->pc = 0x169784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169780u;
            // 0x169784: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169858u;
            goto label_169858;
        }
    }
    ctx->pc = 0x169788u;
    // 0x169788: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x169788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16978c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_169790:
    // 0x169790: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x169790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x169794: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x169794u;
    {
        const bool branch_taken_0x169794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169794u;
        // 0x169798: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169794) {
            ctx->pc = 0x169828u;
            goto label_169828;
        }
    }
    ctx->pc = 0x16979Cu;
    // 0x16979c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16979cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1697a0: 0x24424320  addiu       $v0, $v0, 0x4320
    ctx->pc = 0x1697a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17184));
    // 0x1697a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1697a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1697a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1697a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1697ac: 0x800008  jr          $a0
    ctx->pc = 0x1697ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1697B4u: goto label_1697b4;
            case 0x1697C0u: goto label_1697c0;
            case 0x1697DCu: goto label_1697dc;
            case 0x1697F0u: goto label_1697f0;
            case 0x169810u: goto label_169810;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1697ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1697B4u;
label_1697b4:
    // 0x1697b4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1697b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1697b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1697B8u;
    {
        const bool branch_taken_0x1697b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697B8u;
        // 0x1697bc: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697b8) {
            ctx->pc = 0x1697C8u;
            goto label_1697c8;
        }
    }
    ctx->pc = 0x1697C0u;
label_1697c0:
    // 0x1697c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1697c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1697c4: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x1697c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_1697c8:
    // 0x1697c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1697c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697cc: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x1697CCu;
    SET_GPR_U32(ctx, 31, 0x1697D4u);
    ctx->pc = 0x1697D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697CCu;
    // 0x1697d0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x1697CCu, 0x1697D4u)) {
        return;
    }
    ctx->pc = 0x1697D4u;
label_1697d4:
    // 0x1697d4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1697D4u;
    {
        const bool branch_taken_0x1697d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697D4u;
        // 0x1697d8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697d4) {
            ctx->pc = 0x16982Cu;
            goto label_16982c;
        }
    }
    ctx->pc = 0x1697DCu;
label_1697dc:
    // 0x1697dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1697dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1697e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1697e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1697e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1697e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1697e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1697E8u;
    {
        const bool branch_taken_0x1697e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697E8u;
        // 0x1697ec: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697e8) {
            ctx->pc = 0x169828u;
            goto label_169828;
        }
    }
    ctx->pc = 0x1697F0u;
label_1697f0:
    // 0x1697f0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1697f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1697f4: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1697f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1697f8: 0x260500ec  addiu       $a1, $s0, 0xEC
    ctx->pc = 0x1697f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x1697fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1697fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169800: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x169800u;
    SET_GPR_U32(ctx, 31, 0x169808u);
    ctx->pc = 0x169804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169800u;
    // 0x169804: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x169800u, 0x169808u)) {
        return;
    }
    ctx->pc = 0x169808u;
label_169808:
    // 0x169808: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169808u;
    {
        const bool branch_taken_0x169808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169808u;
        // 0x16980c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169808) {
            ctx->pc = 0x16982Cu;
            goto label_16982c;
        }
    }
    ctx->pc = 0x169810u;
label_169810:
    // 0x169810: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x169810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169814: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x169814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x169818: 0x260500f4  addiu       $a1, $s0, 0xF4
    ctx->pc = 0x169818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    // 0x16981c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16981cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169820: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x169820u;
    SET_GPR_U32(ctx, 31, 0x169828u);
    ctx->pc = 0x169824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169820u;
    // 0x169824: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x169820u, 0x169828u)) {
        return;
    }
    ctx->pc = 0x169828u;
label_169828:
    // 0x169828: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x169828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16982c:
    // 0x16982c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x16982cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x169830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169834: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x169834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169838: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x169838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16983c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16983Cu;
    SET_GPR_U32(ctx, 31, 0x169844u);
    ctx->pc = 0x169840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16983Cu;
    // 0x169840: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16983Cu, 0x169844u)) {
        return;
    }
    ctx->pc = 0x169844u;
label_169844:
    // 0x169844: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x169844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169848: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x169848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16984c: 0x5460ffd0  bnel        $v1, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x16984Cu;
    {
        const bool branch_taken_0x16984c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16984c) {
            ctx->pc = 0x169850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16984Cu;
            // 0x169850: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169790;
        }
    }
    ctx->pc = 0x169854u;
    // 0x169854: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x169854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_169858:
    // 0x169858: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x169858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16985c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x16985cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169860: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x169860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x169864: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x169864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169868: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x169868u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16986c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16986cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169870: 0x3e00008  jr          $ra
    ctx->pc = 0x169870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169870u;
        // 0x169874: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169878u;
}
