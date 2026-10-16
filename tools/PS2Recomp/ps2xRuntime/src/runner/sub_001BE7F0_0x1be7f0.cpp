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

// Function: sub_001BE7F0
// Address: 0x1be7f0 - 0x1be908
void sub_001BE7F0_0x1be7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE7F0_0x1be7f0");
#endif

    switch (ctx->pc) {
        case 0x1be844u: goto label_1be844;
        case 0x1be89cu: goto label_1be89c;
        default: break;
    }

    ctx->pc = 0x1be7f0u;

    // 0x1be7f0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1be7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1be7f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1be7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1be7f8: 0x24669330  addiu       $a2, $v1, -0x6CD0
    ctx->pc = 0x1be7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939440));
    // 0x1be7fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1be7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1be800: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1be800u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1be804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1be804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be808: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1be808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1be80c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1be80cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be810: 0x2442d700  addiu       $v0, $v0, -0x2900
    ctx->pc = 0x1be810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956800));
    // 0x1be814: 0x861825  or          $v1, $a0, $a2
    ctx->pc = 0x1be814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1be818: 0xac8200f8  sw          $v0, 0xF8($a0)
    ctx->pc = 0x1be818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 2));
    // 0x1be81c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1be81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be820: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x1be820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
    // 0x1be824: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1be824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1be828: 0xe48100ec  swc1        $f1, 0xEC($a0)
    ctx->pc = 0x1be828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x1be82c: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x1be82cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x1be830: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x1be830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x1be834: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1be834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x1be838: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BE838u;
    {
        const bool branch_taken_0x1be838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE838u;
        // 0x1be83c: 0xac8000f0  sw          $zero, 0xF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be838) {
            ctx->pc = 0x1BE898u;
            goto label_1be898;
        }
    }
    ctx->pc = 0x1BE840u;
    // 0x1be840: 0x24c200c0  addiu       $v0, $a2, 0xC0
    ctx->pc = 0x1be840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
label_1be844:
    // 0x1be844: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1be844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1be848: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1be848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1be84c: 0x68c7000f  ldl         $a3, 0xF($a2)
    ctx->pc = 0x1be84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1be850: 0x6cc70008  ldr         $a3, 0x8($a2)
    ctx->pc = 0x1be850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1be854: 0x68c80017  ldl         $t0, 0x17($a2)
    ctx->pc = 0x1be854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1be858: 0x6cc80010  ldr         $t0, 0x10($a2)
    ctx->pc = 0x1be858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1be85c: 0x68c9001f  ldl         $t1, 0x1F($a2)
    ctx->pc = 0x1be85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1be860: 0x6cc90018  ldr         $t1, 0x18($a2)
    ctx->pc = 0x1be860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1be864: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x1be864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be868: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x1be868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be86c: 0xb0a7000f  sdl         $a3, 0xF($a1)
    ctx->pc = 0x1be86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be870: 0xb4a70008  sdr         $a3, 0x8($a1)
    ctx->pc = 0x1be870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be874: 0xb0a80017  sdl         $t0, 0x17($a1)
    ctx->pc = 0x1be874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be878: 0xb4a80010  sdr         $t0, 0x10($a1)
    ctx->pc = 0x1be878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be87c: 0xb0a9001f  sdl         $t1, 0x1F($a1)
    ctx->pc = 0x1be87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be880: 0xb4a90018  sdr         $t1, 0x18($a1)
    ctx->pc = 0x1be880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be884: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1be884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1be888: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1BE888u;
    {
        const bool branch_taken_0x1be888 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE888u;
        // 0x1be88c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be888) {
            ctx->pc = 0x1BE844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be844;
        }
    }
    ctx->pc = 0x1BE890u;
    // 0x1be890: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BE890u;
    {
        const bool branch_taken_0x1be890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE890u;
        // 0x1be894: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be890) {
            ctx->pc = 0x1BE8CCu;
            goto label_1be8cc;
        }
    }
    ctx->pc = 0x1BE898u;
label_1be898:
    // 0x1be898: 0x24c200c0  addiu       $v0, $a2, 0xC0
    ctx->pc = 0x1be898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
label_1be89c:
    // 0x1be89c: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1be89cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1be8a0: 0xdcc70008  ld          $a3, 0x8($a2)
    ctx->pc = 0x1be8a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1be8a4: 0xdcc80010  ld          $t0, 0x10($a2)
    ctx->pc = 0x1be8a4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1be8a8: 0xdcc90018  ld          $t1, 0x18($a2)
    ctx->pc = 0x1be8a8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1be8ac: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1be8acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1be8b0: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x1be8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x1be8b4: 0xfca80010  sd          $t0, 0x10($a1)
    ctx->pc = 0x1be8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 8));
    // 0x1be8b8: 0xfca90018  sd          $t1, 0x18($a1)
    ctx->pc = 0x1be8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 9));
    // 0x1be8bc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1be8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1be8c0: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BE8C0u;
    {
        const bool branch_taken_0x1be8c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8C0u;
        // 0x1be8c4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be8c0) {
            ctx->pc = 0x1BE89Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be89c;
        }
    }
    ctx->pc = 0x1BE8C8u;
    // 0x1be8c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1be8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1be8cc:
    // 0x1be8cc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1be8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1be8d0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1be8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1be8d4: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1be8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1be8d8: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1be8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1be8dc: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x1be8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1be8e0: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x1be8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1be8e4: 0x8cc80018  lw          $t0, 0x18($a2)
    ctx->pc = 0x1be8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1be8e8: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x1be8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be8ec: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x1be8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be8f0: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x1be8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be8f4: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x1be8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be8f8: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x1be8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be8fc: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x1be8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1be900: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE900u;
        // 0x1be904: 0xaca80018  sw          $t0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE908u;
}
