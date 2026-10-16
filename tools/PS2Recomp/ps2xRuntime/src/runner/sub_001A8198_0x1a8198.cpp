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

// Function: sub_001A8198
// Address: 0x1a8198 - 0x1a8330
void sub_001A8198_0x1a8198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8198_0x1a8198");
#endif

    switch (ctx->pc) {
        case 0x1a8258u: goto label_1a8258;
        case 0x1a8280u: goto label_1a8280;
        case 0x1a82f0u: goto label_1a82f0;
        default: break;
    }

    ctx->pc = 0x1a8198u;

    // 0x1a8198: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1a8198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1a819c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1a819cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1a81a0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1a81a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1a81a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a81a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81a8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1a81a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1a81ac: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1a81acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81b0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1a81b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1a81b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a81b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81b8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1a81b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1a81bc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1a81bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1a81c0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1a81c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1a81c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a81c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a81c8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1a81c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a81cc: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x1a81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a81d0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1a81d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a81d4: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x1a81d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a81d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a81d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a81dc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1a81dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a81e0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a81e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a81e4: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1a81e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a81e8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a81e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a81ec: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a81ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a81f0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1a81f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a81f4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1a81f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a81f8: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x1a81f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a81fc: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x1a81fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a8200: 0xb3a2002f  sdl         $v0, 0x2F($sp)
    ctx->pc = 0x1a8200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8204: 0xb7a20028  sdr         $v0, 0x28($sp)
    ctx->pc = 0x1a8204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8208: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a8208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a820c: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x1A820Cu;
    {
        const bool branch_taken_0x1a820c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A820Cu;
        // 0x1a8210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a820c) {
            ctx->pc = 0x1A8304u;
            goto label_1a8304;
        }
    }
    ctx->pc = 0x1A8214u;
    // 0x1a8214: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1a8214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1a8218: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A8218u;
    {
        const bool branch_taken_0x1a8218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8218u;
        // 0x1a821c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8218) {
            ctx->pc = 0x1A8260u;
            goto label_1a8260;
        }
    }
    ctx->pc = 0x1A8220u;
    // 0x1a8220: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1a8220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a8224: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1a8224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a8228: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a8228u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a822c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A822Cu;
    {
        const bool branch_taken_0x1a822c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a822c) {
            ctx->pc = 0x1A8230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A822Cu;
            // 0x1a8230: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8234u;
            goto label_1a8234;
        }
    }
    ctx->pc = 0x1A8234u;
label_1a8234:
    // 0x1a8234: 0x2812  mflo        $a1
    ctx->pc = 0x1a8234u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1a8238: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A8238u;
    {
        const bool branch_taken_0x1a8238 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8238u;
        // 0x1a823c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8238) {
            ctx->pc = 0x1A8264u;
            goto label_1a8264;
        }
    }
    ctx->pc = 0x1A8240u;
    // 0x1a8240: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1a8240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1a8244: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1a8244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a8248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8248u;
    {
        const bool branch_taken_0x1a8248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8248u;
        // 0x1a824c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8248) {
            ctx->pc = 0x1A8260u;
            goto label_1a8260;
        }
    }
    ctx->pc = 0x1A8250u;
    // 0x1a8250: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8250u;
    {
        const bool branch_taken_0x1a8250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8250u;
        // 0x1a8254: 0xa7a20050  sh          $v0, 0x50($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8250) {
            ctx->pc = 0x1A8268u;
            goto label_1a8268;
        }
    }
    ctx->pc = 0x1A8258u;
label_1a8258:
    // 0x1a8258: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A8258u;
    {
        const bool branch_taken_0x1a8258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8258u;
        // 0x1a825c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8258) {
            ctx->pc = 0x1A8304u;
            goto label_1a8304;
        }
    }
    ctx->pc = 0x1A8260u;
label_1a8260:
    // 0x1a8260: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a8260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a8264:
    // 0x1a8264: 0xa7a20050  sh          $v0, 0x50($sp)
    ctx->pc = 0x1a8264u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 2));
label_1a8268:
    // 0x1a8268: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x1a8268u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
    // 0x1a826c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1a826cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a8270: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1a8270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a8274: 0x27b10054  addiu       $s1, $sp, 0x54
    ctx->pc = 0x1a8274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1a8278: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A8278u;
    {
        const bool branch_taken_0x1a8278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8278u;
        // 0x1a827c: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8278) {
            ctx->pc = 0x1A82DCu;
            goto label_1a82dc;
        }
    }
    ctx->pc = 0x1A8280u;
label_1a8280:
    // 0x1a8280: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x1a8280u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8284: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a8284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a8288: 0x1062fff3  beq         $v1, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A8288u;
    {
        const bool branch_taken_0x1a8288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8288u;
        // 0x1a828c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8288) {
            ctx->pc = 0x1A8258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8258;
        }
    }
    ctx->pc = 0x1A8290u;
    // 0x1a8290: 0x2c4203e8  sltiu       $v0, $v0, 0x3E8
    ctx->pc = 0x1a8290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1a8294: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A8294u;
    {
        const bool branch_taken_0x1a8294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8294u;
        // 0x1a8298: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8294) {
            ctx->pc = 0x1A8258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8258;
        }
    }
    ctx->pc = 0x1A829Cu;
    // 0x1a829c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1a829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1a82a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A82A0u;
    {
        const bool branch_taken_0x1a82a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82A0u;
        // 0x1a82a4: 0x97a40050  lhu         $a0, 0x50($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82a0) {
            ctx->pc = 0x1A82B8u;
            goto label_1a82b8;
        }
    }
    ctx->pc = 0x1A82A8u;
    // 0x1a82a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1a82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1a82ac: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1a82acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a82b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A82B0u;
    {
        const bool branch_taken_0x1a82b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A82B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82B0u;
        // 0x1a82b4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82b0) {
            ctx->pc = 0x1A82C0u;
            goto label_1a82c0;
        }
    }
    ctx->pc = 0x1A82B8u;
label_1a82b8:
    // 0x1a82b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A82B8u;
    {
        const bool branch_taken_0x1a82b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82B8u;
        // 0x1a82bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82b8) {
            ctx->pc = 0x1A82C8u;
            goto label_1a82c8;
        }
    }
    ctx->pc = 0x1A82C0u;
label_1a82c0:
    // 0x1a82c0: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x1a82c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a82c4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1a82c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a82c8:
    // 0x1a82c8: 0x9482002e  lhu         $v0, 0x2E($a0)
    ctx->pc = 0x1a82c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x1a82cc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a82ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1a82d0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A82D0u;
    {
        const bool branch_taken_0x1a82d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A82D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82D0u;
        // 0x1a82d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82d0) {
            ctx->pc = 0x1A8304u;
            goto label_1a8304;
        }
    }
    ctx->pc = 0x1A82D8u;
    // 0x1a82d8: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x1a82d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_1a82dc:
    // 0x1a82dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a82dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a82e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a82e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82e8: 0xc069cd6  jal         func_1A7358
    ctx->pc = 0x1A82E8u;
    SET_GPR_U32(ctx, 31, 0x1A82F0u);
    ctx->pc = 0x1A82ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A82E8u;
    // 0x1a82ec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7358u, 0x1A82E8u, 0x1A82F0u)) {
        return;
    }
    ctx->pc = 0x1A82F0u;
label_1a82f0:
    // 0x1a82f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a82f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a82f8: 0x1062ffe1  beq         $v1, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1A82F8u;
    {
        const bool branch_taken_0x1a82f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A82F8u;
        // 0x1a82fc: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82f8) {
            ctx->pc = 0x1A8280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8280;
        }
    }
    ctx->pc = 0x1A8300u;
    // 0x1a8300: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a8304:
    // 0x1a8304: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1a8304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a8308: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1a8308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a830c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1a830cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a8310: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1a8310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8314: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1a8314u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a8318: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1a8318u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a831c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1a831cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8320: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a8320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a8324: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8324u;
        // 0x1a8328: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A832Cu;
    // 0x1a832c: 0x0  nop
    ctx->pc = 0x1a832cu;
    // NOP
    ctx->pc = 0x1a8330u;
}
