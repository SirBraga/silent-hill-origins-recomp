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

// Function: sub_00199190
// Address: 0x199190 - 0x199288
void sub_00199190_0x199190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199190_0x199190");
#endif

    switch (ctx->pc) {
        case 0x1991bcu: goto label_1991bc;
        case 0x199214u: goto label_199214;
        case 0x199264u: goto label_199264;
        case 0x199274u: goto label_199274;
        default: break;
    }

    ctx->pc = 0x199190u;

    // 0x199190: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x199190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x199194: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x199194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199198: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x199198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x19919c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19919cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991a0: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1991a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1991a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1991a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1991a8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1991a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1991ac: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x1991acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x1991b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1991B0u;
    {
        const bool branch_taken_0x1991b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991B0u;
        // 0x1991b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991b0) {
            ctx->pc = 0x199210u;
            goto label_199210;
        }
    }
    ctx->pc = 0x1991B8u;
    // 0x1991b8: 0x24c20100  addiu       $v0, $a2, 0x100
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
label_1991bc:
    // 0x1991bc: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x1991bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1991c0: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x1991c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1991c4: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x1991c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1991c8: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x1991c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1991cc: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x1991ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1991d0: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x1991d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1991d4: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1991d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1991d8: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1991d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1991dc: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x1991dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1991e0: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x1991e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1991e4: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x1991e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1991e8: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x1991e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1991ec: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x1991ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1991f0: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x1991f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1991f4: 0xb0e8001f  sdl         $t0, 0x1F($a3)
    ctx->pc = 0x1991f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1991f8: 0xb4e80018  sdr         $t0, 0x18($a3)
    ctx->pc = 0x1991f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1991fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1991fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x199200: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x199200u;
    {
        const bool branch_taken_0x199200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199200u;
        // 0x199204: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199200) {
            ctx->pc = 0x1991BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1991bc;
        }
    }
    ctx->pc = 0x199208u;
    // 0x199208: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x199208u;
    {
        const bool branch_taken_0x199208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199208) {
            ctx->pc = 0x199240u;
            goto label_199240;
        }
    }
    ctx->pc = 0x199210u;
label_199210:
    // 0x199210: 0x24c20100  addiu       $v0, $a2, 0x100
    ctx->pc = 0x199210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
label_199214:
    // 0x199214: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x199214u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199218: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x199218u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19921c: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x19921cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x199220: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x199220u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x199224: 0xfce90000  sd          $t1, 0x0($a3)
    ctx->pc = 0x199224u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 9));
    // 0x199228: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x199228u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x19922c: 0xfce50010  sd          $a1, 0x10($a3)
    ctx->pc = 0x19922cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 5));
    // 0x199230: 0xfce60018  sd          $a2, 0x18($a3)
    ctx->pc = 0x199230u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 6));
    // 0x199234: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x199234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x199238: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x199238u;
    {
        const bool branch_taken_0x199238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199238u;
        // 0x19923c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199238) {
            ctx->pc = 0x199214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199214;
        }
    }
    ctx->pc = 0x199240u;
label_199240:
    // 0x199240: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x199240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x199244: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x199244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x199248: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x199248u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19924c: 0xb0e80007  sdl         $t0, 0x7($a3)
    ctx->pc = 0x19924cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199250: 0xb4e80000  sdr         $t0, 0x0($a3)
    ctx->pc = 0x199250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x199254: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x199254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199258: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x199258u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x19925c: 0xc0a5370  jal         func_294DC0
    ctx->pc = 0x19925Cu;
    SET_GPR_U32(ctx, 31, 0x199264u);
    ctx->pc = 0x199260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19925Cu;
    // 0x199260: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x294DC0u, 0x19925Cu, 0x199264u)) {
        return;
    }
    ctx->pc = 0x199264u;
label_199264:
    // 0x199264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199268: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19926c: 0xc0a966a  jal         func_2A59A8
    ctx->pc = 0x19926Cu;
    SET_GPR_U32(ctx, 31, 0x199274u);
    ctx->pc = 0x199270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19926Cu;
    // 0x199270: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A59A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A59A8u, 0x19926Cu, 0x199274u)) {
        return;
    }
    ctx->pc = 0x199274u;
label_199274:
    // 0x199274: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x199274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x199278: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x199278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x19927c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x19927cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x199280: 0x3e00008  jr          $ra
    ctx->pc = 0x199280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199280u;
        // 0x199284: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199288u;
}
