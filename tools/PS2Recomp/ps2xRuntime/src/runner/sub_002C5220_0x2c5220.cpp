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

// Function: sub_002C5220
// Address: 0x2c5220 - 0x2c55c0
void sub_002C5220_0x2c5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5220_0x2c5220");
#endif

    switch (ctx->pc) {
        case 0x2c5298u: goto label_2c5298;
        case 0x2c52c4u: goto label_2c52c4;
        case 0x2c531cu: goto label_2c531c;
        case 0x2c5458u: goto label_2c5458;
        case 0x2c54f8u: goto label_2c54f8;
        case 0x2c5518u: goto label_2c5518;
        default: break;
    }

    ctx->pc = 0x2c5220u;

    // 0x2c5220: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2c5220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2c5224: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2c5224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2c5228: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2c5228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2c522c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2c522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2c5230: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c5230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c5234: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c5234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5238: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2c5238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2c523c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2c523cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5240: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2c5240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2c5244: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2c5244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2c5248: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c5248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2c524c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2c524cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5250: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2c5250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2c5254: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2c5254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2c5258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c525c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2c525cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2c5260: 0x8e740044  lw          $s4, 0x44($s3)
    ctx->pc = 0x2c5260u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2c5264: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2c5264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x2c5268: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c5268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c526c: 0x268a0040  addiu       $t2, $s4, 0x40
    ctx->pc = 0x2c526cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x2c5270: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2c5270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2c5274: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x2c5274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x2c5278: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2c5278u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c527c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2c527cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2c5280: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2c5280u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5284: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2c5284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2c5288: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2c5288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c528c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2C528Cu;
    {
        const bool branch_taken_0x2c528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C528Cu;
        // 0x2c5290: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c528c) {
            ctx->pc = 0x2C5534u;
            goto label_2c5534;
        }
    }
    ctx->pc = 0x2C5294u;
    // 0x2c5294: 0x0  nop
    ctx->pc = 0x2c5294u;
    // NOP
label_2c5298:
    // 0x2c5298: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x2c5298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c529c: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x2c529cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c52a0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2c52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c52a4: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x2c52a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    // 0x2c52a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c52a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c52ac: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x2c52acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c52b0: 0x2921025  or          $v0, $s4, $s2
    ctx->pc = 0x2c52b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 18));
    // 0x2c52b4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c52b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c52b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C52B8u;
    {
        const bool branch_taken_0x2c52b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52B8u;
        // 0x2c52bc: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c52b8) {
            ctx->pc = 0x2C5318u;
            goto label_2c5318;
        }
    }
    ctx->pc = 0x2C52C0u;
    // 0x2c52c0: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2c52c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c52c4:
    // 0x2c52c4: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x2c52c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c52c8: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x2c52c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c52cc: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x2c52ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c52d0: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x2c52d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c52d4: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x2c52d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c52d8: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x2c52d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c52dc: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x2c52dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2c52e0: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x2c52e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2c52e4: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2c52e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c52e8: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2c52e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c52ec: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x2c52ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c52f0: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x2c52f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c52f4: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x2c52f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c52f8: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x2c52f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c52fc: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x2c52fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5300: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x2c5300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5304: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c5304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c5308: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C5308u;
    {
        const bool branch_taken_0x2c5308 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5308u;
        // 0x2c530c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5308) {
            ctx->pc = 0x2C52C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c52c4;
        }
    }
    ctx->pc = 0x2C5310u;
    // 0x2c5310: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C5310u;
    {
        const bool branch_taken_0x2c5310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5310) {
            ctx->pc = 0x2C5348u;
            goto label_2c5348;
        }
    }
    ctx->pc = 0x2C5318u;
label_2c5318:
    // 0x2c5318: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2c5318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c531c:
    // 0x2c531c: 0xdca90000  ld          $t1, 0x0($a1)
    ctx->pc = 0x2c531cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c5320: 0xdcaa0008  ld          $t2, 0x8($a1)
    ctx->pc = 0x2c5320u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c5324: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x2c5324u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c5328: 0xdca60018  ld          $a2, 0x18($a1)
    ctx->pc = 0x2c5328u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2c532c: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x2c532cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x2c5330: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x2c5330u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x2c5334: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x2c5334u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x2c5338: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x2c5338u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x2c533c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c5340: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C5340u;
    {
        const bool branch_taken_0x2c5340 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5340u;
        // 0x2c5344: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5340) {
            ctx->pc = 0x2C531Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c531c;
        }
    }
    ctx->pc = 0x2C5348u;
label_2c5348:
    // 0x2c5348: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2c5348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2c534c: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2c534cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2c5350: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x2c5350u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c5354: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x2c5354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c5358: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x2c5358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c535c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c535cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c5360: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x2c5360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x2c5364: 0x2442ec28  addiu       $v0, $v0, -0x13D8
    ctx->pc = 0x2c5364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962216));
    // 0x2c5368: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x2c5368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x2c536c: 0xc6a0004c  lwc1        $f0, 0x4C($s5)
    ctx->pc = 0x2c536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5370: 0x96a3005a  lhu         $v1, 0x5A($s5)
    ctx->pc = 0x2c5370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 90)));
    // 0x2c5374: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2c5374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x2c5378: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x2c5378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2c537c: 0xc6a10050  lwc1        $f1, 0x50($s5)
    ctx->pc = 0x2c537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5380: 0xa643005a  sh          $v1, 0x5A($s2)
    ctx->pc = 0x2c5380u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c5384: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c5384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c5388: 0xe6410050  swc1        $f1, 0x50($s2)
    ctx->pc = 0x2c5388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x2c538c: 0xc6a00054  lwc1        $f0, 0x54($s5)
    ctx->pc = 0x2c538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5390: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2C5390u;
    {
        const bool branch_taken_0x2c5390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5390u;
        // 0x2c5394: 0xe6400054  swc1        $f0, 0x54($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5390) {
            ctx->pc = 0x2C5468u;
            goto label_2c5468;
        }
    }
    ctx->pc = 0x2C5398u;
    // 0x2c5398: 0xc6260018  lwc1        $f6, 0x18($s1)
    ctx->pc = 0x2c5398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c539c: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x2c539cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2c53a0: 0xc6240028  lwc1        $f4, 0x28($s1)
    ctx->pc = 0x2c53a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c53a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c53a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53a8: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2c53a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c53ac: 0x46043141  sub.s       $f5, $f6, $f4
    ctx->pc = 0x2c53acu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x2c53b0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2c53b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c53b4: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x2c53b4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2c53b8: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2c53b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c53bc: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2c53bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2c53c0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2c53c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c53c4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2c53c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2c53c8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2c53c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2c53cc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c53ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c53d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c53d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c53d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c53d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c53d8: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2c53d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2c53dc: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x2c53dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c53e0: 0xc6230020  lwc1        $f3, 0x20($s1)
    ctx->pc = 0x2c53e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c53e4: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x2c53e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c53e8: 0x46032981  sub.s       $f6, $f5, $f3
    ctx->pc = 0x2c53e8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2c53ec: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2c53ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c53f0: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2c53f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2c53f4: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x2c53f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c53f8: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x2c53f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x2c53fc: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2c53fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5400: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2c5400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2c5404: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c5404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c5408: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2c5408u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2c540c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c540cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c5410: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c5410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5414: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2c5414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2c5418: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x2c5418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c541c: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x2c541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5420: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x2c5420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5424: 0x46032981  sub.s       $f6, $f5, $f3
    ctx->pc = 0x2c5424u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2c5428: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2c5428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c542c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2c542cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2c5430: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x2c5430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5434: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x2c5434u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x2c5438: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2c5438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c543c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2c543cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2c5440: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2c5440u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2c5444: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2c5444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2c5448: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c5448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c544c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c544cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5450: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2C5450u;
    SET_GPR_U32(ctx, 31, 0x2C5458u);
    ctx->pc = 0x2C5454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5450u;
    // 0x2c5454: 0xe6400038  swc1        $f0, 0x38($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2C5450u, 0x2C5458u)) {
        return;
    }
    ctx->pc = 0x2C5458u;
label_2c5458:
    // 0x2c5458: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c5458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c545c: 0x0  nop
    ctx->pc = 0x2c545cu;
    // NOP
    // 0x2c5460: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x2C5460u;
    {
        const bool branch_taken_0x2c5460 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5460u;
        // 0x2c5464: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5460) {
            ctx->pc = 0x2C5518u;
            goto label_2c5518;
        }
    }
    ctx->pc = 0x2C5468u;
label_2c5468:
    // 0x2c5468: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c5468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c546c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2c546cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c5470: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2c5470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5478: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x2c5478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c547c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c5480: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2c5480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5484: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c5484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5488: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x2c5488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c548c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c548cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5490: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2c5490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2c5494: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5498: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2c5498u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2c549c: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x2c549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c54a0: 0xc6410038  lwc1        $f1, 0x38($s2)
    ctx->pc = 0x2c54a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c54a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c54a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c54a8: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x2c54a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2c54ac: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c54acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c54b0: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x2c54b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2c54b4: 0xe81818  mult        $v1, $a3, $t0
    ctx->pc = 0x2c54b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2c54b8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2c54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2c54bc: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x2c54bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x2c54c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c54c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c54c4: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2c54c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2c54c8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2c54c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2c54cc: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x2c54ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x2c54d0: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x2c54d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c54d4: 0x692a0007  ldl         $t2, 0x7($t1)
    ctx->pc = 0x2c54d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2c54d8: 0x6d2a0000  ldr         $t2, 0x0($t1)
    ctx->pc = 0x2c54d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2c54dc: 0xb20a0007  sdl         $t2, 0x7($s0)
    ctx->pc = 0x2c54dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c54e0: 0xb60a0000  sdr         $t2, 0x0($s0)
    ctx->pc = 0x2c54e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c54e4: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x2c54e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2c54e8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2c54e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2c54ec: 0xa6090004  sh          $t1, 0x4($s0)
    ctx->pc = 0x2c54ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x2c54f0: 0xc0aa7e0  jal         func_2A9F80
    ctx->pc = 0x2C54F0u;
    SET_GPR_U32(ctx, 31, 0x2C54F8u);
    ctx->pc = 0x2C54F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C54F0u;
    // 0x2c54f4: 0xae1e0010  sw          $fp, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9F80u, 0x2C54F0u, 0x2C54F8u)) {
        return;
    }
    ctx->pc = 0x2C54F8u;
label_2c54f8:
    // 0x2c54f8: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x2c54f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2c54fc: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x2c54fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c5500: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2c5500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2c5504: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c5504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c5508: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2c5508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2c550c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c5510: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2c5510u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x2c5514: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2c5514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c5518:
    // 0x2c5518: 0x26d6004c  addiu       $s6, $s6, 0x4C
    ctx->pc = 0x2c5518u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 76));
    // 0x2c551c: 0x2631004c  addiu       $s1, $s1, 0x4C
    ctx->pc = 0x2c551cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x2c5520: 0x26f7004c  addiu       $s7, $s7, 0x4C
    ctx->pc = 0x2c5520u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 76));
    // 0x2c5524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c5524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c5528: 0x2694004c  addiu       $s4, $s4, 0x4C
    ctx->pc = 0x2c5528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    // 0x2c552c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2c552cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2c5530: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2c5530u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c5534:
    // 0x2c5534: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x2c5534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2c5538: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2c5538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2c553c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c553cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c5540: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C5540u;
    {
        const bool branch_taken_0x2c5540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5540u;
        // 0x2c5544: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5540) {
            ctx->pc = 0x2C558Cu;
            goto label_2c558c;
        }
    }
    ctx->pc = 0x2C5548u;
    // 0x2c5548: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2c554c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2c554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2c5550: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C5550u;
    {
        const bool branch_taken_0x2c5550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5550u;
        // 0x2c5554: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5550) {
            ctx->pc = 0x2C5518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5518;
        }
    }
    ctx->pc = 0x2C5558u;
    // 0x2c5558: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x2c5558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x2c555c: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x2c555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x2c5560: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2c5560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c5564: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5564u;
    {
        const bool branch_taken_0x2c5564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5564u;
        // 0x2c5568: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5564) {
            ctx->pc = 0x2C5584u;
            goto label_2c5584;
        }
    }
    ctx->pc = 0x2C556Cu;
    // 0x2c556c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x2c556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2c5570: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2c5570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2c5574: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c5574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c5578: 0x1440ff47  bnez        $v0, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x2C5578u;
    {
        const bool branch_taken_0x2c5578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5578u;
        // 0x2c557c: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5578) {
            ctx->pc = 0x2C5298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5298;
        }
    }
    ctx->pc = 0x2C5580u;
    // 0x2c5580: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5584:
    // 0x2c5584: 0xae640078  sw          $a0, 0x78($s3)
    ctx->pc = 0x2c5584u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 4));
    // 0x2c5588: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c5588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2c558c:
    // 0x2c558c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2c558cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c5590: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2c5590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c5594: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2c5594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c5598: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2c5598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c559c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2c559cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c55a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c55a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c55a4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2c55a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c55a8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2c55a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c55ac: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2c55acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c55b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c55b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c55b4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2c55b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c55b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C55B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C55BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C55B8u;
        // 0x2c55bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C55B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C55C0u;
}
