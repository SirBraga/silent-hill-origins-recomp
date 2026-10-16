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

// Function: sub_00146310
// Address: 0x146310 - 0x146498
void sub_00146310_0x146310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146310_0x146310");
#endif

    switch (ctx->pc) {
        case 0x146330u: goto label_146330;
        case 0x146344u: goto label_146344;
        case 0x146358u: goto label_146358;
        case 0x146384u: goto label_146384;
        case 0x1463a8u: goto label_1463a8;
        case 0x1463c0u: goto label_1463c0;
        case 0x14646cu: goto label_14646c;
        default: break;
    }

    ctx->pc = 0x146310u;

    // 0x146310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x146310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x146314: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x146314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x146318: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x146318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14631c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14631cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146320: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x146320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x146324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x146324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x146328: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x146328u;
    SET_GPR_U32(ctx, 31, 0x146330u);
    ctx->pc = 0x14632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146328u;
    // 0x14632c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x146328u, 0x146330u)) {
        return;
    }
    ctx->pc = 0x146330u;
label_146330:
    // 0x146330: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x146330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x146334: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x146334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146338: 0x8c46488c  lw          $a2, 0x488C($v0)
    ctx->pc = 0x146338u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B488Cu));
    // 0x14633c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x14633Cu;
    SET_GPR_U32(ctx, 31, 0x146344u);
    ctx->pc = 0x146340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14633Cu;
    // 0x146340: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x14633Cu, 0x146344u)) {
        return;
    }
    ctx->pc = 0x146344u;
label_146344:
    // 0x146344: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x146344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146348: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14634c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14634Cu;
    {
        const bool branch_taken_0x14634c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14634Cu;
        // 0x146350: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14634c) {
            ctx->pc = 0x146394u;
            goto label_146394;
        }
    }
    ctx->pc = 0x146354u;
    // 0x146354: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x146354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_146358:
    // 0x146358: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x146358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14635c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14635Cu;
    {
        const bool branch_taken_0x14635c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14635Cu;
        // 0x146360: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14635c) {
            ctx->pc = 0x146370u;
            goto label_146370;
        }
    }
    ctx->pc = 0x146364u;
    // 0x146364: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x146364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146368: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x146368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x14636c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_146370:
    // 0x146370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x146370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146374: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x146374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x146378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14637c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x14637Cu;
    SET_GPR_U32(ctx, 31, 0x146384u);
    ctx->pc = 0x146380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14637Cu;
    // 0x146380: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x14637Cu, 0x146384u)) {
        return;
    }
    ctx->pc = 0x146384u;
label_146384:
    // 0x146384: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x146384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146388: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14638c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x14638Cu;
    {
        const bool branch_taken_0x14638c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14638Cu;
        // 0x146390: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14638c) {
            ctx->pc = 0x146358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146358;
        }
    }
    ctx->pc = 0x146394u;
label_146394:
    // 0x146394: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x146394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x146398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x146398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14639c: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x14639cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x1463a0: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1463A0u;
    SET_GPR_U32(ctx, 31, 0x1463A8u);
    ctx->pc = 0x1463A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1463A0u;
    // 0x1463a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1463A0u, 0x1463A8u)) {
        return;
    }
    ctx->pc = 0x1463A8u;
label_1463a8:
    // 0x1463a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1463a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1463ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1463acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1463b0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1463B0u;
    {
        const bool branch_taken_0x1463b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1463B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463B0u;
        // 0x1463b4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463b0) {
            ctx->pc = 0x14647Cu;
            goto label_14647c;
        }
    }
    ctx->pc = 0x1463B8u;
    // 0x1463b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1463b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1463bc: 0x0  nop
    ctx->pc = 0x1463bcu;
    // NOP
label_1463c0:
    // 0x1463c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1463c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1463c4: 0x14500024  bne         $v0, $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1463C4u;
    {
        const bool branch_taken_0x1463c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1463C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463C4u;
        // 0x1463c8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463c4) {
            ctx->pc = 0x146458u;
            goto label_146458;
        }
    }
    ctx->pc = 0x1463CCu;
    // 0x1463cc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1463ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1463d0: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x1463d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1463d4: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x1463d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1463d8: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x1463d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1463dc: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x1463dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1463e0: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x1463e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1463e4: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x1463e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1463e8: 0x68670027  ldl         $a3, 0x27($v1)
    ctx->pc = 0x1463e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1463ec: 0x6c670020  ldr         $a3, 0x20($v1)
    ctx->pc = 0x1463ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1463f0: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x1463f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1463f4: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x1463f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1463f8: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x1463f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1463fc: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x1463fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146400: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x146400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146404: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x146404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146408: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x146408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14640c: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x14640cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146410: 0x6864002f  ldl         $a0, 0x2F($v1)
    ctx->pc = 0x146410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x146414: 0x6c640028  ldr         $a0, 0x28($v1)
    ctx->pc = 0x146414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x146418: 0x68650037  ldl         $a1, 0x37($v1)
    ctx->pc = 0x146418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x14641c: 0x6c650030  ldr         $a1, 0x30($v1)
    ctx->pc = 0x14641cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x146420: 0x6866003f  ldl         $a2, 0x3F($v1)
    ctx->pc = 0x146420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x146424: 0x6c660038  ldr         $a2, 0x38($v1)
    ctx->pc = 0x146424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x146428: 0x68670047  ldl         $a3, 0x47($v1)
    ctx->pc = 0x146428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14642c: 0x6c670040  ldr         $a3, 0x40($v1)
    ctx->pc = 0x14642cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x146430: 0xb0440027  sdl         $a0, 0x27($v0)
    ctx->pc = 0x146430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146434: 0xb4440020  sdr         $a0, 0x20($v0)
    ctx->pc = 0x146434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146438: 0xb045002f  sdl         $a1, 0x2F($v0)
    ctx->pc = 0x146438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14643c: 0xb4450028  sdr         $a1, 0x28($v0)
    ctx->pc = 0x14643cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146440: 0xb0460037  sdl         $a2, 0x37($v0)
    ctx->pc = 0x146440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146444: 0xb4460030  sdr         $a2, 0x30($v0)
    ctx->pc = 0x146444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146448: 0xb047003f  sdl         $a3, 0x3F($v0)
    ctx->pc = 0x146448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14644c: 0xb4470038  sdr         $a3, 0x38($v0)
    ctx->pc = 0x14644cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x146450: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x146450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146454: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x146454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_146458:
    // 0x146458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x146458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14645c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146460: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x146460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146464: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x146464u;
    SET_GPR_U32(ctx, 31, 0x14646Cu);
    ctx->pc = 0x146468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146464u;
    // 0x146468: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x146464u, 0x14646Cu)) {
        return;
    }
    ctx->pc = 0x14646Cu;
label_14646c:
    // 0x14646c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146470: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146474: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x146474u;
    {
        const bool branch_taken_0x146474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146474u;
        // 0x146478: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146474) {
            ctx->pc = 0x1463C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1463c0;
        }
    }
    ctx->pc = 0x14647Cu;
label_14647c:
    // 0x14647c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14647cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146480: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x146480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146484: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x146484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x146488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14648c: 0x3e00008  jr          $ra
    ctx->pc = 0x14648Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14648Cu;
        // 0x146490: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14648Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146494u;
    // 0x146494: 0x0  nop
    ctx->pc = 0x146494u;
    // NOP
    ctx->pc = 0x146498u;
}
