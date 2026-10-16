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

// Function: sub_0010F670
// Address: 0x10f670 - 0x10f968
void sub_0010F670_0x10f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F670_0x10f670");
#endif

    switch (ctx->pc) {
        case 0x10f69cu: goto label_10f69c;
        case 0x10f6bcu: goto label_10f6bc;
        case 0x10f6ccu: goto label_10f6cc;
        case 0x10f718u: goto label_10f718;
        case 0x10f724u: goto label_10f724;
        case 0x10f774u: goto label_10f774;
        case 0x10f798u: goto label_10f798;
        case 0x10f84cu: goto label_10f84c;
        case 0x10f890u: goto label_10f890;
        case 0x10f8bcu: goto label_10f8bc;
        case 0x10f8ecu: goto label_10f8ec;
        case 0x10f918u: goto label_10f918;
        case 0x10f924u: goto label_10f924;
        case 0x10f930u: goto label_10f930;
        case 0x10f940u: goto label_10f940;
        default: break;
    }

    ctx->pc = 0x10f670u;

    // 0x10f670: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10f670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10f674: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10f674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x10f678: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10f678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x10f67c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f67cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f680: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10f680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x10f684: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10f684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f688: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10f688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10f68c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10f68cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f690: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10f690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10f694: 0xc043f24  jal         func_10FC90
    ctx->pc = 0x10F694u;
    SET_GPR_U32(ctx, 31, 0x10F69Cu);
    ctx->pc = 0x10F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F694u;
    // 0x10f698: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10FC90u, 0x10F694u, 0x10F69Cu)) {
        return;
    }
    ctx->pc = 0x10F69Cu;
label_10f69c:
    // 0x10f69c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10f6a0: 0x8c4382f4  lw          $v1, -0x7D0C($v0)
    ctx->pc = 0x10f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3382F4u));
    // 0x10f6a4: 0x506000a8  beql        $v1, $zero, . + 4 + (0xA8 << 2)
    ctx->pc = 0x10F6A4u;
    {
        const bool branch_taken_0x10f6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f6a4) {
            ctx->pc = 0x10F6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F6A4u;
            // 0x10f6a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F948u;
            goto label_10f948;
        }
    }
    ctx->pc = 0x10F6ACu;
    // 0x10f6ac: 0x520000a6  beql        $s0, $zero, . + 4 + (0xA6 << 2)
    ctx->pc = 0x10F6ACu;
    {
        const bool branch_taken_0x10f6ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f6ac) {
            ctx->pc = 0x10F6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F6ACu;
            // 0x10f6b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F948u;
            goto label_10f948;
        }
    }
    ctx->pc = 0x10F6B4u;
    // 0x10f6b4: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x10F6B4u;
    SET_GPR_U32(ctx, 31, 0x10F6BCu);
    ctx->pc = 0x1D9760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9760u, 0x10F6B4u, 0x10F6BCu)) {
        return;
    }
    ctx->pc = 0x10F6BCu;
label_10f6bc:
    // 0x10f6bc: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x10F6BCu;
    {
        const bool branch_taken_0x10f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6BCu;
        // 0x10f6c0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6bc) {
            ctx->pc = 0x10F944u;
            goto label_10f944;
        }
    }
    ctx->pc = 0x10F6C4u;
    // 0x10f6c4: 0xc07658e  jal         func_1D9638
    ctx->pc = 0x10F6C4u;
    SET_GPR_U32(ctx, 31, 0x10F6CCu);
    ctx->pc = 0x10F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F6C4u;
    // 0x10f6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9638u, 0x10F6C4u, 0x10F6CCu)) {
        return;
    }
    ctx->pc = 0x10F6CCu;
label_10f6cc:
    // 0x10f6cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10f6ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f6d0: 0x12600099  beqz        $s3, . + 4 + (0x99 << 2)
    ctx->pc = 0x10F6D0u;
    {
        const bool branch_taken_0x10f6d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6D0u;
        // 0x10f6d4: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6d0) {
            ctx->pc = 0x10F938u;
            goto label_10f938;
        }
    }
    ctx->pc = 0x10F6D8u;
    // 0x10f6d8: 0x6a620033  ldl         $v0, 0x33($s3)
    ctx->pc = 0x10f6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10f6dc: 0x6e62002c  ldr         $v0, 0x2C($s3)
    ctx->pc = 0x10f6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x10f6e0: 0x6a63003b  ldl         $v1, 0x3B($s3)
    ctx->pc = 0x10f6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x10f6e4: 0x6e630034  ldr         $v1, 0x34($s3)
    ctx->pc = 0x10f6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x10f6e8: 0x6a640043  ldl         $a0, 0x43($s3)
    ctx->pc = 0x10f6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x10f6ec: 0x6e64003c  ldr         $a0, 0x3C($s3)
    ctx->pc = 0x10f6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x10f6f0: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x10f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x10f6f4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x10f6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f6f8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x10f6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f6fc: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x10f6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f700: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x10f700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f704: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x10f704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f708: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x10f708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f70c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x10f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x10f710: 0xc043a44  jal         func_10E910
    ctx->pc = 0x10F710u;
    SET_GPR_U32(ctx, 31, 0x10F718u);
    ctx->pc = 0x10F714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F710u;
    // 0x10f714: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E910u, 0x10F710u, 0x10F718u)) {
        return;
    }
    ctx->pc = 0x10F718u;
label_10f718:
    // 0x10f718: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x10f718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    // 0x10f71c: 0xc043a40  jal         func_10E900
    ctx->pc = 0x10F71Cu;
    SET_GPR_U32(ctx, 31, 0x10F724u);
    ctx->pc = 0x10F720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F71Cu;
    // 0x10f720: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E900u, 0x10F71Cu, 0x10F724u)) {
        return;
    }
    ctx->pc = 0x10F724u;
label_10f724:
    // 0x10f724: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F724u;
    {
        const bool branch_taken_0x10f724 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F724u;
        // 0x10f728: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f724) {
            ctx->pc = 0x10F740u;
            goto label_10f740;
        }
    }
    ctx->pc = 0x10F72Cu;
    // 0x10f72c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x10f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f730: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x10f730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x10f734: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x10f734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x10f738: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10F738u;
    {
        const bool branch_taken_0x10f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F738u;
        // 0x10f73c: 0xac62004c  sw          $v0, 0x4C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f738) {
            ctx->pc = 0x10F758u;
            goto label_10f758;
        }
    }
    ctx->pc = 0x10F740u;
label_10f740:
    // 0x10f740: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x10f740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f744: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x10f744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x10f748: 0x3463fffb  ori         $v1, $v1, 0xFFFB
    ctx->pc = 0x10f748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65531);
    // 0x10f74c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x10f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x10f750: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10f750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10f754: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x10f754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
label_10f758:
    // 0x10f758: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x10f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f75c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10f760: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F760u;
    {
        const bool branch_taken_0x10f760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F760u;
        // 0x10f764: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f760) {
            ctx->pc = 0x10F778u;
            goto label_10f778;
        }
    }
    ctx->pc = 0x10F768u;
    // 0x10f768: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x10f768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10f76c: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x10F76Cu;
    SET_GPR_U32(ctx, 31, 0x10F774u);
    ctx->pc = 0x10F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F76Cu;
    // 0x10f770: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x10F76Cu, 0x10F774u)) {
        return;
    }
    ctx->pc = 0x10F774u;
label_10f774:
    // 0x10f774: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x10f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_10f778:
    // 0x10f778: 0xe4540058  swc1        $f20, 0x58($v0)
    ctx->pc = 0x10f778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x10f77c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x10f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f780: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10f780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10f784: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F784u;
    {
        const bool branch_taken_0x10f784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F784u;
        // 0x10f788: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f784) {
            ctx->pc = 0x10F798u;
            goto label_10f798;
        }
    }
    ctx->pc = 0x10F78Cu;
    // 0x10f78c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x10f78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10f790: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10F790u;
    SET_GPR_U32(ctx, 31, 0x10F798u);
    ctx->pc = 0x10F794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F790u;
    // 0x10f794: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10F790u, 0x10F798u)) {
        return;
    }
    ctx->pc = 0x10F798u;
label_10f798:
    // 0x10f798: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x10f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f79c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10f79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10f7a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f7a4: 0x0  nop
    ctx->pc = 0x10f7a4u;
    // NOP
    // 0x10f7a8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x10f7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x10f7ac: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x10f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f7b0: 0xac600094  sw          $zero, 0x94($v1)
    ctx->pc = 0x10f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
    // 0x10f7b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f7b8: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F7B8u;
    {
        const bool branch_taken_0x10f7b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x10F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7B8u;
        // 0x10f7bc: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7b8) {
            ctx->pc = 0x10F7D8u;
            goto label_10f7d8;
        }
    }
    ctx->pc = 0x10F7C0u;
    // 0x10f7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10f7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f7c4: 0x0  nop
    ctx->pc = 0x10f7c4u;
    // NOP
    // 0x10f7c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10f7c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10f7cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10F7CCu;
    {
        const bool branch_taken_0x10f7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F7CCu;
        // 0x10f7d0: 0xe4800054  swc1        $f0, 0x54($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f7cc) {
            ctx->pc = 0x10F7F8u;
            goto label_10f7f8;
        }
    }
    ctx->pc = 0x10F7D4u;
    // 0x10f7d4: 0x0  nop
    ctx->pc = 0x10f7d4u;
    // NOP
label_10f7d8:
    // 0x10f7d8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x10f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x10f7dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10f7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10f7e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f7e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10f7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f7e8: 0x0  nop
    ctx->pc = 0x10f7e8u;
    // NOP
    // 0x10f7ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10f7ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10f7f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x10f7f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x10f7f4: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x10f7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
label_10f7f8:
    // 0x10f7f8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x10f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f7fc: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x10f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x10f800: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10F800u;
    {
        const bool branch_taken_0x10f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F800u;
        // 0x10f804: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f800) {
            ctx->pc = 0x10F84Cu;
            goto label_10f84c;
        }
    }
    ctx->pc = 0x10F808u;
    // 0x10f808: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F808u;
    {
        const bool branch_taken_0x10f808 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x10F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F808u;
        // 0x10f80c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f808) {
            ctx->pc = 0x10F824u;
            goto label_10f824;
        }
    }
    ctx->pc = 0x10F810u;
    // 0x10f810: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10f810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f814: 0x0  nop
    ctx->pc = 0x10f814u;
    // NOP
    // 0x10f818: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x10f818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x10f81c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10F81Cu;
    {
        const bool branch_taken_0x10f81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F81Cu;
        // 0x10f820: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f81c) {
            ctx->pc = 0x10F840u;
            goto label_10f840;
        }
    }
    ctx->pc = 0x10F824u;
label_10f824:
    // 0x10f824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10f824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10f828: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f82c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10f82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f830: 0x0  nop
    ctx->pc = 0x10f830u;
    // NOP
    // 0x10f834: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x10f834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x10f838: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x10f838u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x10f83c: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x10f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_10f840:
    // 0x10f840: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10f840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f844: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10F844u;
    SET_GPR_U32(ctx, 31, 0x10F84Cu);
    ctx->pc = 0x10F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F844u;
    // 0x10f848: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10F844u, 0x10F84Cu)) {
        return;
    }
    ctx->pc = 0x10F84Cu;
label_10f84c:
    // 0x10f84c: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x10f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x10f850: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x10f850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x10f854: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x10F854u;
    {
        const bool branch_taken_0x10f854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F854u;
        // 0x10f858: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f854) {
            ctx->pc = 0x10F8F8u;
            goto label_10f8f8;
        }
    }
    ctx->pc = 0x10F85Cu;
    // 0x10f85c: 0x6a26005f  ldl         $a2, 0x5F($s1)
    ctx->pc = 0x10f85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x10f860: 0x6e260058  ldr         $a2, 0x58($s1)
    ctx->pc = 0x10f860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x10f864: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x10f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x10f868: 0xb0660077  sdl         $a2, 0x77($v1)
    ctx->pc = 0x10f868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f86c: 0xb4660070  sdr         $a2, 0x70($v1)
    ctx->pc = 0x10f86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10f870: 0xac620078  sw          $v0, 0x78($v1)
    ctx->pc = 0x10f870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 2));
    // 0x10f874: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x10f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f878: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10f878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10f87c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F87Cu;
    {
        const bool branch_taken_0x10f87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F87Cu;
        // 0x10f880: 0x26270058  addiu       $a3, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f87c) {
            ctx->pc = 0x10F890u;
            goto label_10f890;
        }
    }
    ctx->pc = 0x10F884u;
    // 0x10f884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10f884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f888: 0xc0b66fa  jal         func_2D9BE8
    ctx->pc = 0x10F888u;
    SET_GPR_U32(ctx, 31, 0x10F890u);
    ctx->pc = 0x10F88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F888u;
    // 0x10f88c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9BE8u, 0x10F888u, 0x10F890u)) {
        return;
    }
    ctx->pc = 0x10F890u;
label_10f890:
    // 0x10f890: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x10f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f894: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x10f894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x10f898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10f898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f89c: 0x0  nop
    ctx->pc = 0x10f89cu;
    // NOP
    // 0x10f8a0: 0xe46c0088  swc1        $f12, 0x88($v1)
    ctx->pc = 0x10f8a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x10f8a4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x10f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f8a8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10f8ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F8ACu;
    {
        const bool branch_taken_0x10f8ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8ACu;
        // 0x10f8b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8ac) {
            ctx->pc = 0x10F8C0u;
            goto label_10f8c0;
        }
    }
    ctx->pc = 0x10F8B4u;
    // 0x10f8b4: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10F8B4u;
    SET_GPR_U32(ctx, 31, 0x10F8BCu);
    ctx->pc = 0x10F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F8B4u;
    // 0x10f8b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10F8B4u, 0x10F8BCu)) {
        return;
    }
    ctx->pc = 0x10F8BCu;
label_10f8bc:
    // 0x10f8bc: 0x0  nop
    ctx->pc = 0x10f8bcu;
    // NOP
label_10f8c0:
    // 0x10f8c0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x10f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f8c4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x10f8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x10f8c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10f8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f8cc: 0x0  nop
    ctx->pc = 0x10f8ccu;
    // NOP
    // 0x10f8d0: 0xe46c008c  swc1        $f12, 0x8C($v1)
    ctx->pc = 0x10f8d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x10f8d4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x10f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f8d8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10f8dc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x10F8DCu;
    {
        const bool branch_taken_0x10f8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8DCu;
        // 0x10f8e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8dc) {
            ctx->pc = 0x10F918u;
            goto label_10f918;
        }
    }
    ctx->pc = 0x10F8E4u;
    // 0x10f8e4: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10F8E4u;
    SET_GPR_U32(ctx, 31, 0x10F8ECu);
    ctx->pc = 0x10F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F8E4u;
    // 0x10f8e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10F8E4u, 0x10F8ECu)) {
        return;
    }
    ctx->pc = 0x10F8ECu;
label_10f8ec:
    // 0x10f8ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10F8ECu;
    {
        const bool branch_taken_0x10f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8ECu;
        // 0x10f8f0: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8ec) {
            ctx->pc = 0x10F91Cu;
            goto label_10f91c;
        }
    }
    ctx->pc = 0x10F8F4u;
    // 0x10f8f4: 0x0  nop
    ctx->pc = 0x10f8f4u;
    // NOP
label_10f8f8:
    // 0x10f8f8: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x10f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x10f8fc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x10f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f900: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10f900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10f904: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F904u;
    {
        const bool branch_taken_0x10f904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F904u;
        // 0x10f908: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f904) {
            ctx->pc = 0x10F918u;
            goto label_10f918;
        }
    }
    ctx->pc = 0x10F90Cu;
    // 0x10f90c: 0xc46c005c  lwc1        $f12, 0x5C($v1)
    ctx->pc = 0x10f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10f910: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10F910u;
    SET_GPR_U32(ctx, 31, 0x10F918u);
    ctx->pc = 0x10F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F910u;
    // 0x10f914: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10F910u, 0x10F918u)) {
        return;
    }
    ctx->pc = 0x10F918u;
label_10f918:
    // 0x10f918: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x10f918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_10f91c:
    // 0x10f91c: 0xc0b87b0  jal         func_2E1EC0
    ctx->pc = 0x10F91Cu;
    SET_GPR_U32(ctx, 31, 0x10F924u);
    ctx->pc = 0x10F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F91Cu;
    // 0x10f920: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1EC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1EC0u, 0x10F91Cu, 0x10F924u)) {
        return;
    }
    ctx->pc = 0x10F924u;
label_10f924:
    // 0x10f924: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x10f924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10f928: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10F928u;
    SET_GPR_U32(ctx, 31, 0x10F930u);
    ctx->pc = 0x10F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F928u;
    // 0x10f92c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10F928u, 0x10F930u)) {
        return;
    }
    ctx->pc = 0x10F930u;
label_10f930:
    // 0x10f930: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10F930u;
    {
        const bool branch_taken_0x10f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F930u;
        // 0x10f934: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f930) {
            ctx->pc = 0x10F948u;
            goto label_10f948;
        }
    }
    ctx->pc = 0x10F938u;
label_10f938:
    // 0x10f938: 0xc0765ea  jal         func_1D97A8
    ctx->pc = 0x10F938u;
    SET_GPR_U32(ctx, 31, 0x10F940u);
    ctx->pc = 0x10F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F938u;
    // 0x10f93c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D97A8u, 0x10F938u, 0x10F940u)) {
        return;
    }
    ctx->pc = 0x10F940u;
label_10f940:
    // 0x10f940: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x10f940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_10f944:
    // 0x10f944: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10f944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10f948:
    // 0x10f948: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10f948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10f94c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10f94cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f950: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10f950u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10f954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f958: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x10f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10f95c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F95Cu;
        // 0x10f960: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F964u;
    // 0x10f964: 0x0  nop
    ctx->pc = 0x10f964u;
    // NOP
    ctx->pc = 0x10f968u;
}
