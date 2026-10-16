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

// Function: sub_00170200
// Address: 0x170200 - 0x170320
void sub_00170200_0x170200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170200_0x170200");
#endif

    switch (ctx->pc) {
        case 0x170260u: goto label_170260;
        case 0x170278u: goto label_170278;
        case 0x1702e4u: goto label_1702e4;
        default: break;
    }

    ctx->pc = 0x170200u;

    // 0x170200: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x170200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x170204: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x170204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x170208: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x170208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x17020c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x17020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x170210: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x170210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x170214: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x170214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x170218: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x170218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17021c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x17021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170220: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x170220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170224: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x170224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170228: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x170228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17022c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17022cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x170230: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x170230u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x170234: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x170234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x170238: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x170238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17023c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x17023cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x170240: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x170240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x170244: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x170244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x170248: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x170248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17024c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x17024cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170250: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x170250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170254: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x170254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x170258: 0xc065aa0  jal         func_196A80
    ctx->pc = 0x170258u;
    SET_GPR_U32(ctx, 31, 0x170260u);
    ctx->pc = 0x17025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170258u;
    // 0x17025c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196A80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196A80u, 0x170258u, 0x170260u)) {
        return;
    }
    ctx->pc = 0x170260u;
label_170260:
    // 0x170260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170264: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x170264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170268: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x170268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17026c: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x17026Cu;
    {
        const bool branch_taken_0x17026c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x170270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17026Cu;
        // 0x170270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17026c) {
            ctx->pc = 0x170304u;
            goto label_170304;
        }
    }
    ctx->pc = 0x170274u;
    // 0x170274: 0x0  nop
    ctx->pc = 0x170274u;
    // NOP
label_170278:
    // 0x170278: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x170278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17027c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x170280: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x170280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x170284: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x170284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170288: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x170288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17028c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x170290: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x170290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x170294: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x170294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170298: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x170298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x17029c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1702a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1702a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1702a4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1702a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1702a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1702a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1702ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1702acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1702b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1702b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1702b4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1702b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1702b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1702b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1702bc: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x1702bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1702c0: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x1702c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1702c4: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x1702c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702c8: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x1702c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702cc: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x1702ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1702d0: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x1702d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1702d4: 0xb3a7003f  sdl         $a3, 0x3F($sp)
    ctx->pc = 0x1702d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702d8: 0xb7a70038  sdr         $a3, 0x38($sp)
    ctx->pc = 0x1702d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1702dc: 0xc05be9a  jal         func_16FA68
    ctx->pc = 0x1702DCu;
    SET_GPR_U32(ctx, 31, 0x1702E4u);
    ctx->pc = 0x1702E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702DCu;
    // 0x1702e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16FA68u, 0x1702DCu, 0x1702E4u)) {
        return;
    }
    ctx->pc = 0x1702E4u;
label_1702e4:
    // 0x1702e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1702E4u;
    {
        const bool branch_taken_0x1702e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1702E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702E4u;
        // 0x1702e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702e4) {
            ctx->pc = 0x170308u;
            goto label_170308;
        }
    }
    ctx->pc = 0x1702ECu;
    // 0x1702ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1702ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1702f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1702f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1702f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1702f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1702f8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1702f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1702fc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1702FCu;
    {
        const bool branch_taken_0x1702fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702FCu;
        // 0x170300: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702fc) {
            ctx->pc = 0x170278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170278;
        }
    }
    ctx->pc = 0x170304u;
label_170304:
    // 0x170304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170308:
    // 0x170308: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x170308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17030c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x17030cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x170310: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x170310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170314: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x170314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170318: 0x3e00008  jr          $ra
    ctx->pc = 0x170318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170318u;
        // 0x17031c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170320u;
}
